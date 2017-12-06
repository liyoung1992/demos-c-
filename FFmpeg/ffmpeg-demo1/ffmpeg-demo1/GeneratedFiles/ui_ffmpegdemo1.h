/********************************************************************************
** Form generated from reading UI file 'ffmpegdemo1.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FFMPEGDEMO1_H
#define UI_FFMPEGDEMO1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ffmpegdemo1Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ffmpegdemo1Class)
    {
        if (ffmpegdemo1Class->objectName().isEmpty())
            ffmpegdemo1Class->setObjectName(QStringLiteral("ffmpegdemo1Class"));
        ffmpegdemo1Class->resize(600, 400);
        menuBar = new QMenuBar(ffmpegdemo1Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        ffmpegdemo1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ffmpegdemo1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ffmpegdemo1Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(ffmpegdemo1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ffmpegdemo1Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ffmpegdemo1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ffmpegdemo1Class->setStatusBar(statusBar);

        retranslateUi(ffmpegdemo1Class);

        QMetaObject::connectSlotsByName(ffmpegdemo1Class);
    } // setupUi

    void retranslateUi(QMainWindow *ffmpegdemo1Class)
    {
        ffmpegdemo1Class->setWindowTitle(QApplication::translate("ffmpegdemo1Class", "ffmpegdemo1", 0));
    } // retranslateUi

};

namespace Ui {
    class ffmpegdemo1Class: public Ui_ffmpegdemo1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FFMPEGDEMO1_H
