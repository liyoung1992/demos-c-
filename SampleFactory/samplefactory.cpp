#include "samplefactory.h"
#include "ui_samplefactory.h"

SampleFactory::SampleFactory(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SampleFactory)
{
    ui->setupUi(this);

}

SampleFactory::~SampleFactory()
{
    qDebug() << "destructor SampleFactory";
    delete ui;
}

AbstractProduct *SampleFactory::createProduct(int type)
{
    AbstractProduct* pro = NULL;
    switch (type) {
    case 1:
        pro = new ProductA();
        break;
    case 2:
        pro = new ProductB();
        break;
    default:
        break;
    }
    return pro;
}


AbstractFactory::AbstractFactory()
{
    qDebug() << "struct abstractFactory";
}

AbstractFactory::~AbstractFactory()
{
   qDebug() << "destructor abstractFactory";
}


void SampleFactory::on_createBtn_clicked()
{
    static int i = 0;
    m_pFactory = new SampleFactory();
    AbstractProduct* product;
    if(i % 2 == 0) {
       product =  m_pFactory->createProduct(1);
    } else {
       product =  m_pFactory->createProduct(2);
    }
    product->operation();
    delete product;
    delete m_pFactory;
    i++;
}
