#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "loginwindow.h"
#include <QPixmap>

WelcomeWindow::WelcomeWindow(QString username, int age, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
    ui->labelHello->setText("Hello " + username + " " + QString::number(age));
    QPixmap pix("C:\\Users\\seifa\\OneDrive\\Documents\\CinemaProject\\CSCE1102A1\\WelcomeImage.jpg");
    int w = ui->labelImage->width();
    int h = ui->labelImage->height();
    ui->labelImage->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}

void WelcomeWindow::on_pushButtonLogout_clicked()
{
    LoginWindow *loginn = new LoginWindow();
    loginn->show();
    this->hide();
}
