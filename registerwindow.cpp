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


    QString username = ui->lineEditUser->text();
    QString password = ui->lineEditPass->text();
    QString retypePassword = ui->lineEditRetype->text();
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

    if (username.isEmpty() || password.isEmpty() || retypePassword.isEmpty() || month.isEmpty() || genres.isEmpty()) {
        ui->labelRegErr->setVisible(true);
        ui->labelRegErr->setText("All fields must be filled");
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
            ui->labelUserErr->setText("Username already exists");
        } else if (password != retypePassword) {
            ui->labelPassErr->setVisible(true);
            ui->labelPassErr->setText("Passwords do not match");
        } else if (calculateAge(month.toInt()) < 12) {
            ui->labelDOBerr->setVisible(true);
            ui->labelDOBerr->setText("Age is less than 12");
        } else {
            usernames[usersCount] = username;
            passwords[usersCount] = password;
            ages[usersCount] = calculateAge(month.toInt());
            usersCount++;

            WelcomeWindow *welcomeWindow = new WelcomeWindow(username, ages[usersCount - 1]);
            welcomeWindow->show();
            this->hide();
        }
    }
}

int RegisterWindow::calculateAge(int year)
{
    return QDate::currentDate().year() - year;
}
