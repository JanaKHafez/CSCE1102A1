#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "registerwindow.h"
#include "welcomewindow.h"



LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

}

LoginWindow::~LoginWindow()
{
    delete ui;

}

