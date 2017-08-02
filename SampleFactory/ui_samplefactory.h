/********************************************************************************
** Form generated from reading UI file 'samplefactory.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAMPLEFACTORY_H
#define UI_SAMPLEFACTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SampleFactory
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *createBtn;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SampleFactory)
    {
        if (SampleFactory->objectName().isEmpty())
            SampleFactory->setObjectName(QStringLiteral("SampleFactory"));
        SampleFactory->resize(592, 389);
        centralWidget = new QWidget(SampleFactory);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        createBtn = new QPushButton(centralWidget);
        createBtn->setObjectName(QStringLiteral("createBtn"));

        horizontalLayout->addWidget(createBtn);


        verticalLayout->addLayout(horizontalLayout);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        SampleFactory->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SampleFactory);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 592, 23));
        SampleFactory->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SampleFactory);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SampleFactory->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SampleFactory);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SampleFactory->setStatusBar(statusBar);

        retranslateUi(SampleFactory);

        QMetaObject::connectSlotsByName(SampleFactory);
    } // setupUi

    void retranslateUi(QMainWindow *SampleFactory)
    {
        SampleFactory->setWindowTitle(QApplication::translate("SampleFactory", "SampleFactory", Q_NULLPTR));
        createBtn->setText(QApplication::translate("SampleFactory", "\346\226\260\345\273\272\344\272\247\345\223\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SampleFactory: public Ui_SampleFactory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAMPLEFACTORY_H
