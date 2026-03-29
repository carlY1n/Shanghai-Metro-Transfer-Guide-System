/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionaddLine;
    QAction *actionaddStation;
    QAction *actionaddConnection;
    QAction *actionenlarge;
    QAction *actionopenMap;
    QAction *actionshrink;
    QAction *actionhelp;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBoxStartLine;
    QComboBox *comboBoxStartStation;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBoxEndLine;
    QComboBox *comboBoxEndStation;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonMinTime;
    QRadioButton *radioButtonLeastTrans;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_legend;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(521, 427);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        actionaddLine = new QAction(MainWindow);
        actionaddLine->setObjectName("actionaddLine");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/data/icon/Line.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionaddLine->setIcon(icon);
        QFont font;
        font.setPointSize(10);
        font.setKerning(true);
        actionaddLine->setFont(font);
        actionaddStation = new QAction(MainWindow);
        actionaddStation->setObjectName("actionaddStation");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/data/icon/Station.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionaddStation->setIcon(icon1);
        QFont font1;
        font1.setPointSize(10);
        actionaddStation->setFont(font1);
        actionaddConnection = new QAction(MainWindow);
        actionaddConnection->setObjectName("actionaddConnection");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/data/icon/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionaddConnection->setIcon(icon2);
        actionaddConnection->setFont(font1);
        actionenlarge = new QAction(MainWindow);
        actionenlarge->setObjectName("actionenlarge");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/data/icon/enlarge.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionenlarge->setIcon(icon3);
        actionenlarge->setFont(font1);
        actionopenMap = new QAction(MainWindow);
        actionopenMap->setObjectName("actionopenMap");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/data/icon/map.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionopenMap->setIcon(icon4);
        actionopenMap->setFont(font1);
        actionshrink = new QAction(MainWindow);
        actionshrink->setObjectName("actionshrink");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/data/icon/shrink.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionshrink->setIcon(icon5);
        actionshrink->setFont(font1);
        actionhelp = new QAction(MainWindow);
        actionhelp->setObjectName("actionhelp");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/data/icon/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionhelp->setIcon(icon6);
        actionhelp->setFont(font1);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_5 = new QHBoxLayout(centralwidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        widget_5 = new QWidget(centralwidget);
        widget_5->setObjectName("widget_5");
        widget_5->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_2 = new QVBoxLayout(widget_5);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget = new QWidget(widget_5);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        comboBoxStartLine = new QComboBox(widget);
        comboBoxStartLine->setObjectName("comboBoxStartLine");

        horizontalLayout->addWidget(comboBoxStartLine);

        comboBoxStartStation = new QComboBox(widget);
        comboBoxStartStation->setObjectName("comboBoxStartStation");
        comboBoxStartStation->setEditable(true);

        horizontalLayout->addWidget(comboBoxStartStation);


        verticalLayout_2->addWidget(widget);

        widget_2 = new QWidget(widget_5);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        comboBoxEndLine = new QComboBox(widget_2);
        comboBoxEndLine->setObjectName("comboBoxEndLine");

        horizontalLayout_2->addWidget(comboBoxEndLine);

        comboBoxEndStation = new QComboBox(widget_2);
        comboBoxEndStation->setObjectName("comboBoxEndStation");
        comboBoxEndStation->setEditable(true);

        horizontalLayout_2->addWidget(comboBoxEndStation);


        verticalLayout_2->addWidget(widget_2);

        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName("widget_6");
        horizontalLayout_4 = new QHBoxLayout(widget_6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label_3 = new QLabel(widget_6);
        label_3->setObjectName("label_3");
        label_3->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(59, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_6);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName("widget_4");
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName("widget_3");
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName("verticalLayout");
        radioButtonMinTime = new QRadioButton(widget_3);
        radioButtonMinTime->setObjectName("radioButtonMinTime");
        radioButtonMinTime->setChecked(true);

        verticalLayout->addWidget(radioButtonMinTime);

        radioButtonLeastTrans = new QRadioButton(widget_3);
        radioButtonLeastTrans->setObjectName("radioButtonLeastTrans");
        radioButtonLeastTrans->setChecked(false);

        verticalLayout->addWidget(radioButtonLeastTrans);


        horizontalLayout_3->addWidget(widget_3);

        pushButton = new QPushButton(widget_4);
        pushButton->setObjectName("pushButton");

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_2->addWidget(widget_4);

        textBrowser = new QTextBrowser(widget_5);
        textBrowser->setObjectName("textBrowser");

        verticalLayout_2->addWidget(textBrowser);

        textBrowser_legend = new QTextBrowser(widget_5);
        textBrowser_legend->setObjectName("textBrowser_legend");
        textBrowser_legend->setReadOnly(true);

        verticalLayout_2->addWidget(textBrowser_legend);

        verticalLayout_2->setStretch(4, 5);
        verticalLayout_2->setStretch(5, 2);

        horizontalLayout_5->addWidget(widget_5);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");

        horizontalLayout_5->addWidget(graphicsView);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 521, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font2.setPointSize(12);
        menubar->setFont(font2);
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName("menu_3");
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setIconSize(QSize(20, 20));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(actionaddLine);
        menu->addAction(actionaddStation);
        menu->addAction(actionaddConnection);
        menu_2->addAction(actionenlarge);
        menu_2->addAction(actionshrink);
        menu_2->addSeparator();
        menu_2->addAction(actionopenMap);
        menu_3->addAction(actionhelp);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionaddLine->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\272\277\350\267\257", nullptr));
        actionaddStation->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\253\231\347\202\271", nullptr));
        actionaddConnection->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\277\236\346\216\245", nullptr));
        actionenlarge->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
        actionopenMap->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\345\234\260\351\223\201\347\275\221\347\273\234\345\233\276", nullptr));
        actionshrink->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
        actionhelp->setText(QCoreApplication::translate("MainWindow", "\344\275\277\347\224\250\350\257\264\346\230\216", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\350\265\267\347\202\271\347\253\231", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\273\210\347\202\271\347\253\231", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\271\346\241\210", nullptr));
        radioButtonMinTime->setText(QCoreApplication::translate("MainWindow", "\346\215\242\344\271\230\346\227\266\351\227\264\346\234\200\347\237\255", nullptr));
        radioButtonLeastTrans->setText(QCoreApplication::translate("MainWindow", "\346\215\242\344\271\230\346\254\241\346\225\260\346\234\200\345\260\221", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244\346\215\242\344\271\230", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\350\247\206\345\233\276", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
