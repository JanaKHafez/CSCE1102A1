#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "registerwindow.h"
#include "Users.h"
#include "welcomewindow.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class LoginWindow;
}
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_pushButtonReg_clicked();

    void on_pushButtonLog_clicked();

private:
    Ui::LoginWindow *ui;
};
#endif // LOGINWINDOW_H
