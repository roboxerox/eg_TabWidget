#include "eg_TabWidget.h"
#include "ui_eg_TabWidget.h"

eg_TabWidget::eg_TabWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::eg_TabWidget)
{
    ui->setupUi(this);
}

eg_TabWidget::~eg_TabWidget()
{
    delete ui;
}

void eg_TabWidget::on_pushButton_SignUp_clicked()
{
    qDebug()<<"Name : "<<ui->lineEdit_FirstName->text() <<ui->lineEdit_LastName->text();
    qDebug()<<"Email or Phone"<<ui->lineEdit_EmailPhone_SignUp->text();
    qDebug()<<"Password "<<ui->lineEdit_Password_SignUp->text();
}

void eg_TabWidget::on_pushButton_SignIn_clicked()
{
    qDebug()<<"Email or Phone"<<ui->lineEdit_EmailPhone_SignIn->text();
    qDebug()<<"Password "<<ui->lineEdit_Password_SignIn->text();
}
