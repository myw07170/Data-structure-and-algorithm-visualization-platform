/********************************************************************************
** Form generated from reading UI file 'linkedlist.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKEDLIST_H
#define UI_LINKEDLIST_H

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

class Ui_LinkedList
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
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_10;
    QFrame *line_2;
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_2;

    void setupUi(QDialog *LinkedList)
    {
        if (LinkedList->objectName().isEmpty())
            LinkedList->setObjectName(QString::fromUtf8("LinkedList"));
        LinkedList->resize(1024, 600);
        LinkedList->setStyleSheet(QString::fromUtf8("#LinkedList{border-image: url(:/new/pic/green.png);}"));
        layoutWidget = new QWidget(LinkedList);
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

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font3);

        horizontalLayout_4->addWidget(label_13);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font3);

        horizontalLayout_4->addWidget(label_12);

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


        retranslateUi(LinkedList);

        QMetaObject::connectSlotsByName(LinkedList);
    } // setupUi

    void retranslateUi(QDialog *LinkedList)
    {
        LinkedList->setWindowTitle(QCoreApplication::translate("LinkedList", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("LinkedList", "\351\223\276\350\241\250", nullptr));
        label_4->setText(QCoreApplication::translate("LinkedList", "\345\255\246\346\227\266\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("LinkedList", "5", nullptr));
        label_3->setText(QCoreApplication::translate("LinkedList", "\351\232\276\345\272\246\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("LinkedList", "3", nullptr));
        label_8->setText(QCoreApplication::translate("LinkedList", "\345\211\215\345\272\217\347\237\245\350\257\206\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("LinkedList", "\347\272\277\346\200\247\350\241\250", nullptr));
        label_9->setText(QCoreApplication::translate("LinkedList", "\345\255\220\347\237\245\350\257\206\347\202\271\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("LinkedList", "\345\215\225\345\220\221\351\223\276\350\241\250", nullptr));
        label_12->setText(QCoreApplication::translate("LinkedList", "\345\217\214\345\220\221\351\223\276\350\241\250", nullptr));
        label_10->setText(QCoreApplication::translate("LinkedList", "\345\276\252\347\216\257\351\223\276\350\241\250", nullptr));
        label->setText(QCoreApplication::translate("LinkedList", "\347\256\200\344\273\213\357\274\232", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("LinkedList", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">    \351\223\276\350\241\250\346\230\257\344\270\200\347\247\215\347\211\251\347\220\206\345\255\230\345\202\250\347\273\223\346\236\204\344\270\212\351\235\236\350\277\236\347\273\255\357\274\214\351\235\236\351\241\272\345\272\217\347\232\204\345\255\230\345\202\250\347\273\223\346\236\204\357\274\214\346\225\260\346\215\256\345\205\203\347\264\240\347\232\204\351\200\273\350\276\221\351\241\272\345\272\217\346\230\257\351\200\232\350\277\207\351\223\276\350\241\250\344\270\255\347\232\204\346"
                        "\214\207\351\222\210\351\223\276\346\216\245\346\254\241\345\272\217\345\256\236\347\216\260\347\232\204\343\200\202</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">    \351\223\276\350\241\250\346\230\257\344\270\200\347\263\273\345\210\227\347\232\204\345\255\230\345\202\250\346\225\260\346\215\256\345\205\203\347\264\240\347\232\204\345\215\225\345\205\203\351\200\232\350\277\207\346\214\207\351\222\210\344\270\262\346\216\245\350\265\267\346\235\245\345\275\242\346\210\220\347\232\204\357\274\214\345\233\240\346\255\244\346\257\217\344\270\252\345\215\225\345\205\203\350\207\263\345\260\221\346\234\211\344\270\244\344\270\252\345\237\237\357\274\214\344\270\200\344\270\252\345\237\237\347\224\250\344\272\216\346\225\260\346\215\256\345\205\203\347\264\240\347\232\204\345\255\230\345\202\250\357\274\214\345\217\246\344\270\200\344\270\252\346\210\226\344\270\244\344\270\252\345\237\237\346"
                        "\230\257\346\214\207\345\220\221\345\205\266\344\273\226\345\215\225\345\205\203\347\232\204\346\214\207\351\222\210\343\200\202\350\277\231\351\207\214\345\205\267\346\234\211\344\270\200\344\270\252\346\225\260\346\215\256\345\237\237\345\222\214\345\244\232\344\270\252\346\214\207\351\222\210\345\237\237\347\232\204\345\255\230\345\202\250\345\215\225\345\205\203\351\200\232\345\270\270\347\247\260\344\270\272\350\212\202\347\202\271\357\274\210node\357\274\211\343\200\202\351\223\276\350\241\250\347\232\204\347\254\254\344\270\200\344\270\252\350\212\202\347\202\271\345\222\214\346\234\200\345\220\216\344\270\200\344\270\252\350\212\202\347\202\271\357\274\214\345\210\206\345\210\253\347\247\260\344\270\272\351\223\276\350\241\250\347\232\204\345\244\264\350\212\202\347\202\271\345\222\214\345\260\276\350\212\202\347\202\271\343\200\202\345\260\276\350\212\202\347\202\271\347\232\204\347\211\271\345\276\201\346\230\257\345\205\266 next \345\274\225\347\224\250\344\270\272\347\251\272\357\274\210null\357\274"
                        "\211\343\200\202\351\223\276\350\241\250\344\270\255\346\257\217\344\270\252\350\212\202\347\202\271\347\232\204next\345\274\225\347\224\250\351\203\275\347\233\270\345\275\223\344\272\216\344\270\200\344\270\252\346\214\207\351\222\210\357\274\214\346\214\207\345\220\221\345\217\246\344\270\200\344\270\252\350\212\202\347\202\271\357\274\214\345\200\237\345\212\251\350\277\231\344\272\233 next \345\274\225\347\224\250\357\274\214\346\210\221\344\273\254\345\217\257\344\273\245\344\273\216\351\223\276\350\241\250\347\232\204\345\244\264\350\212\202\347\202\271\347\247\273\345\212\250\345\210\260\345\260\276\350\212\202\347\202\271\343\200\202</span></p></body></html>", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LinkedList: public Ui_LinkedList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKEDLIST_H
