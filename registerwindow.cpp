#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "Users.h"
#include "welcomewindow.h"

RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}
