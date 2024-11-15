/********************************************************************************
** Form generated from reading UI file 'calculatorwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORWINDOW_H
#define UI_CALCULATORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorWindow
{
public:
    QLineEdit *displayEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *numButton_7;
    QPushButton *numButton_8;
    QPushButton *numButton_9;
    QPushButton *plusButton;
    QPushButton *numButton_4;
    QPushButton *numButton_5;
    QPushButton *numButton_6;
    QPushButton *subButton;
    QPushButton *numButton_1;
    QPushButton *numButton_2;
    QPushButton *numButton_3;
    QPushButton *mulButton;
    QPushButton *acButton;
    QPushButton *numButton_0;
    QPushButton *eqlButton;
    QPushButton *divButton;

    void setupUi(QWidget *CalculatorWindow)
    {
        if (CalculatorWindow->objectName().isEmpty())
            CalculatorWindow->setObjectName(QString::fromUtf8("CalculatorWindow"));
        CalculatorWindow->resize(220, 260);
        CalculatorWindow->setMinimumSize(QSize(220, 260));
        CalculatorWindow->setMaximumSize(QSize(220, 260));
        displayEdit = new QLineEdit(CalculatorWindow);
        displayEdit->setObjectName(QString::fromUtf8("displayEdit"));
        displayEdit->setGeometry(QRect(12, 30, 201, 41));
        QFont font;
        font.setPointSize(20);
        displayEdit->setFont(font);
        displayEdit->setReadOnly(true);
        widget = new QWidget(CalculatorWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 80, 201, 171));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        numButton_7 = new QPushButton(widget);
        numButton_7->setObjectName(QString::fromUtf8("numButton_7"));
        numButton_7->setFont(font);

        gridLayout->addWidget(numButton_7, 0, 0, 1, 1);

        numButton_8 = new QPushButton(widget);
        numButton_8->setObjectName(QString::fromUtf8("numButton_8"));
        numButton_8->setFont(font);

        gridLayout->addWidget(numButton_8, 0, 1, 1, 1);

        numButton_9 = new QPushButton(widget);
        numButton_9->setObjectName(QString::fromUtf8("numButton_9"));
        numButton_9->setFont(font);

        gridLayout->addWidget(numButton_9, 0, 2, 1, 1);

        plusButton = new QPushButton(widget);
        plusButton->setObjectName(QString::fromUtf8("plusButton"));
        plusButton->setFont(font);

        gridLayout->addWidget(plusButton, 0, 3, 1, 1);

        numButton_4 = new QPushButton(widget);
        numButton_4->setObjectName(QString::fromUtf8("numButton_4"));
        numButton_4->setFont(font);

        gridLayout->addWidget(numButton_4, 1, 0, 1, 1);

        numButton_5 = new QPushButton(widget);
        numButton_5->setObjectName(QString::fromUtf8("numButton_5"));
        numButton_5->setFont(font);

        gridLayout->addWidget(numButton_5, 1, 1, 1, 1);

        numButton_6 = new QPushButton(widget);
        numButton_6->setObjectName(QString::fromUtf8("numButton_6"));
        numButton_6->setFont(font);

        gridLayout->addWidget(numButton_6, 1, 2, 1, 1);

        subButton = new QPushButton(widget);
        subButton->setObjectName(QString::fromUtf8("subButton"));
        subButton->setFont(font);

        gridLayout->addWidget(subButton, 1, 3, 1, 1);

        numButton_1 = new QPushButton(widget);
        numButton_1->setObjectName(QString::fromUtf8("numButton_1"));
        numButton_1->setFont(font);

        gridLayout->addWidget(numButton_1, 2, 0, 1, 1);

        numButton_2 = new QPushButton(widget);
        numButton_2->setObjectName(QString::fromUtf8("numButton_2"));
        numButton_2->setFont(font);

        gridLayout->addWidget(numButton_2, 2, 1, 1, 1);

        numButton_3 = new QPushButton(widget);
        numButton_3->setObjectName(QString::fromUtf8("numButton_3"));
        numButton_3->setFont(font);

        gridLayout->addWidget(numButton_3, 2, 2, 1, 1);

        mulButton = new QPushButton(widget);
        mulButton->setObjectName(QString::fromUtf8("mulButton"));
        mulButton->setFont(font);

        gridLayout->addWidget(mulButton, 2, 3, 1, 1);

        acButton = new QPushButton(widget);
        acButton->setObjectName(QString::fromUtf8("acButton"));
        acButton->setFont(font);

        gridLayout->addWidget(acButton, 3, 0, 1, 1);

        numButton_0 = new QPushButton(widget);
        numButton_0->setObjectName(QString::fromUtf8("numButton_0"));
        numButton_0->setFont(font);

        gridLayout->addWidget(numButton_0, 3, 1, 1, 1);

        eqlButton = new QPushButton(widget);
        eqlButton->setObjectName(QString::fromUtf8("eqlButton"));
        eqlButton->setFont(font);

        gridLayout->addWidget(eqlButton, 3, 2, 1, 1);

        divButton = new QPushButton(widget);
        divButton->setObjectName(QString::fromUtf8("divButton"));
        divButton->setFont(font);

        gridLayout->addWidget(divButton, 3, 3, 1, 1);


        retranslateUi(CalculatorWindow);

        QMetaObject::connectSlotsByName(CalculatorWindow);
    } // setupUi

    void retranslateUi(QWidget *CalculatorWindow)
    {
        CalculatorWindow->setWindowTitle(QCoreApplication::translate("CalculatorWindow", "CalculatorWindow", nullptr));
        numButton_7->setText(QCoreApplication::translate("CalculatorWindow", "7", nullptr));
        numButton_8->setText(QCoreApplication::translate("CalculatorWindow", "8", nullptr));
        numButton_9->setText(QCoreApplication::translate("CalculatorWindow", "9", nullptr));
        plusButton->setText(QCoreApplication::translate("CalculatorWindow", "+", nullptr));
        numButton_4->setText(QCoreApplication::translate("CalculatorWindow", "4", nullptr));
        numButton_5->setText(QCoreApplication::translate("CalculatorWindow", "5", nullptr));
        numButton_6->setText(QCoreApplication::translate("CalculatorWindow", "6", nullptr));
        subButton->setText(QCoreApplication::translate("CalculatorWindow", "-", nullptr));
        numButton_1->setText(QCoreApplication::translate("CalculatorWindow", "1", nullptr));
        numButton_2->setText(QCoreApplication::translate("CalculatorWindow", "2", nullptr));
        numButton_3->setText(QCoreApplication::translate("CalculatorWindow", "3", nullptr));
        mulButton->setText(QCoreApplication::translate("CalculatorWindow", "\303\227", nullptr));
        acButton->setText(QCoreApplication::translate("CalculatorWindow", "AC", nullptr));
        numButton_0->setText(QCoreApplication::translate("CalculatorWindow", "0", nullptr));
        eqlButton->setText(QCoreApplication::translate("CalculatorWindow", "=", nullptr));
        divButton->setText(QCoreApplication::translate("CalculatorWindow", "\303\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorWindow: public Ui_CalculatorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORWINDOW_H
