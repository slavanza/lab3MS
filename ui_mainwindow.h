/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QCustomPlot *widget;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QDoubleSpinBox *spin_M;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QPushButton *pushButton;
    QDoubleSpinBox *spin_D;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox_4;
    QLabel *label_6;
    QDoubleSpinBox *spin_Mark;
    QLabel *label_res;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(661, 467);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget = new QCustomPlot(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));

        gridLayout->addWidget(widget, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 2, 1, 1);

        spin_M = new QDoubleSpinBox(centralWidget);
        spin_M->setObjectName(QString::fromUtf8("spin_M"));
        spin_M->setFrame(false);
        spin_M->setReadOnly(true);
        spin_M->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_2->addWidget(spin_M, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 4, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 0, 0, 1, 1);

        spin_D = new QDoubleSpinBox(centralWidget);
        spin_D->setObjectName(QString::fromUtf8("spin_D"));
        spin_D->setWrapping(false);
        spin_D->setFrame(false);
        spin_D->setReadOnly(true);
        spin_D->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_2->addWidget(spin_D, 2, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 2, 1, 1);

        doubleSpinBox_3 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setFrame(false);
        doubleSpinBox_3->setReadOnly(true);
        doubleSpinBox_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_3->setValue(0.980000000000000);

        gridLayout_2->addWidget(doubleSpinBox_3, 2, 3, 1, 1);

        doubleSpinBox_4 = new QDoubleSpinBox(centralWidget);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setFrame(false);
        doubleSpinBox_4->setReadOnly(true);
        doubleSpinBox_4->setButtonSymbols(QAbstractSpinBox::NoButtons);
        doubleSpinBox_4->setValue(0.880000000000000);

        gridLayout_2->addWidget(doubleSpinBox_4, 1, 3, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 2, 1, 1);

        spin_Mark = new QDoubleSpinBox(centralWidget);
        spin_Mark->setObjectName(QString::fromUtf8("spin_Mark"));
        spin_Mark->setFrame(false);
        spin_Mark->setReadOnly(true);
        spin_Mark->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_2->addWidget(spin_Mark, 0, 3, 1, 1);

        label_res = new QLabel(centralWidget);
        label_res->setObjectName(QString::fromUtf8("label_res"));

        gridLayout_2->addWidget(label_res, 0, 4, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200 \321\201\320\273\321\203\321\207\320\260\320\271\320\275\321\213\321\205 \321\207\320\270\321\201\320\265\320\273", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\234\320\260\321\202.\320\276\320\266\320\270\320\264\320\260\320\275\320\270\320\265(\321\202\320\265\320\276\321\200)", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\224\320\270\321\201\320\277\320\265\321\200\321\201\320\270\321\217(\320\255\320\272\321\201\320\277)", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\320\265", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\234\320\260\321\202.\320\276\320\266\320\270\320\264\320\260\320\275\320\270\320\265(\321\215\320\272\321\201\320\277)", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\274\321\213 \320\262\321\213\320\261\320\276\321\200\320\276\320\272", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\224\320\270\321\201\320\277\320\265\321\200\321\201\320\270\321\217(\321\202\320\265\320\276\321\200)", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\320\236\321\206\320\265\320\275\320\272\320\260 \320\277\320\276 \320\272\321\200\320\270\321\202\320\265\321\200\320\270\321\216", nullptr));
        label_res->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
