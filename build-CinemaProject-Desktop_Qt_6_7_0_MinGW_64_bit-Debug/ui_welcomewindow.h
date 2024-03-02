/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QLabel *labelHello;
    QPushButton *pushButtonLogout;
    QLabel *labelImage;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName("WelcomeWindow");
        WelcomeWindow->resize(400, 300);
        labelHello = new QLabel(WelcomeWindow);
        labelHello->setObjectName("labelHello");
        labelHello->setGeometry(QRect(20, 20, 221, 16));
        pushButtonLogout = new QPushButton(WelcomeWindow);
        pushButtonLogout->setObjectName("pushButtonLogout");
        pushButtonLogout->setGeometry(QRect(30, 250, 80, 31));
        labelImage = new QLabel(WelcomeWindow);
        labelImage->setObjectName("labelImage");
        labelImage->setGeometry(QRect(30, 70, 281, 141));

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Dialog", nullptr));
        labelHello->setText(QCoreApplication::translate("WelcomeWindow", "Hello", nullptr));
        pushButtonLogout->setText(QCoreApplication::translate("WelcomeWindow", "Logout", nullptr));
        labelImage->setText(QCoreApplication::translate("WelcomeWindow", "image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
