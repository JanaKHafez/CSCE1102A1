/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

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

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonLog;
    QPushButton *pushButtonReg;
    QLabel *labelUser;
    QLabel *labelPass;
    QLineEdit *lineEditUser;
    QLineEdit *lineEditPass;
    QLabel *labelError;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(800, 600);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        pushButtonLog = new QPushButton(centralwidget);
        pushButtonLog->setObjectName("pushButtonLog");
        pushButtonLog->setGeometry(QRect(50, 130, 80, 31));
        pushButtonReg = new QPushButton(centralwidget);
        pushButtonReg->setObjectName("pushButtonReg");
        pushButtonReg->setGeometry(QRect(150, 130, 80, 31));
        labelUser = new QLabel(centralwidget);
        labelUser->setObjectName("labelUser");
        labelUser->setGeometry(QRect(20, 40, 131, 16));
        labelPass = new QLabel(centralwidget);
        labelPass->setObjectName("labelPass");
        labelPass->setGeometry(QRect(20, 70, 81, 16));
        lineEditUser = new QLineEdit(centralwidget);
        lineEditUser->setObjectName("lineEditUser");
        lineEditUser->setGeometry(QRect(90, 40, 113, 20));
        lineEditPass = new QLineEdit(centralwidget);
        lineEditPass->setObjectName("lineEditPass");
        lineEditPass->setGeometry(QRect(90, 70, 113, 20));
        lineEditPass->setEchoMode(QLineEdit::Password);
        labelError = new QLabel(centralwidget);
        labelError->setObjectName("labelError");
        labelError->setGeometry(QRect(20, 100, 231, 20));
        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 19));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        pushButtonLog->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        pushButtonReg->setText(QCoreApplication::translate("LoginWindow", "Register", nullptr));
        labelUser->setText(QCoreApplication::translate("LoginWindow", "Username", nullptr));
        labelPass->setText(QCoreApplication::translate("LoginWindow", "Password", nullptr));
        labelError->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">Error: wrong username or password</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
