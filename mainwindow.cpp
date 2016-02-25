#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileInfo>
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    mProcess(this),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotSelectUnSUESourceFile()
{
    QFileInfo fileInfo;
    QString fileNames;
    QStringList sourceFiles = QFileDialog::getOpenFileNames(this,QString::fromLocal8Bit("选择要解包的sue文件(可多选)"),"",QString::fromLocal8Bit("Sue文件 (*.sue)"));

    if(sourceFiles.count() == 0)
    {
        return;
    }

    mFiles.clear();
    mFiles = sourceFiles;

	for (auto str : mFiles)
    {
        fileInfo.setFile(str);
        QString baseName = "\"" + fileInfo.baseName() + "\"" + " ";
        fileNames.append(baseName);
    }

    ui->sourceSueLineEdit->setText(fileNames);
}

void MainWindow::slotSelectSUESourcePath()
{
    QString targetPath = QFileDialog::getExistingDirectory(this,QString::fromLocal8Bit("选择解包后文件存放的路径"));
    ui->targetDirLineEdit->setText(targetPath);
}

void MainWindow::slotSelectUnSUETargetFile()
{
    QString targetPath = QFileDialog::getExistingDirectory(this,QString::fromLocal8Bit("选择要打包的文件路径"));
    ui->sourceDirlineEdit->setText(targetPath);
    QDir dir(targetPath);
    QString baseName = dir.dirName();
    if(dir.cdUp())
    {
        QString defaultName = dir.absolutePath() + "/" + baseName + ".sue";
        ui->targetSueDirlineEdit->setText(defaultName);
    }
}

void MainWindow::slotSelectSUETargetFile()
{
    QString targetPath = QFileDialog::getSaveFileName(this,QString::fromLocal8Bit("选择打包后文件存放的路径"),"",QString::fromLocal8Bit("Sue文件 (*.sue)"));
    ui->targetSueDirlineEdit->setText(targetPath);
}

void MainWindow::slotStartUnSUE()
{
    if(mFiles.count() == 0)
    {
        QMessageBox::critical(this,QString::fromLocal8Bit("错误"),QString::fromLocal8Bit("请选择要解包的sue文件。"));
        return;
    }

    QString path = ui->targetDirLineEdit->text();
    QDir dir(path);
    if(path == "" || !dir.exists(path))
    {
        QMessageBox::critical(this,QString::fromLocal8Bit("错误"),QString::fromLocal8Bit("请选择正确的生成路径。"));
        return;
    }

    QStringList arguments;
    QFileInfo fileInfo;
	ui->unsueBtn->setText(QString::fromLocal8Bit("解包中..."));
	ui->unsueBtn->setEnabled(false);
	qApp->processEvents();
    for(auto sourcePath : mFiles)
    {
        fileInfo.setFile(sourcePath);
        QString baseName = fileInfo.baseName();

        arguments.clear();

        if(ui->checkBox->isChecked())
        {
            arguments<<sourcePath<<path + "//" + baseName;
        }
        else
        {
             arguments<<sourcePath<<path;
        }
        mProcess.start("UNSUE.EXE",arguments);
        mProcess.waitForFinished();
        mProcess.close();
        qApp->processEvents();
    }
	ui->unsueBtn->setEnabled(true);
	ui->unsueBtn->setText(QString::fromLocal8Bit("解包"));
}

void MainWindow::slotStartSUE()
{
    QString sourceDir = ui->sourceDirlineEdit->text();
    QString targetDit = ui->targetSueDirlineEdit->text();
    QDir dir(sourceDir);
    if(sourceDir == "" || !dir.exists())
    {
        QMessageBox::critical(this,QString::fromLocal8Bit("错误"),QString::fromLocal8Bit("请选择正确的源文件夹路径。"));
        return;
    }
    dir.setPath(targetDit);
    if(targetDit == "")
    {
        QMessageBox::critical(this,QString::fromLocal8Bit("错误"),QString::fromLocal8Bit("名称不能为空。"));
        return;
    }
	ui->sueBtn->setText(QString::fromLocal8Bit("打包中..."));
	ui->sueBtn->setEnabled(false);
	qApp->processEvents();
    QStringList arguments;
    arguments<<targetDit<<sourceDir + "/";

    mProcess.start("SUE.EXE",arguments);
    mProcess.waitForFinished();
    mProcess.close();

	ui->sueBtn->setEnabled(true);
	ui->sueBtn->setText(QString::fromLocal8Bit("打包"));
	qApp->processEvents();
}

void MainWindow::slotOnRread()
{
    QProcess *proc=(QProcess *)sender();
    QString result=proc->readAll();
    ui->outputTextEdit->append(result);
}

void MainWindow::_init()
{
	this->setWindowFlags(this->windowFlags() &~(Qt::WindowMinMaxButtonsHint)/* | Qt::WindowContextHelpButtonHint*/);

    connect(ui->selectBtn1,SIGNAL(clicked()),this,SLOT(slotSelectUnSUESourceFile()));
    connect(ui->selectBtn2,SIGNAL(clicked()),this,SLOT(slotSelectSUESourcePath()));
    connect(ui->selectBtn3,SIGNAL(clicked()),this,SLOT(slotSelectUnSUETargetFile()));
    connect(ui->selectBtn4,SIGNAL(clicked()),this,SLOT(slotSelectSUETargetFile()));

    connect(ui->unsueBtn,SIGNAL(clicked()),this,SLOT(slotStartUnSUE()));
    connect(ui->sueBtn,SIGNAL(clicked()),this,SLOT(slotStartSUE()));

    connect(&mProcess,SIGNAL(readyRead()),this,SLOT(slotOnRread()));
}
