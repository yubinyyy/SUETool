/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *selectBtn2;
    QLabel *label;
    QLineEdit *targetDirLineEdit;
    QPushButton *selectBtn1;
    QLineEdit *sourceSueLineEdit;
    QPushButton *unsueBtn;
    QCheckBox *checkBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLineEdit *sourceDirlineEdit;
    QLabel *label_4;
    QPushButton *selectBtn3;
    QLineEdit *targetSueDirlineEdit;
    QLabel *label_3;
    QPushButton *sueBtn;
    QPushButton *selectBtn4;
    QTextEdit *outputTextEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(340, 518);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(128, 128));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        selectBtn2 = new QPushButton(groupBox);
        selectBtn2->setObjectName(QStringLiteral("selectBtn2"));

        gridLayout->addWidget(selectBtn2, 3, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        targetDirLineEdit = new QLineEdit(groupBox);
        targetDirLineEdit->setObjectName(QStringLiteral("targetDirLineEdit"));

        gridLayout->addWidget(targetDirLineEdit, 3, 0, 1, 1);

        selectBtn1 = new QPushButton(groupBox);
        selectBtn1->setObjectName(QStringLiteral("selectBtn1"));

        gridLayout->addWidget(selectBtn1, 1, 1, 1, 1);

        sourceSueLineEdit = new QLineEdit(groupBox);
        sourceSueLineEdit->setObjectName(QStringLiteral("sourceSueLineEdit"));
        sourceSueLineEdit->setReadOnly(true);

        gridLayout->addWidget(sourceSueLineEdit, 1, 0, 1, 1);

        unsueBtn = new QPushButton(groupBox);
        unsueBtn->setObjectName(QStringLiteral("unsueBtn"));

        gridLayout->addWidget(unsueBtn, 4, 1, 1, 1);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setChecked(true);

        gridLayout->addWidget(checkBox, 4, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        sourceDirlineEdit = new QLineEdit(groupBox_2);
        sourceDirlineEdit->setObjectName(QStringLiteral("sourceDirlineEdit"));

        gridLayout_2->addWidget(sourceDirlineEdit, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        selectBtn3 = new QPushButton(groupBox_2);
        selectBtn3->setObjectName(QStringLiteral("selectBtn3"));

        gridLayout_2->addWidget(selectBtn3, 1, 1, 1, 1);

        targetSueDirlineEdit = new QLineEdit(groupBox_2);
        targetSueDirlineEdit->setObjectName(QStringLiteral("targetSueDirlineEdit"));

        gridLayout_2->addWidget(targetSueDirlineEdit, 3, 0, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        sueBtn = new QPushButton(groupBox_2);
        sueBtn->setObjectName(QStringLiteral("sueBtn"));

        gridLayout_2->addWidget(sueBtn, 4, 1, 1, 1);

        selectBtn4 = new QPushButton(groupBox_2);
        selectBtn4->setObjectName(QStringLiteral("selectBtn4"));

        gridLayout_2->addWidget(selectBtn4, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        outputTextEdit = new QTextEdit(centralWidget);
        outputTextEdit->setObjectName(QStringLiteral("outputTextEdit"));

        verticalLayout->addWidget(outputTextEdit);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SUETool-V1.0", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\350\247\243\345\214\205", 0));
        label_2->setText(QApplication::translate("MainWindow", "\347\233\256\346\240\207\346\226\207\344\273\266\345\244\271:", 0));
        selectBtn2->setText(QApplication::translate("MainWindow", "\346\265\217\350\247\210", 0));
        label->setText(QApplication::translate("MainWindow", "\346\272\220sue\346\226\207\344\273\266:", 0));
        selectBtn1->setText(QApplication::translate("MainWindow", "\346\265\217\350\247\210", 0));
        unsueBtn->setText(QApplication::translate("MainWindow", "\350\247\243\345\214\205", 0));
        checkBox->setText(QApplication::translate("MainWindow", "\345\210\233\345\273\272\345\255\220\346\226\207\344\273\266\345\244\271", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\211\223\345\214\205", 0));
        label_4->setText(QApplication::translate("MainWindow", "\347\233\256\346\240\207sue\346\226\207\344\273\266:", 0));
        selectBtn3->setText(QApplication::translate("MainWindow", "\346\265\217\350\247\210", 0));
        label_3->setText(QApplication::translate("MainWindow", "\346\272\220\346\226\207\344\273\266\345\244\271:", 0));
        sueBtn->setText(QApplication::translate("MainWindow", "\346\211\223\345\214\205", 0));
        selectBtn4->setText(QApplication::translate("MainWindow", "\346\265\217\350\247\210", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
