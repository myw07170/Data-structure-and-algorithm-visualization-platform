/********************************************************************************
** Form generated from reading UI file 'config.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_H
#define UI_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_config
{
public:
    QLabel *label;

    void setupUi(QWidget *config)
    {
        if (config->objectName().isEmpty())
            config->setObjectName(QString::fromUtf8("config"));
        config->resize(800, 600);
        config->setMinimumSize(QSize(800, 600));
        config->setMaximumSize(QSize(800, 600));
        config->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(config);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 70, 481, 241));
        label->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(config);

        QMetaObject::connectSlotsByName(config);
    } // setupUi

    void retranslateUi(QWidget *config)
    {
        config->setWindowTitle(QCoreApplication::translate("config", "Form", nullptr));
        label->setText(QCoreApplication::translate("config", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\210\233\344\275\234\350\200\205\357\274\232\351\231\210\346\200\235\351\252\220 \344\270\207\346\231\223\346\266\265 \346\242\205\350\256\256\346\226\207</span></p><p><span style=\" font-size:12pt;\">\345\255\246\346\240\241\357\274\232\344\270\255\345\233\275\345\206\234\344\270\232\345\244\247\345\255\246</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class config: public Ui_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
