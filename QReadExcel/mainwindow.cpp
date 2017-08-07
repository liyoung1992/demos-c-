#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFileInfo>
#include <ActiveQt/qaxobject.h>
#include <QDebug>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("读取excel工具");
    loadPlatformList();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::readExcel(const QString &path)
{
    ui->textBrowser->append("reading excel:" + path);

    int index = ui->lowEdt->text().toInt();
    QString platform = ui->platformCmb->currentText();

    QAxObject *excel = NULL;
    QAxObject *workbooks = NULL;
    QAxObject *workbook = NULL;
    excel = new QAxObject("Excel.Application");
    if (!excel) {
        qDebug() <<"error";
        return ;
    }
    excel->dynamicCall("SetVisible(bool)", false);
    workbooks = excel->querySubObject("WorkBooks");
    workbook = workbooks->querySubObject("Open(QString, QVariant)",
                                         path);
    QAxObject * worksheet = workbook->querySubObject("WorkSheets(int)", 1);//打开第一个sheet
    QAxObject * usedrange = worksheet->querySubObject("UsedRange");//获取该sheet的使用范围对象
    QAxObject * rows = usedrange->querySubObject("Rows");
    //    QAxObject * columns = usedrange->querySubObject("Columns");
    int intRowStart = usedrange->property("Row").toInt();
    //    int intColStart = usedrange->property("Column").toInt();
    //    int intCols = columns->property("Count").toInt();
    int intRows = rows->property("Count").toInt();

    for (int i = intRowStart + 1; i < intRowStart + intRows; i++) {
        QApplication::processEvents();

        QAxObject * range = worksheet->querySubObject("Cells(int,int)", i, index);
//        qDebug()<<range->dynamicCall("Value2()").toString();
        ui->textBrowser->append(range->dynamicCall("Value2()").toString());
        writeText(platform,range->dynamicCall("Value2()").toString());
    }
    ui->textBrowser->append("read finished!!!");
}

void MainWindow::on_fileBtn_clicked()
{
    QString file_full = QFileDialog::getOpenFileName(this);
    QFileInfo fi = QFileInfo(file_full);

    readExcel(fi.absoluteFilePath());
}

void MainWindow::writeText(const QString &platform, const QString &line)
{
    QDir *TEST = new QDir;
    bool exist = TEST->exists("domains");
    if(!exist)
        bool ok = TEST->mkdir("domains");

    QString fileName = "domains/" + platform + ".txt";
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly  | QIODevice::Text|QIODevice::Append))
    {
        qDebug()<<"can't open";
    }
    QTextStream in(&file);
    in<<line<<"\n";
    file.close();
}
void MainWindow::loadPlatformList()
{
    QString path = "config/platform.txt";
    QFile f(path);

    if(!f.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Open failed." << endl;
        return ;
    }
    QTextStream* txtInput = new QTextStream(&f);
    QString line;

    while(!txtInput->atEnd())
    {
        QApplication::processEvents();
        line = txtInput->readLine();
        ui->platformCmb->addItem(line);
    }
    f.close();
    delete txtInput;
}
