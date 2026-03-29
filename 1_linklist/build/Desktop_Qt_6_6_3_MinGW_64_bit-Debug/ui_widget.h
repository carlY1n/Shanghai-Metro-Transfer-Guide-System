/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget_1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *listType;
    QPushButton *build_btn;
    QPushButton *clear_btn;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *operationType;
    QLabel *label_3;
    QSpinBox *index;
    QLabel *label_4;
    QSpinBox *val;
    QPushButton *confirm_btn;
    QWidget *widget;
    QTextBrowser *textBrowser;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(1200, 800);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMinimumSize(QSize(1200, 800));
        Widget->setMaximumSize(QSize(1200, 800));
        Widget->setBaseSize(QSize(1200, 800));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(14);
        Widget->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        widget_1 = new QWidget(Widget);
        widget_1->setObjectName("widget_1");
        widget_1->setGeometry(QRect(40, 10, 1111, 131));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font1.setPointSize(14);
        font1.setBold(false);
        widget_1->setFont(font1);
        horizontalLayout = new QHBoxLayout(widget_1);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget_1);
        label->setObjectName("label");
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        listType = new QComboBox(widget_1);
        listType->addItem(QString());
        listType->addItem(QString());
        listType->addItem(QString());
        listType->setObjectName("listType");

        horizontalLayout->addWidget(listType);

        build_btn = new QPushButton(widget_1);
        build_btn->setObjectName("build_btn");

        horizontalLayout->addWidget(build_btn);

        clear_btn = new QPushButton(widget_1);
        clear_btn->setObjectName("clear_btn");

        horizontalLayout->addWidget(clear_btn);

        widget_2 = new QWidget(Widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(40, 140, 1111, 111));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        operationType = new QComboBox(widget_2);
        operationType->addItem(QString());
        operationType->addItem(QString());
        operationType->addItem(QString());
        operationType->addItem(QString());
        operationType->setObjectName("operationType");

        horizontalLayout_2->addWidget(operationType);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        index = new QSpinBox(widget_2);
        index->setObjectName("index");

        horizontalLayout_2->addWidget(index);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        horizontalLayout_2->addWidget(label_4);

        val = new QSpinBox(widget_2);
        val->setObjectName("val");

        horizontalLayout_2->addWidget(val);

        confirm_btn = new QPushButton(widget_2);
        confirm_btn->setObjectName("confirm_btn");

        horizontalLayout_2->addWidget(confirm_btn);

        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 270, 1161, 521));
        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(690, 0, 451, 491));
        tableWidget = new QTableWidget(widget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(30, 0, 631, 491));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(12);
        tableWidget->setFont(font2);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\351\223\276\350\241\250\347\261\273\345\236\213\357\274\232", nullptr));
        listType->setItemText(0, QCoreApplication::translate("Widget", "\345\215\225\351\223\276\350\241\250", nullptr));
        listType->setItemText(1, QCoreApplication::translate("Widget", "\345\276\252\347\216\257\351\223\276\350\241\250", nullptr));
        listType->setItemText(2, QCoreApplication::translate("Widget", "\345\217\214\345\220\221\351\223\276\350\241\250", nullptr));

        build_btn->setText(QCoreApplication::translate("Widget", "\345\210\233\345\273\272", nullptr));
        clear_btn->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\223\215\344\275\234\357\274\232", nullptr));
        operationType->setItemText(0, QCoreApplication::translate("Widget", "\346\217\222\345\205\245", nullptr));
        operationType->setItemText(1, QCoreApplication::translate("Widget", "\345\210\240\351\231\244", nullptr));
        operationType->setItemText(2, QCoreApplication::translate("Widget", "\344\277\256\346\224\271", nullptr));
        operationType->setItemText(3, QCoreApplication::translate("Widget", "\346\237\245\346\211\276", nullptr));

        label_3->setText(QCoreApplication::translate("Widget", "index:", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "val:", nullptr));
        confirm_btn->setText(QCoreApplication::translate("Widget", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
