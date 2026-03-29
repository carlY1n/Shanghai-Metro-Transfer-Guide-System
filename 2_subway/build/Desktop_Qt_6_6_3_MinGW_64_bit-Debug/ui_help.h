/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QTextBrowser *tB_Toolbar;
    QWidget *tab;
    QTextBrowser *tB_View;
    QWidget *tab_2;
    QTextBrowser *tB_Transfer;
    QWidget *tab_4;
    QTextBrowser *tB_Addition;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName("Help");
        Help->resize(312, 283);
        centralwidget = new QWidget(Help);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 301, 211));
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tB_Toolbar = new QTextBrowser(tab_3);
        tB_Toolbar->setObjectName("tB_Toolbar");
        tB_Toolbar->setGeometry(QRect(0, 0, 281, 191));
        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        tB_View = new QTextBrowser(tab);
        tB_View->setObjectName("tB_View");
        tB_View->setGeometry(QRect(0, 0, 256, 192));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tB_Transfer = new QTextBrowser(tab_2);
        tB_Transfer->setObjectName("tB_Transfer");
        tB_Transfer->setGeometry(QRect(0, 0, 261, 201));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tB_Addition = new QTextBrowser(tab_4);
        tB_Addition->setObjectName("tB_Addition");
        tB_Addition->setGeometry(QRect(0, 0, 291, 192));
        tabWidget->addTab(tab_4, QString());
        Help->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Help);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 312, 17));
        Help->setMenuBar(menubar);
        statusbar = new QStatusBar(Help);
        statusbar->setObjectName("statusbar");
        Help->setStatusBar(statusbar);

        retranslateUi(Help);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QMainWindow *Help)
    {
        Help->setWindowTitle(QCoreApplication::translate("Help", "MainWindow", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Help", "\345\267\245\345\205\267\346\240\217\350\257\264\346\230\216", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Help", "\350\247\206\345\233\276\350\257\264\346\230\216", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Help", "\346\215\242\344\271\230\350\257\264\346\230\216", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Help", "\346\267\273\345\212\240\350\257\264\346\230\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
