/********************************************************************************
** Form generated from reading UI file 'all.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALL_H
#define UI_ALL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "all.h"

QT_BEGIN_NAMESPACE

class Ui_All
{
public:
    QWidget *centralwidget;
    QPushButton *btn_search;
    QLineEdit *lineEdit;
    QListWidget *listWidget;
    QToolButton *toolButton;
    QPushButton *btn_sort;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *cBoxDifficult;
    QCheckBox *cBoxTime;
    QStatusBar *statusbar;

    void setupUi(All *All)
    {
        if (All->objectName().isEmpty())
            All->setObjectName(QString::fromUtf8("All"));
        All->resize(800, 600);
        All->setStyleSheet(QString::fromUtf8("#All{background-image: url(:/image/1.jpg);}"));
        centralwidget = new QWidget(All);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setGeometry(QRect(0, 0, 551, 321));
        btn_search = new QPushButton(centralwidget);
        btn_search->setObjectName(QString::fromUtf8("btn_search"));
        btn_search->setGeometry(QRect(460, 10, 71, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Modern No. 20")});
        font.setPointSize(12);
        btn_search->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_search->setIcon(icon);
        btn_search->setIconSize(QSize(13, 13));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(270, 10, 171, 31));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(130, 50, 401, 261));
        QFont font1;
        font1.setPointSize(10);
        listWidget->setFont(font1);
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(130, 10, 131, 31));
        toolButton->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/keyword.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);
        toolButton->setIconSize(QSize(16, 16));
        toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton->setAutoRaise(true);
        btn_sort = new QPushButton(centralwidget);
        btn_sort->setObjectName(QString::fromUtf8("btn_sort"));
        btn_sort->setGeometry(QRect(20, 170, 91, 31));
        btn_sort->setFont(font1);
        btn_sort->setAutoFillBackground(false);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 91, 127));
        groupBox->setFont(font1);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cBoxDifficult = new QCheckBox(groupBox);
        cBoxDifficult->setObjectName(QString::fromUtf8("cBoxDifficult"));
        cBoxDifficult->setFont(font1);

        verticalLayout->addWidget(cBoxDifficult);

        cBoxTime = new QCheckBox(groupBox);
        cBoxTime->setObjectName(QString::fromUtf8("cBoxTime"));
        cBoxTime->setFont(font1);

        verticalLayout->addWidget(cBoxTime);

        statusbar = new QStatusBar(All);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setGeometry(QRect(0, 0, 3, 24));

        retranslateUi(All);

        QMetaObject::connectSlotsByName(All);
    } // setupUi

    void retranslateUi(All *All)
    {
        All->setWindowTitle(QCoreApplication::translate("All", "All", nullptr));
        btn_search->setText(QCoreApplication::translate("All", "\346\220\234\347\264\242", nullptr));
        toolButton->setText(QCoreApplication::translate("All", "\346\220\234\347\264\242\345\205\263\351\224\256\350\257\215\357\274\232", nullptr));
        btn_sort->setText(QCoreApplication::translate("All", "\346\216\222\345\272\217\345\210\267\346\226\260", nullptr));
        groupBox->setTitle(QCoreApplication::translate("All", "\346\216\222\345\272\217\346\235\241\344\273\266", nullptr));
        cBoxDifficult->setText(QCoreApplication::translate("All", "\351\232\276\345\272\246", nullptr));
        cBoxTime->setText(QCoreApplication::translate("All", "\345\255\246\346\227\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class All: public Ui_All {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALL_H
