/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *vidLineEdit;
    QLineEdit *pidLineEdit;
    QPushButton *openButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *firstNum;
    QLineEdit *secondNum;
    QLineEdit *result;
    QLabel *label_5;
    QPushButton *addButton;
    QPushButton *subtractButton;
    QPushButton *multiplyButton;
    QPushButton *divideButton;
    QLabel *label_6;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setMinimumSize(QSize(462, 471));
        MainWindow->setMaximumSize(QSize(462, 471));
        MainWindow->setBaseSize(QSize(462, 471));
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        vidLineEdit = new QLineEdit(centralwidget);
        vidLineEdit->setObjectName("vidLineEdit");
        vidLineEdit->setGeometry(QRect(90, 90, 113, 24));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cambria Math")});
        font.setPointSize(10);
        vidLineEdit->setFont(font);
        pidLineEdit = new QLineEdit(centralwidget);
        pidLineEdit->setObjectName("pidLineEdit");
        pidLineEdit->setGeometry(QRect(260, 90, 113, 24));
        pidLineEdit->setFont(font);
        openButton = new QPushButton(centralwidget);
        openButton->setObjectName("openButton");
        openButton->setGeometry(QRect(180, 130, 80, 24));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Berlin Sans FB")});
        font1.setBold(true);
        openButton->setFont(font1);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 70, 131, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Berlin Sans FB")});
        font2.setPointSize(11);
        font2.setBold(true);
        label->setFont(font2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(270, 70, 121, 20));
        label_2->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 180, 111, 16));
        label_3->setFont(font2);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(240, 180, 141, 20));
        label_4->setFont(font2);
        firstNum = new QLineEdit(centralwidget);
        firstNum->setObjectName("firstNum");
        firstNum->setGeometry(QRect(70, 200, 113, 24));
        firstNum->setFont(font);
        secondNum = new QLineEdit(centralwidget);
        secondNum->setObjectName("secondNum");
        secondNum->setGeometry(QRect(240, 200, 131, 24));
        secondNum->setFont(font);
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(160, 260, 113, 24));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Cambria")});
        font3.setPointSize(10);
        font3.setBold(true);
        result->setFont(font3);
        result->setReadOnly(true);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(190, 240, 101, 16));
        label_5->setFont(font2);
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(100, 300, 80, 24));
        addButton->setFont(font2);
        subtractButton = new QPushButton(centralwidget);
        subtractButton->setObjectName("subtractButton");
        subtractButton->setGeometry(QRect(240, 300, 80, 24));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Berlin Sans FB")});
        font4.setPointSize(10);
        font4.setBold(true);
        subtractButton->setFont(font4);
        multiplyButton = new QPushButton(centralwidget);
        multiplyButton->setObjectName("multiplyButton");
        multiplyButton->setGeometry(QRect(100, 360, 80, 24));
        multiplyButton->setFont(font4);
        divideButton = new QPushButton(centralwidget);
        divideButton->setObjectName("divideButton");
        divideButton->setGeometry(QRect(240, 360, 80, 24));
        divideButton->setFont(font4);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 0, 401, 21));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Times New Roman")});
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setItalic(true);
        label_6->setFont(font5);
        label_6->setAutoFillBackground(false);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(60, 20, 361, 20));
        label_7->setFont(font5);
        label_7->setAutoFillBackground(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 462, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        openButton->setText(QCoreApplication::translate("MainWindow", "CONNECT", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "VENDOR ID", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "PRODUCT ID", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "FIRST NUMBER", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "SECOND NUMBER ", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "RESULT", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "ADD", nullptr));
        subtractButton->setText(QCoreApplication::translate("MainWindow", "SUBTRACT", nullptr));
        multiplyButton->setText(QCoreApplication::translate("MainWindow", "MULTIPLY", nullptr));
        divideButton->setText(QCoreApplication::translate("MainWindow", "DIVIDE", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Connect to your Arduino by entering the Vendor and Product ID of your ", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Arduino in the text fields below and commence your calculations.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
