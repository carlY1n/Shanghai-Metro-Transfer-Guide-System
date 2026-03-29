/********************************************************************************
** Form generated from reading UI file 'metroaddition.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METROADDITION_H
#define UI_METROADDITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MetroAddition
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_11;
    QStackedWidget *stackedWidget;
    QWidget *pageAddLine;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *inputLineName;
    QSpacerItem *verticalSpacer;
    QPushButton *pB_SelectColor;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pB_AddLine;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QWidget *pageAddStation;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_tip;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_5;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *inputStationName;
    QSpacerItem *verticalSpacer_3;
    QDoubleSpinBox *inputLongi;
    QDoubleSpinBox *inputLati;
    QLabel *label_MinMaxLoLa;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pB_AddStation;
    QSpacerItem *horizontalSpacer_10;
    QWidget *pageAddConnection;
    QHBoxLayout *horizontalLayout_12;
    QWidget *widget_16;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_10;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_14;
    QFrame *frame;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_11;
    QWidget *widget_13;
    QVBoxLayout *verticalLayout_8;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer_5;
    QComboBox *comboBox_2;
    QSpacerItem *verticalSpacer_6;
    QComboBox *comboBox_3;
    QSpacerItem *horizontalSpacer_12;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pB_AddConnection;
    QSpacerItem *horizontalSpacer_13;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MetroAddition)
    {
        if (MetroAddition->objectName().isEmpty())
            MetroAddition->setObjectName("MetroAddition");
        MetroAddition->resize(465, 378);
        centralwidget = new QWidget(MetroAddition);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_11 = new QHBoxLayout(centralwidget);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setEnabled(true);
        pageAddLine = new QWidget();
        pageAddLine->setObjectName("pageAddLine");
        horizontalLayout_5 = new QHBoxLayout(pageAddLine);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        widget_4 = new QWidget(pageAddLine);
        widget_4->setObjectName("widget_4");
        verticalLayout_4 = new QVBoxLayout(widget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label = new QLabel(widget_4);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);

        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName("widget_6");
        horizontalLayout_3 = new QHBoxLayout(widget_6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(75, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        widget_3 = new QWidget(widget_6);
        widget_3->setObjectName("widget_3");
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName("horizontalLayout");
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName("widget_2");
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 53, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addWidget(widget_2);

        widget = new QWidget(widget_3);
        widget->setObjectName("widget");
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        inputLineName = new QLineEdit(widget);
        inputLineName->setObjectName("inputLineName");

        verticalLayout->addWidget(inputLineName);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pB_SelectColor = new QPushButton(widget);
        pB_SelectColor->setObjectName("pB_SelectColor");

        verticalLayout->addWidget(pB_SelectColor);


        horizontalLayout->addWidget(widget);


        horizontalLayout_3->addWidget(widget_3);

        horizontalSpacer_2 = new QSpacerItem(74, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_4->addWidget(widget_6);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        horizontalLayout_2 = new QHBoxLayout(widget_5);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_6 = new QSpacerItem(60, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        horizontalSpacer_5 = new QSpacerItem(60, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        pB_AddLine = new QPushButton(widget_5);
        pB_AddLine->setObjectName("pB_AddLine");
        pB_AddLine->setFont(font);

        horizontalLayout_2->addWidget(pB_AddLine);

        horizontalSpacer_3 = new QSpacerItem(60, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalSpacer_4 = new QSpacerItem(60, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalLayout_2->setStretch(2, 3);

        verticalLayout_4->addWidget(widget_5);

        verticalLayout_4->setStretch(0, 5);

        horizontalLayout_5->addWidget(widget_4);

        stackedWidget->addWidget(pageAddLine);
        pageAddStation = new QWidget();
        pageAddStation->setObjectName("pageAddStation");
        horizontalLayout_4 = new QHBoxLayout(pageAddStation);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        widget_10 = new QWidget(pageAddStation);
        widget_10->setObjectName("widget_10");
        horizontalLayout_8 = new QHBoxLayout(widget_10);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_tip = new QLabel(widget_10);
        label_tip->setObjectName("label_tip");
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        label_tip->setFont(font1);
        label_tip->setMouseTracking(false);
        label_tip->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_tip);

        horizontalSpacer_7 = new QSpacerItem(4, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        widget_11 = new QWidget(widget_10);
        widget_11->setObjectName("widget_11");
        verticalLayout_7 = new QVBoxLayout(widget_11);
        verticalLayout_7->setObjectName("verticalLayout_7");
        widget_9 = new QWidget(widget_11);
        widget_9->setObjectName("widget_9");
        horizontalLayout_6 = new QHBoxLayout(widget_9);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        widget_8 = new QWidget(widget_9);
        widget_8->setObjectName("widget_8");
        verticalLayout_5 = new QVBoxLayout(widget_8);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_4 = new QLabel(widget_8);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        verticalLayout_5->addWidget(label_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        label_5 = new QLabel(widget_8);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        verticalLayout_5->addWidget(label_5);

        label_6 = new QLabel(widget_8);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        verticalLayout_5->addWidget(label_6);


        horizontalLayout_6->addWidget(widget_8);

        horizontalSpacer_8 = new QSpacerItem(8, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        widget_7 = new QWidget(widget_9);
        widget_7->setObjectName("widget_7");
        verticalLayout_3 = new QVBoxLayout(widget_7);
        verticalLayout_3->setObjectName("verticalLayout_3");
        inputStationName = new QLineEdit(widget_7);
        inputStationName->setObjectName("inputStationName");

        verticalLayout_3->addWidget(inputStationName);

        verticalSpacer_3 = new QSpacerItem(20, 39, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        inputLongi = new QDoubleSpinBox(widget_7);
        inputLongi->setObjectName("inputLongi");
        inputLongi->setDecimals(6);
        inputLongi->setMinimum(0.000000000000000);
        inputLongi->setSingleStep(0.010000000000000);

        verticalLayout_3->addWidget(inputLongi);

        inputLati = new QDoubleSpinBox(widget_7);
        inputLati->setObjectName("inputLati");
        inputLati->setDecimals(6);
        inputLati->setSingleStep(0.010000000000000);

        verticalLayout_3->addWidget(inputLati);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 2);
        verticalLayout_3->setStretch(2, 1);
        verticalLayout_3->setStretch(3, 1);

        horizontalLayout_6->addWidget(widget_7);


        verticalLayout_7->addWidget(widget_9);

        label_MinMaxLoLa = new QLabel(widget_11);
        label_MinMaxLoLa->setObjectName("label_MinMaxLoLa");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font2.setPointSize(12);
        label_MinMaxLoLa->setFont(font2);

        verticalLayout_7->addWidget(label_MinMaxLoLa);

        widget_12 = new QWidget(widget_11);
        widget_12->setObjectName("widget_12");
        horizontalLayout_7 = new QHBoxLayout(widget_12);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_9 = new QSpacerItem(32, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_9);

        pB_AddStation = new QPushButton(widget_12);
        pB_AddStation->setObjectName("pB_AddStation");
        pB_AddStation->setFont(font);

        horizontalLayout_7->addWidget(pB_AddStation);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);


        verticalLayout_7->addWidget(widget_12);

        verticalLayout_7->setStretch(0, 2);
        verticalLayout_7->setStretch(1, 1);
        verticalLayout_7->setStretch(2, 1);

        horizontalLayout_8->addWidget(widget_11);


        horizontalLayout_4->addWidget(widget_10);

        stackedWidget->addWidget(pageAddStation);
        pageAddConnection = new QWidget();
        pageAddConnection->setObjectName("pageAddConnection");
        horizontalLayout_12 = new QHBoxLayout(pageAddConnection);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        widget_16 = new QWidget(pageAddConnection);
        widget_16->setObjectName("widget_16");
        verticalLayout_6 = new QVBoxLayout(widget_16);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_10 = new QLabel(widget_16);
        label_10->setObjectName("label_10");
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_10);

        widget_14 = new QWidget(widget_16);
        widget_14->setObjectName("widget_14");
        horizontalLayout_9 = new QHBoxLayout(widget_14);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer_14 = new QSpacerItem(118, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_14);

        frame = new QFrame(widget_14);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(frame);
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        verticalLayout_9->addWidget(label_7);

        verticalSpacer_7 = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_7);

        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        verticalLayout_9->addWidget(label_8);

        verticalSpacer_8 = new QSpacerItem(20, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_8);

        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        verticalLayout_9->addWidget(label_9);


        horizontalLayout_9->addWidget(frame);

        horizontalSpacer_11 = new QSpacerItem(54, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_11);

        widget_13 = new QWidget(widget_14);
        widget_13->setObjectName("widget_13");
        verticalLayout_8 = new QVBoxLayout(widget_13);
        verticalLayout_8->setObjectName("verticalLayout_8");
        comboBox = new QComboBox(widget_13);
        comboBox->setObjectName("comboBox");
        comboBox->setEditable(true);

        verticalLayout_8->addWidget(comboBox);

        verticalSpacer_5 = new QSpacerItem(20, 44, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);

        comboBox_2 = new QComboBox(widget_13);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setEditable(true);

        verticalLayout_8->addWidget(comboBox_2);

        verticalSpacer_6 = new QSpacerItem(20, 44, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_6);

        comboBox_3 = new QComboBox(widget_13);
        comboBox_3->setObjectName("comboBox_3");

        verticalLayout_8->addWidget(comboBox_3);


        horizontalLayout_9->addWidget(widget_13);

        horizontalSpacer_12 = new QSpacerItem(54, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_12);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 2);
        horizontalLayout_9->setStretch(2, 1);
        horizontalLayout_9->setStretch(3, 2);
        horizontalLayout_9->setStretch(4, 1);

        verticalLayout_6->addWidget(widget_14);

        widget_15 = new QWidget(widget_16);
        widget_15->setObjectName("widget_15");
        horizontalLayout_10 = new QHBoxLayout(widget_15);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer_15 = new QSpacerItem(99, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_15);

        pB_AddConnection = new QPushButton(widget_15);
        pB_AddConnection->setObjectName("pB_AddConnection");
        pB_AddConnection->setFont(font);

        horizontalLayout_10->addWidget(pB_AddConnection);

        horizontalSpacer_13 = new QSpacerItem(99, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_13);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 2);
        horizontalLayout_10->setStretch(2, 1);

        verticalLayout_6->addWidget(widget_15);

        verticalLayout_6->setStretch(0, 4);
        verticalLayout_6->setStretch(1, 2);
        verticalLayout_6->setStretch(2, 2);

        horizontalLayout_12->addWidget(widget_16);

        stackedWidget->addWidget(pageAddConnection);

        horizontalLayout_11->addWidget(stackedWidget);

        MetroAddition->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MetroAddition);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 465, 17));
        MetroAddition->setMenuBar(menubar);
        statusbar = new QStatusBar(MetroAddition);
        statusbar->setObjectName("statusbar");
        MetroAddition->setStatusBar(statusbar);

        retranslateUi(MetroAddition);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MetroAddition);
    } // setupUi

    void retranslateUi(QMainWindow *MetroAddition)
    {
        MetroAddition->setWindowTitle(QCoreApplication::translate("MetroAddition", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MetroAddition", "\346\267\273\345\212\240\347\272\277\350\267\257\346\226\271\346\263\225\357\274\232\n"
"1.\345\234\250\350\276\223\345\205\245\346\241\206\344\270\255\350\276\223\345\205\245\347\272\277\350\267\257\347\232\204\345\220\215\347\247\260\357\274\210\344\270\215\350\203\275\344\270\216\347\216\260\346\234\211\347\272\277\350\267\257\351\207\215\345\244\215\357\274\211\357\274\233\n"
"2.\347\202\271\345\207\273\342\200\234\350\257\267\351\200\211\346\213\251\351\242\234\350\211\262\346\214\211\351\222\256\342\200\235\345\220\216\357\274\214\345\234\250\351\242\234\350\211\262\351\200\211\346\213\251\345\257\271\350\257\235\346\241\206\344\270\255\351\200\211\346\213\251\351\242\234\350\211\262\357\274\233\n"
"3.\347\202\271\345\207\273\342\200\234\347\202\271\345\207\273\347\241\256\350\256\244\346\267\273\345\212\240\347\272\277\350\267\257\342\200\235\346\214\211\351\222\256\345\220\216\350\277\233\350\241\214\346\267\273\345\212\240\n"
"\347\272\277\350\267\257\345\220\215\347\247\260\346\240\267\344\276\213\357"
                        "\274\23219\345\217\267\347\272\277 \345\230\211\346\235\276\347\272\277", nullptr));
        label_2->setText(QCoreApplication::translate("MetroAddition", "\346\267\273\345\212\240\347\272\277\350\267\257\345\220\215\347\247\260", nullptr));
        label_3->setText(QCoreApplication::translate("MetroAddition", "\346\267\273\345\212\240\347\272\277\350\267\257\351\242\234\350\211\262", nullptr));
        pB_SelectColor->setText(QCoreApplication::translate("MetroAddition", "\350\257\267\351\200\211\346\213\251\351\242\234\350\211\262", nullptr));
        pB_AddLine->setText(QCoreApplication::translate("MetroAddition", "\347\241\256\350\256\244\346\267\273\345\212\240\347\272\277\350\267\257", nullptr));
        label_tip->setText(QCoreApplication::translate("MetroAddition", "\346\267\273\345\212\240\347\253\231\347\202\271\346\226\271\346\263\225\357\274\232\n"
"1.\345\234\250\350\276\223\345\205\245\346\241\206\344\270\255\350\276\223\345\205\245\347\253\231\347\202\271\347\232\204\345\220\215\347\247\260\n"
"\357\274\210\344\270\215\350\203\275\344\270\216\347\216\260\346\234\211\347\253\231\347\202\271\351\207\215\345\244\215\357\274\211;\n"
"2.\350\276\223\345\205\245\347\253\231\347\202\271\347\273\217\347\272\254\345\272\246\357\274\210\346\263\250\346\204\217\347\253\231\347\202\271\347\273\217\347\272\254\345\272\246\347\232\204\350\214\203\345\233\264\357\274\211;\n"
"3.\347\253\231\347\202\271\347\273\217\347\272\254\345\272\246\351\273\230\350\256\244\344\270\272\346\234\200\345\260\217\345\200\274\357\274\214\n"
"\350\266\205\345\207\272\350\214\203\345\233\264\347\232\204\345\200\274\350\207\252\345\212\250\344\277\256\346\255\243\344\270\272\351\273\230\350\256\244\345\200\274\357\274\233\n"
"4.\345\217\257\344\275\277\347\224\250\347\231\276\345\272\246\345\234\260\345"
                        "\233\276\350\216\267\345\217\226\347\273\217\347\272\254\345\272\246\n"
"https://api.map.baidu.com\n"
"/lbsapi/getpoint/index.html\n"
"5.\347\202\271\345\207\273\"\347\241\256\350\256\244\346\267\273\345\212\240\347\253\231\347\202\271\"\350\277\233\350\241\214\346\267\273\345\212\240;\n"
"\347\253\231\347\202\271\347\244\272\344\276\213\357\274\232\351\273\204\346\270\241 121.217963 31.279454", nullptr));
        label_4->setText(QCoreApplication::translate("MetroAddition", "\347\253\231\347\202\271\345\220\215\347\247\260", nullptr));
        label_5->setText(QCoreApplication::translate("MetroAddition", "\347\253\231\347\202\271\347\273\217\345\272\246", nullptr));
        label_6->setText(QCoreApplication::translate("MetroAddition", "\347\253\231\347\202\271\347\272\254\345\272\246", nullptr));
        label_MinMaxLoLa->setText(QCoreApplication::translate("MetroAddition", "TextLabel", nullptr));
        pB_AddStation->setText(QCoreApplication::translate("MetroAddition", "\347\241\256\350\256\244\346\267\273\345\212\240\347\253\231\347\202\271", nullptr));
        label_10->setText(QCoreApplication::translate("MetroAddition", "\346\267\273\345\212\240\350\277\236\346\216\245\346\226\271\346\263\225\357\274\232\n"
"1.\344\276\235\346\254\241\350\276\223\345\205\245\346\210\226\351\200\211\346\213\251\344\270\244\344\270\252\344\270\215\345\220\214\347\232\204\347\253\231\347\202\271\n"
"(\344\270\244\347\253\231\347\202\271\350\207\263\345\260\221\351\234\200\350\246\201\344\270\200\344\270\252\345\234\250\347\272\277\350\267\257\344\270\212\357\274\211\357\274\233\n"
"2.\351\200\211\346\213\251\347\253\231\347\202\271\346\227\266\346\214\211\347\205\247\346\211\200\345\261\236\347\272\277\350\267\257\346\216\222\345\210\227\357\274\233\n"
"3.\351\200\211\346\213\251\350\277\236\346\216\245\350\277\231\344\270\244\344\270\252\347\253\231\347\202\271\347\232\204\347\272\277\350\267\257\357\274\233\n"
"4.\347\202\271\345\207\273\"\347\241\256\350\256\244\346\267\273\345\212\240\350\277\236\346\216\245\"\350\277\233\350\241\214\346\267\273\345\212\240;\n"
"\347\244\272\344\276\213\357\274\232\344\270\212\346\265\267\346\261\275\350\275\246"
                        "\345\237\216 \345\260\201\346\265\234 14\345\217\267\347\272\277", nullptr));
        label_7->setText(QCoreApplication::translate("MetroAddition", "\347\253\231\347\202\2711", nullptr));
        label_8->setText(QCoreApplication::translate("MetroAddition", "\347\253\231\347\202\2712", nullptr));
        label_9->setText(QCoreApplication::translate("MetroAddition", "\347\272\277\350\267\257", nullptr));
        pB_AddConnection->setText(QCoreApplication::translate("MetroAddition", "\347\241\256\350\256\244\346\267\273\345\212\240\350\277\236\346\216\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MetroAddition: public Ui_MetroAddition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METROADDITION_H
