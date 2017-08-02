#include "samplefactory.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SampleFactory w;
    w.show();

    return a.exec();
}
