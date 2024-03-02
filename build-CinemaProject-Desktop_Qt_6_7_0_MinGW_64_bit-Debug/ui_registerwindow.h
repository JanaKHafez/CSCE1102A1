/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QLabel *labelUser;
    QLabel *labelPass;
    QLabel *labelRetype;
    QLineEdit *lineEditUser;
    QLineEdit *lineEditPass;
    QLineEdit *lineEditRetype;
    QLabel *labelUserErr;
    QLabel *labelPassErr;
    QGroupBox *groupBox;
    QRadioButton *radioButtonM;
    QRadioButton *radioButtonF;
    QGroupBox *groupBox_2;
    QComboBox *comboBoxMonth;
    QLabel *labelMonth;
    QLabel *labelDay;
    QLabel *labelYear;
    QLineEdit *lineEditDay;
    QLineEdit *lineEditYear;
    QGroupBox *groupBox_3;
    QRadioButton *radioButtonUser;
    QRadioButton *radioButtonAdmin;
    QGroupBox *groupBox_4;
    QCheckBox *checkBoxAction;
    QCheckBox *checkBoxComedy;
    QCheckBox *checkBoxHorror;
    QCheckBox *checkBoxDrama;
    QCheckBox *checkBoxRomance;
    QCheckBox *checkBoxOther;
    QPushButton *pushButtonReg;
    QLabel *labelRegErr;
    QLabel *labelDOBerr;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(378, 460);
        labelUser = new QLabel(RegisterWindow);
        labelUser->setObjectName("labelUser");
        labelUser->setGeometry(QRect(20, 30, 71, 16));
        labelPass = new QLabel(RegisterWindow);
        labelPass->setObjectName("labelPass");
        labelPass->setGeometry(QRect(20, 60, 61, 16));
        labelRetype = new QLabel(RegisterWindow);
        labelRetype->setObjectName("labelRetype");
        labelRetype->setGeometry(QRect(20, 90, 171, 16));
        lineEditUser = new QLineEdit(RegisterWindow);
        lineEditUser->setObjectName("lineEditUser");
        lineEditUser->setGeometry(QRect(90, 30, 113, 20));
        lineEditPass = new QLineEdit(RegisterWindow);
        lineEditPass->setObjectName("lineEditPass");
        lineEditPass->setGeometry(QRect(90, 60, 113, 20));
        lineEditPass->setEchoMode(QLineEdit::Password);
        lineEditRetype = new QLineEdit(RegisterWindow);
        lineEditRetype->setObjectName("lineEditRetype");
        lineEditRetype->setGeometry(QRect(140, 90, 113, 20));
        lineEditRetype->setEchoMode(QLineEdit::Password);
        labelUserErr = new QLabel(RegisterWindow);
        labelUserErr->setObjectName("labelUserErr");
        labelUserErr->setGeometry(QRect(220, 30, 151, 16));
        labelPassErr = new QLabel(RegisterWindow);
        labelPassErr->setObjectName("labelPassErr");
        labelPassErr->setGeometry(QRect(260, 90, 131, 16));
        groupBox = new QGroupBox(RegisterWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 230, 120, 80));
        radioButtonM = new QRadioButton(groupBox);
        radioButtonM->setObjectName("radioButtonM");
        radioButtonM->setGeometry(QRect(10, 20, 69, 18));
        radioButtonF = new QRadioButton(groupBox);
        radioButtonF->setObjectName("radioButtonF");
        radioButtonF->setGeometry(QRect(10, 50, 69, 18));
        groupBox_2 = new QGroupBox(RegisterWindow);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(30, 140, 201, 81));
        comboBoxMonth = new QComboBox(groupBox_2);
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->addItem(QString());
        comboBoxMonth->setObjectName("comboBoxMonth");
        comboBoxMonth->setGeometry(QRect(10, 40, 55, 22));
        labelMonth = new QLabel(groupBox_2);
        labelMonth->setObjectName("labelMonth");
        labelMonth->setGeometry(QRect(10, 20, 37, 12));
        labelDay = new QLabel(groupBox_2);
        labelDay->setObjectName("labelDay");
        labelDay->setGeometry(QRect(80, 20, 37, 12));
        labelYear = new QLabel(groupBox_2);
        labelYear->setObjectName("labelYear");
        labelYear->setGeometry(QRect(140, 20, 37, 12));
        lineEditDay = new QLineEdit(groupBox_2);
        lineEditDay->setObjectName("lineEditDay");
        lineEditDay->setGeometry(QRect(80, 40, 51, 20));
        lineEditYear = new QLineEdit(groupBox_2);
        lineEditYear->setObjectName("lineEditYear");
        lineEditYear->setGeometry(QRect(140, 40, 51, 20));
        groupBox_3 = new QGroupBox(RegisterWindow);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(160, 230, 120, 80));
        radioButtonUser = new QRadioButton(groupBox_3);
        radioButtonUser->setObjectName("radioButtonUser");
        radioButtonUser->setGeometry(QRect(10, 20, 69, 18));
        radioButtonAdmin = new QRadioButton(groupBox_3);
        radioButtonAdmin->setObjectName("radioButtonAdmin");
        radioButtonAdmin->setGeometry(QRect(10, 50, 69, 18));
        groupBox_4 = new QGroupBox(RegisterWindow);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(30, 310, 211, 91));
        checkBoxAction = new QCheckBox(groupBox_4);
        checkBoxAction->setObjectName("checkBoxAction");
        checkBoxAction->setGeometry(QRect(10, 20, 71, 18));
        checkBoxComedy = new QCheckBox(groupBox_4);
        checkBoxComedy->setObjectName("checkBoxComedy");
        checkBoxComedy->setGeometry(QRect(10, 40, 71, 18));
        checkBoxHorror = new QCheckBox(groupBox_4);
        checkBoxHorror->setObjectName("checkBoxHorror");
        checkBoxHorror->setGeometry(QRect(127, 40, 61, 20));
        checkBoxDrama = new QCheckBox(groupBox_4);
        checkBoxDrama->setObjectName("checkBoxDrama");
        checkBoxDrama->setGeometry(QRect(127, 20, 61, 20));
        checkBoxRomance = new QCheckBox(groupBox_4);
        checkBoxRomance->setObjectName("checkBoxRomance");
        checkBoxRomance->setGeometry(QRect(10, 60, 71, 18));
        checkBoxOther = new QCheckBox(groupBox_4);
        checkBoxOther->setObjectName("checkBoxOther");
        checkBoxOther->setGeometry(QRect(127, 60, 61, 20));
        pushButtonReg = new QPushButton(RegisterWindow);
        pushButtonReg->setObjectName("pushButtonReg");
        pushButtonReg->setGeometry(QRect(20, 410, 80, 31));
        labelRegErr = new QLabel(RegisterWindow);
        labelRegErr->setObjectName("labelRegErr");
        labelRegErr->setGeometry(QRect(110, 410, 191, 16));
        labelDOBerr = new QLabel(RegisterWindow);
        labelDOBerr->setObjectName("labelDOBerr");
        labelDOBerr->setGeometry(QRect(250, 180, 121, 16));

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
        labelUser->setText(QCoreApplication::translate("RegisterWindow", "Username", nullptr));
        labelPass->setText(QCoreApplication::translate("RegisterWindow", "Password", nullptr));
        labelRetype->setText(QCoreApplication::translate("RegisterWindow", "Re-type Password", nullptr));
        labelUserErr->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">*Already Existing</span></p></body></html>", nullptr));
        labelPassErr->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">*Not Matching</span></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RegisterWindow", "Gender", nullptr));
        radioButtonM->setText(QCoreApplication::translate("RegisterWindow", "Male", nullptr));
        radioButtonF->setText(QCoreApplication::translate("RegisterWindow", "Female", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("RegisterWindow", "Date of Birth", nullptr));
        comboBoxMonth->setItemText(0, QCoreApplication::translate("RegisterWindow", "Jan", nullptr));
        comboBoxMonth->setItemText(1, QCoreApplication::translate("RegisterWindow", "Feb", nullptr));
        comboBoxMonth->setItemText(2, QCoreApplication::translate("RegisterWindow", "Mar", nullptr));
        comboBoxMonth->setItemText(3, QCoreApplication::translate("RegisterWindow", "Apr", nullptr));
        comboBoxMonth->setItemText(4, QCoreApplication::translate("RegisterWindow", "May", nullptr));
        comboBoxMonth->setItemText(5, QCoreApplication::translate("RegisterWindow", "Jun", nullptr));
        comboBoxMonth->setItemText(6, QCoreApplication::translate("RegisterWindow", "Jul", nullptr));
        comboBoxMonth->setItemText(7, QCoreApplication::translate("RegisterWindow", "Aug", nullptr));
        comboBoxMonth->setItemText(8, QCoreApplication::translate("RegisterWindow", "Sep", nullptr));
        comboBoxMonth->setItemText(9, QCoreApplication::translate("RegisterWindow", "Oct", nullptr));
        comboBoxMonth->setItemText(10, QCoreApplication::translate("RegisterWindow", "Nov", nullptr));
        comboBoxMonth->setItemText(11, QCoreApplication::translate("RegisterWindow", "Dec", nullptr));

        labelMonth->setText(QCoreApplication::translate("RegisterWindow", "Month", nullptr));
        labelDay->setText(QCoreApplication::translate("RegisterWindow", "Day", nullptr));
        labelYear->setText(QCoreApplication::translate("RegisterWindow", "Year", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("RegisterWindow", "Account Type", nullptr));
        radioButtonUser->setText(QCoreApplication::translate("RegisterWindow", "User", nullptr));
        radioButtonAdmin->setText(QCoreApplication::translate("RegisterWindow", "Admin", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("RegisterWindow", "Favourite Genre(s)", nullptr));
        checkBoxAction->setText(QCoreApplication::translate("RegisterWindow", "Action", nullptr));
        checkBoxComedy->setText(QCoreApplication::translate("RegisterWindow", "Comedy", nullptr));
        checkBoxHorror->setText(QCoreApplication::translate("RegisterWindow", "Horror", nullptr));
        checkBoxDrama->setText(QCoreApplication::translate("RegisterWindow", "Drama", nullptr));
        checkBoxRomance->setText(QCoreApplication::translate("RegisterWindow", "Romance", nullptr));
        checkBoxOther->setText(QCoreApplication::translate("RegisterWindow", "Other", nullptr));
        pushButtonReg->setText(QCoreApplication::translate("RegisterWindow", "Register", nullptr));
        labelRegErr->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">*All fields must be filled</span></p></body></html>", nullptr));
        labelDOBerr->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">*Age is less than 12</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
