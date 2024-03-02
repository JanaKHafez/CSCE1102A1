#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "Users.h"
#include "welcomewindow.h"
#include <QDate>

RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    ui->labelUserErr->setVisible(false);
    ui->labelPassErr->setVisible(false);
    ui->labelDOBerr->setVisible(false);
    ui->labelRegErr->setVisible(false);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_pushButtonReg_clicked()
{
    bool v = true;
    ui->labelUserErr->setVisible(false);
    ui->labelPassErr->setVisible(false);
    ui->labelDOBerr->setVisible(false);
    ui->labelRegErr->setVisible(false);
    QString username = ui->lineEditUser->text();
    QString password = ui->lineEditPass->text();
    QString retypePassword = ui->lineEditRetype->text();
    QString day = ui->lineEditDay->text();
    QString month = ui->comboBoxMonth->currentText();
    QString yearStr = ui->lineEditYear->text();
    QString gender = ui->radioButtonM->isChecked() ? "Male" : "Female";
    QString accountType = ui->radioButtonAdmin->isChecked() ? "Admin" : "User";
    QStringList genres;
    if (ui->checkBoxAction->isChecked())
        genres.append("Action");
    if (ui->checkBoxComedy->isChecked())
        genres.append("Comedy");
    if (ui->checkBoxDrama->isChecked())
        genres.append("Drama");
    if (ui->checkBoxHorror->isChecked())
        genres.append("Horror");
    if (ui->checkBoxRomance->isChecked())
        genres.append("Romance");
    if (ui->checkBoxOther->isChecked())
        genres.append("Other");

    if (username.isEmpty() || password.isEmpty() || retypePassword.isEmpty() || day.isEmpty() || month.isEmpty() || yearStr.isEmpty() || gender.isEmpty() || accountType.isEmpty() || genres.isEmpty()) {
        ui->labelRegErr->setVisible(true);
    } else {
        bool usernameExists = false;
        for (int i = 0; i < usersCount; ++i) {
            if (usernames[i] == username) {
                usernameExists = true;
                break;
            }
        }
        if (usernameExists) {
            ui->labelUserErr->setVisible(true);
            v = false;
        } if (password != retypePassword) {
            ui->labelPassErr->setVisible(true);
            v = false;
        } if (calculateAge(yearStr.toInt()) < 12) {
            ui->labelDOBerr->setVisible(true);
            v = false;
        } if(v) {
            usernames[usersCount] = username;
            passwords[usersCount] = password;
            ages[usersCount] = calculateAge(yearStr.toInt());
            usersCount++;

            WelcomeWindow *welcomeWindow = new WelcomeWindow(username, ages[usersCount - 1]);
            welcomeWindow->show();
            this->hide();
        }
    }
}

int RegisterWindow::calculateAge(int year)
{
    return (QDate::currentDate().year() - year);
}
