#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileInfo>
#include <QFileDialog>
#include <QTextStream>
#include <QDebug>

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

void MainWindow::readText(const QString &path)
{
        QFile file(path);
       if (file.open(QFile::ReadOnly | QFile::Text))
       {
           QTextStream toText(&file);
           //设置文件流编码方式
           toText.setCodec("GBK");
           while(!file.atEnd()){
               QString str = toText.readLine();
               qDebug() << str;
               ui->textBrowser->append(str);
               writeText(str);
           }

       }
       file.close();
}

void MainWindow::writeText(const QString &line)
{
       QDir *TEST = new QDir;
      bool exist = TEST->exists("domains");
      if(!exist)
          bool ok = TEST->mkdir("domains");

      QString fileName = "domains/666.txt";
      QFile file(fileName);
      if(!file.open(QIODevice::WriteOnly  | QIODevice::Text|QIODevice::Append))
      {
          qDebug()<<"can't open";
      }
      QTextStream in(&file);
      in<<line<<"\n";
      file.close();
}

void MainWindow::on_readTxtBtn_clicked()
{
    QString file_full = QFileDialog::getOpenFileName(this);
    QFileInfo fi = QFileInfo(file_full);

    readText(fi.absoluteFilePath());
}
