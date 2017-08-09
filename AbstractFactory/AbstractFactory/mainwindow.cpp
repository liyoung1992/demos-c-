#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "abstractfactory.h"
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

void MainWindow::on_whiteTableBtn_clicked()
{
    ui->textBrowser->append("create white table...");
    AbstractFactory* whiteFactory = new WhiteFactory();

    AbstractTable* wtable = whiteFactory->createTable();
//    WhiteChair* wChair = whiteFactory->createChair();
    wtable->operation();
//    wChair->operation();

    delete whiteFactory;
    delete wtable;
//    delete wChair;
}

void MainWindow::on_blackTableBtn_clicked()
{
    ui->textBrowser->append("create black table...");
    AbstractFactory* blackFactory = new BlackFactory();

    AbstractTable* btable = blackFactory->createTable();
//    BlackChair* bChair = blackFactory->createChair();
    btable->operation();
//    bChair->operation();

    delete blackFactory;
    delete btable;
//    delete bChair;
}

void MainWindow::on_whitechairBtn_clicked()
{
    ui->textBrowser->append("create white chair...");
    AbstractFactory* whiteFactory = new WhiteFactory();

//    WhiteTable* wtable = whiteFactory->createTable();
    AbstractChair* wChair = whiteFactory->createChair();
//    wtable->operation();
    wChair->operation();

    delete whiteFactory;
//    delete wtable;
    delete wChair;
}

void MainWindow::on_blackchairBtn_clicked()
{
    ui->textBrowser->append("create black chair...");

    AbstractFactory* blackFactory = new BlackFactory();

//    BlackTable* btable = blackFactory->createTable();
    AbstractChair* bChair = blackFactory->createChair();
//    btable->operation();
    bChair->operation();

    delete blackFactory;
//    delete btable;
    delete bChair;
}
