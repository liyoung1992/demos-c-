#include "Singleton.h"
#include "ui_Singleton.h"
#include "singletonmain.h"



Singleton::Singleton(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Singleton)
{
    ui->setupUi(this);
}

Singleton::~Singleton()
{
    delete ui;
}

void Singleton::on_pushButton_clicked()
{
    SingletonMain* singleton = SingletonMain::getInstance();
    ui->textBrowser->append("singleton's number :" + QString::number(singleton->getSingletonNum()));
}
