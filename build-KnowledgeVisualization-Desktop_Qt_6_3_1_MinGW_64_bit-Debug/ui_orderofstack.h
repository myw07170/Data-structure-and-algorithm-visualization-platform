/********************************************************************************
** Form generated from reading UI file 'orderofstack.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDEROFSTACK_H
#define UI_ORDEROFSTACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderOfStack
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_6;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLabel *label_10;
    QFrame *line_2;
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_2;

    void setupUi(QDialog *OrderOfStack)
    {
        if (OrderOfStack->objectName().isEmpty())
            OrderOfStack->setObjectName(QString::fromUtf8("OrderOfStack"));
        OrderOfStack->resize(1024, 600);
        OrderOfStack->setStyleSheet(QString::fromUtf8("#OrderOfStack{border-image: url(:/new/pic/green.png);}"));
        layoutWidget = new QWidget(OrderOfStack);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 961, 541));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label_7->setFont(font);

        verticalLayout->addWidget(label_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setPointSize(14);
        label_4->setFont(font1);

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font2;
        font2.setPointSize(12);
        label_5->setFont(font2);

        horizontalLayout->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        horizontalLayout_2->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_2);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        horizontalLayout_3->addWidget(label_8);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font3;
        font3.setPointSize(12);
        font3.setItalic(true);
        font3.setUnderline(true);
        label_11->setFont(font3);

        horizontalLayout_3->addWidget(label_11);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        horizontalLayout_4->addWidget(label_9);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font3);

        horizontalLayout_4->addWidget(label_10);


        verticalLayout->addLayout(horizontalLayout_4);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        verticalLayout->addWidget(label);

        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setStyleSheet(QString::fromUtf8("textBrowser{\342\200\234background:transparent;border-width:0;border-style:outset\342\200\235}"));
        textBrowser->setLineWidth(0);

        verticalLayout->addWidget(textBrowser);


        horizontalLayout_5->addLayout(verticalLayout);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(512, 16777215));

        horizontalLayout_5->addWidget(label_2);


        retranslateUi(OrderOfStack);

        QMetaObject::connectSlotsByName(OrderOfStack);
    } // setupUi

    void retranslateUi(QDialog *OrderOfStack)
    {
        OrderOfStack->setWindowTitle(QCoreApplication::translate("OrderOfStack", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("OrderOfStack", "\351\241\272\345\272\217\346\240\210", nullptr));
        label_4->setText(QCoreApplication::translate("OrderOfStack", "\345\255\246\346\227\266\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("OrderOfStack", "1.5", nullptr));
        label_3->setText(QCoreApplication::translate("OrderOfStack", "\351\232\276\345\272\246\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("OrderOfStack", "1.5", nullptr));
        label_8->setText(QCoreApplication::translate("OrderOfStack", "\345\211\215\345\272\217\347\237\245\350\257\206\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("OrderOfStack", "\346\240\210", nullptr));
        label_9->setText(QCoreApplication::translate("OrderOfStack", "\345\255\220\347\237\245\350\257\206\347\202\271\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("OrderOfStack", "null", nullptr));
        label->setText(QCoreApplication::translate("OrderOfStack", "\347\256\200\344\273\213\357\274\232", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("OrderOfStack", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">    \351\207\207\347\224\250\351\241\272\345\272\217\345\255\230\345\202\250\347\232\204\346\240\210\347\247\260\344\270\272\351\241\272\345\272\217\346\240\210\357\274\214\345\256\203\345\210\251\347\224\250\344\270\200\347\273\204\345\234\260\345\235\200\350\277\236\347\273\255\347\232\204\345\255\230\345\202\250\345\215\225\345\205\203\345\255\230\346\224\276\350\207\252\346\240\210\345\272\225\345\210\260\346\240\210\351\241\266\347\232\204\346\225\260\346\215\256\345\205\203\347\264\240\357"
                        "\274\214\345\220\214\346\227\266\351\231\204\350\256\276\344\270\200\344\270\252\346\214\207\351\222\210\357\274\210top\357\274\211\346\214\207\347\244\272\345\275\223\345\211\215\346\240\210\351\241\266\345\205\203\347\264\240\347\232\204\344\275\215\347\275\256\343\200\202</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">    \350\213\245\345\255\230\345\202\250\346\240\210\347\232\204\351\225\277\345\272\246\344\270\272StackSize\357\274\214\345\210\231\346\240\210\351\241\266\344\275\215\347\275\256top\345\277\205\351\241\273\345\260\217\344\272\216StackSize\343\200\202\345\275\223\346\240\210\345\255\230\345\234\250\344\270\200\344\270\252\345\205\203\347\264\240\346\227\266\357\274\214top\347\255\211\344\272\2160\357\274\214\345\233\240\346\255\244\351\200\232\345\270\270\346\212\212\347\251\272\346\240\210\347\232\204\345\210\244\346\226\255\346\235\241\344\273\266\345\256\232\344\275\215"
                        "top\347\255\211\344\272\216-1</span></p></body></html>", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OrderOfStack: public Ui_OrderOfStack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDEROFSTACK_H
