/********************************************************************************
** Form generated from reading UI file 'fly.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLY_H
#define UI_FLY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fly
{
public:
    QWidget *centralwidget;
    QLabel *l_muha;
    QLabel *l_pastka;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *l_winer;
    QLCDNumber *lcdN;
    QLabel *l_winer1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Fly)
    {
        if (Fly->objectName().isEmpty())
            Fly->setObjectName("Fly");
        Fly->resize(949, 570);
        centralwidget = new QWidget(Fly);
        centralwidget->setObjectName("centralwidget");
        l_muha = new QLabel(centralwidget);
        l_muha->setObjectName("l_muha");
        l_muha->setGeometry(QRect(220, 170, 61, 41));
        l_muha->setPixmap(QPixmap(QString::fromUtf8("muha.png")));
        l_muha->setScaledContents(true);
        l_pastka = new QLabel(centralwidget);
        l_pastka->setObjectName("l_pastka");
        l_pastka->setGeometry(QRect(30, 60, 81, 61));
        l_pastka->setPixmap(QPixmap(QString::fromUtf8("pastka.jpg")));
        l_pastka->setScaledContents(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 10, 221, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        l_winer = new QLabel(layoutWidget);
        l_winer->setObjectName("l_winer");

        horizontalLayout->addWidget(l_winer);

        lcdN = new QLCDNumber(layoutWidget);
        lcdN->setObjectName("lcdN");

        horizontalLayout->addWidget(lcdN);

        l_winer1 = new QLabel(centralwidget);
        l_winer1->setObjectName("l_winer1");
        l_winer1->setGeometry(QRect(0, 490, 371, 31));
        Fly->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Fly);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 949, 26));
        Fly->setMenuBar(menubar);
        statusbar = new QStatusBar(Fly);
        statusbar->setObjectName("statusbar");
        Fly->setStatusBar(statusbar);

        retranslateUi(Fly);

        QMetaObject::connectSlotsByName(Fly);
    } // setupUi

    void retranslateUi(QMainWindow *Fly)
    {
        Fly->setWindowTitle(QCoreApplication::translate("Fly", "Fly", nullptr));
        l_muha->setText(QString());
        l_pastka->setText(QString());
        l_winer->setText(QCoreApplication::translate("Fly", "\320\224\320\220\320\222\320\220\320\231 \320\242\320\230 \320\227\320\234\320\236\320\226\320\225\320\250!", nullptr));
        l_winer1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Fly: public Ui_Fly {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLY_H
