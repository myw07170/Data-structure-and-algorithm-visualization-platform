/********************************************************************************
** Form generated from reading UI file 'doublelinkedlist.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOUBLELINKEDLIST_H
#define UI_DOUBLELINKEDLIST_H

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

class Ui_DoubleLinkedList
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

    void setupUi(QDialog *DoubleLinkedList)
    {
        if (DoubleLinkedList->objectName().isEmpty())
            DoubleLinkedList->setObjectName(QString::fromUtf8("DoubleLinkedList"));
        DoubleLinkedList->resize(1024, 600);
        DoubleLinkedList->setStyleSheet(QString::fromUtf8("#DoubleLinkedList{border-image: url(:/new/pic/green.png);}"));
        layoutWidget = new QWidget(DoubleLinkedList);
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


        retranslateUi(DoubleLinkedList);

        QMetaObject::connectSlotsByName(DoubleLinkedList);
    } // setupUi

    void retranslateUi(QDialog *DoubleLinkedList)
    {
        DoubleLinkedList->setWindowTitle(QCoreApplication::translate("DoubleLinkedList", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("DoubleLinkedList", "\345\217\214\345\220\221\351\223\276\350\241\250", nullptr));
        label_4->setText(QCoreApplication::translate("DoubleLinkedList", "\345\255\246\346\227\266\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("DoubleLinkedList", "1", nullptr));
        label_3->setText(QCoreApplication::translate("DoubleLinkedList", "\351\232\276\345\272\246\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("DoubleLinkedList", "1.5", nullptr));
        label_8->setText(QCoreApplication::translate("DoubleLinkedList", "\345\211\215\345\272\217\347\237\245\350\257\206\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("DoubleLinkedList", "\351\223\276\350\241\250", nullptr));
        label_9->setText(QCoreApplication::translate("DoubleLinkedList", "\345\255\220\347\237\245\350\257\206\347\202\271\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("DoubleLinkedList", "null", nullptr));
        label->setText(QCoreApplication::translate("DoubleLinkedList", "\347\256\200\344\273\213\357\274\232", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("DoubleLinkedList", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">    \350\246\201\345\234\250\345\215\225\345\220\221\351\223\276\350\241\250\344\270\255\346\211\276\345\210\260\346\237\220\344\270\252\350\212\202\347\202\271\347\232\204\345\211\215\351\251\261\350\212\202\347\202\271\357\274\214\345\277\205\351\241\273\344\273\216\351\223\276\350\241\250\347\232\204\345\244\264\350\212\202\347\202\271\345\207\272\345\217\221\344\276\235\346\254\241\345\220\221\345\220\216\345\257\273\346\211\276\357\274\214\344\275\206\346\230\257\351\234\200\350\246\201\316"
                        "\237(n)\346\227\266\351\227\264\343\200\202\344\270\272\346\255\244\346\210\221\344\273\254\345\217\257\344\273\245\346\211\251\345\261\225\345\215\225\345\220\221\351\223\276\350\241\250\347\232\204\350\212\202\347\202\271\347\273\223\346\236\204\357\274\214\344\275\277\345\276\227\351\200\232\350\277\207\344\270\200\344\270\252\350\212\202\347\202\271\347\232\204\345\274\225\347\224\250\357\274\214\344\270\215\344\275\206\350\203\275\345\244\237\350\256\277\351\227\256\345\205\266\345\220\216\347\273\255\350\212\202\347\202\271\357\274\214\344\271\237\345\217\257\344\273\245\346\226\271\344\276\277\347\232\204\350\256\277\351\227\256\345\205\266\345\211\215\351\251\261\350\212\202\347\202\271\343\200\202\346\211\251\345\261\225\345\215\225\345\220\221\351\223\276\350\241\250\350\212\202\347\202\271\347\273\223\346\236\204\347\232\204\346\226\271\346\263\225\346\230\257\357\274\214\345\234\250\345\215\225\351\223\276\350\241\250\350\212\202\347\202\271\347\273\223\346\236\204\344\270\255\346\226\260\345\242\236"
                        "\345\212\240\344\270\200\344\270\252\345\237\237\357\274\214\350\257\245\345\237\237\347\224\250\344\272\216\346\214\207\345\220\221\350\212\202\347\202\271\347\232\204\347\233\264\346\216\245\345\211\215\351\251\261\350\212\202\347\202\271\343\200\202\350\257\245\351\223\276\350\241\250\347\247\260\344\270\272\345\217\214\345\220\221\351\223\276\350\241\250\343\200\202\345\215\225\345\220\221\351\223\276\350\241\250\345\217\252\350\203\275\344\273\216\344\270\200\344\270\252\346\226\271\345\220\221\351\201\215\345\216\206\357\274\214\345\217\214\345\220\221\351\223\276\350\241\250\345\217\257\344\273\245\344\273\216\344\270\244\344\270\252\346\226\271\345\220\221\351\201\215\345\216\206\343\200\202</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">    \345\217\214\345\220\221\351\223\276\350\241\250\344\270\255\345\220\204\350\212\202\347\202\271\345\214\205\345\220\253\344\273\245\344\270\213"
                        " 3 \351\203\250\345\210\206\344\277\241\346\201\257\357\274\232</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\346\214\207\351\222\210\345\237\237\357\274\232\347\224\250\344\272\216\346\214\207\345\220\221\345\275\223\345\211\215\350\212\202\347\202\271\347\232\204\347\233\264\346\216\245\345\211\215\351\251\261\350\212\202\347\202\271\357\274\233</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\346\225\260\346\215\256\345\237\237\357\274\232\347\224\250\344\272\216\345\255\230\345\202\250\346\225\260\346\215\256\345\205\203\347\264\240\343\200\202</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\346\214\207\351\222\210\345\237\237\357\274\232\347"
                        "\224\250\344\272\216\346\214\207\345\220\221\345\275\223\345\211\215\350\212\202\347\202\271\347\232\204\347\233\264\346\216\245\345\220\216\347\273\247\350\212\202\347\202\271</span></p></body></html>", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DoubleLinkedList: public Ui_DoubleLinkedList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOUBLELINKEDLIST_H
