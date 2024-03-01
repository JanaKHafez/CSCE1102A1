#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "loginwindow.h"

WelcomeWindow::WelcomeWindow(QString username, int age, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}


