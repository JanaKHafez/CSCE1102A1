#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "registerwindow.h"
#include "Users.h"
#include "welcomewindow.h"



LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->labelError->setVisible(false);

}

LoginWindow::~LoginWindow()
{
    delete ui;

}

void LoginWindow::on_pushButtonReg_clicked()
{

    RegisterWindow *registerWindow = new RegisterWindow;
    registerWindow->show();
    this->hide();

}




void LoginWindow::on_pushButtonLog_clicked()
{
    QString username = ui->lineEditUser->text();
    QString password = ui->lineEditPass->text();

    bool found = false;
    for (int i = 0; i < usersCount; ++i) {
        if (usernames[i] == username && passwords[i] == password) {
            found = true;
            WelcomeWindow *welcomeWindow = new WelcomeWindow(username, ages[i]);
            welcomeWindow->show();
            this->hide();
            break;
        }
    }
    if (!found) {
        ui->labelError->setVisible(true);
    }
}
