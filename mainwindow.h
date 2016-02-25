#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void slotSelectUnSUESourceFile();
    void slotSelectSUESourcePath();
    void slotSelectUnSUETargetFile();
    void slotSelectSUETargetFile();

    void slotStartUnSUE();
    void slotStartSUE();

    void slotOnRread();
private:
    void _init();
    QProcess mProcess;
    QStringList mFiles;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
