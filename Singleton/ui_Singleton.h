/********************************************************************************
** Form generated from reading UI file 'Singleton.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLETON_H
#define UI_SINGLETON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
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

class Ui_Singleton
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Singleton)
    {
        if (Singleton->objectName().isEmpty())
            Singleton->setObjectName(QStringLiteral("Singleton"));
        Singleton->resize(631, 386);
        centralWidget = new QWidget(Singleton);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        Singleton->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Singleton);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 631, 23));
        Singleton->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Singleton);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Singleton->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Singleton);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Singleton->setStatusBar(statusBar);

        retranslateUi(Singleton);

        QMetaObject::connectSlotsByName(Singleton);
    } // setupUi

    void retranslateUi(QMainWindow *Singleton)
    {
        Singleton->setWindowTitle(QApplication::translate("Singleton", "Singleton", Q_NULLPTR));
        label->setText(QApplication::translate("Singleton", "\345\215\225\344\276\213\346\250\241\345\274\217\346\274\224\347\244\272\347\250\213\345\272\217", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Singleton", "\345\210\233\345\273\272\345\215\225\344\276\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Singleton: public Ui_Singleton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLETON_H
