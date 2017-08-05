#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "abstractfruit.h"
#include "abstractfarm.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_appleBtn_clicked()
{
    AbstractFarm* factory = new AppleFarm();
    AbstractFruit* apple =  factory->createFruit();
    apple->operation();

    ui->textBrowser->append("this is Apple ,created by AppleFarm");
    delete factory;
    delete apple;
}

void MainWindow::on_bananaBtn_clicked()
{
    AbstractFarm* factory = new BananaFarm();
    AbstractFruit* banane =  factory->createFruit();
    banane->operation();


    ui->textBrowser->append("this is banana,created by BananaFarm");
    delete factory;
    delete banane;
}
