/********************************************************************************
** Form generated from reading UI file 'Calc.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALC_H
#define UI_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalcClass
{
public:
    QWidget *centralWidget;
    QLabel *Rez_label;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_1;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_centry;
    QPushButton *pushButton_sgnch;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_0;
    QPushButton *pushButton_decimal;
    QPushButton *pushButton_result;
    QPushButton *pushButton_addition;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_substraction;
    QPushButton *pushButton_9;
    QPushButton *pushButton_multiplication;
    QPushButton *pushButton_backspace;
    QPushButton *pushButton_sqr;
    QPushButton *pushButton_division;

    void setupUi(QMainWindow *CalcClass)
    {
        if (CalcClass->objectName().isEmpty())
            CalcClass->setObjectName(QStringLiteral("CalcClass"));
        CalcClass->resize(360, 450);
        centralWidget = new QWidget(CalcClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Rez_label = new QLabel(centralWidget);
        Rez_label->setObjectName(QStringLiteral("Rez_label"));
        Rez_label->setGeometry(QRect(0, 34, 360, 51));
        QFont font;
        font.setPointSize(20);
        Rez_label->setFont(font);
        Rez_label->setStyleSheet(QLatin1String("QLabel\n"
"{\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	border: none;\n"
"}\n"
"\n"
"background-color: white;"));
        pushButton_pow = new QPushButton(centralWidget);
        pushButton_pow->setObjectName(QStringLiteral("pushButton_pow"));
        pushButton_pow->setGeometry(QRect(0, 90, 90, 60));
        QFont font1;
        font1.setPointSize(12);
        pushButton_pow->setFont(font1);
        pushButton_pow->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border:none;\n"
"background-color: rgb(224, 224, 224);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"						  stop: 0#C0C0C0, stop: 1#D7D7D7);\n"
"}"));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 330, 90, 60));
        pushButton_1->setFont(font1);
        pushButton_1->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border:none;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"						  stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 270, 90, 60));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border:none;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"						  stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 210, 90, 60));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border:none;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"						  stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_centry = new QPushButton(centralWidget);
        pushButton_centry->setObjectName(QStringLiteral("pushButton_centry"));
        pushButton_centry->setGeometry(QRect(0, 150, 90, 60));
        pushButton_centry->setFont(font1);
        pushButton_centry->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color: rgb(202, 255, 255);\n"
"border: none;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0, y1:0, z2:0, y2:1,\n"
"						  stop: 0#A2B5CD, stop: 1#BCD2EE);\n"
"}"));
        pushButton_sgnch = new QPushButton(centralWidget);
        pushButton_sgnch->setObjectName(QStringLiteral("pushButton_sgnch"));
        pushButton_sgnch->setGeometry(QRect(270, 90, 90, 60));
        pushButton_sgnch->setFont(font1);
        pushButton_sgnch->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border:none;\n"
"background-color: rgb(224, 224, 224);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"						  stop: 0#C0C0C0, stop: 1#D7D7D7);\n"
"}"));
        pushButton_sqrt = new QPushButton(centralWidget);
        pushButton_sqrt->setObjectName(QStringLiteral("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(90, 90, 90, 60));
        pushButton_sqrt->setFont(font1);
        pushButton_sqrt->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border:none;\n"
"background-color: rgb(224, 224, 224);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"						  stop: 0#C0C0C0, stop: 1#D7D7D7);\n"
"}"));
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(90, 150, 90, 60));
        pushButton_clear->setFont(font1);
        pushButton_clear->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color: rgb(202, 255, 255);\n"
"border: none;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0, y1:0, z2:0, y2:1,\n"
"						  stop: 0#A2B5CD, stop: 1#BCD2EE);\n"
"}"));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(90, 210, 90, 60));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border:none;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"						  stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(90, 270, 90, 60));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border:none;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"						  stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 330, 90, 60));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border:none;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"						  stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(10, 390, 180, 60));
        pushButton_0->setFont(font1);
        pushButton_0->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border:none;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"						  stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_decimal = new QPushButton(centralWidget);
        pushButton_decimal->setObjectName(QStringLiteral("pushButton_decimal"));
        pushButton_decimal->setGeometry(QRect(180, 390, 90, 60));
        pushButton_decimal->setFont(font1);
        pushButton_decimal->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border:none;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"						  stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_result = new QPushButton(centralWidget);
        pushButton_result->setObjectName(QStringLiteral("pushButton_result"));
        pushButton_result->setGeometry(QRect(270, 390, 90, 60));
        pushButton_result->setFont(font1);
        pushButton_result->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color: rgb(202, 255, 255);\n"
"border: none;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0, y1:0, z2:0, y2:1,\n"
"						  stop: 0#A2B5CD, stop: 1#BCD2EE);\n"
"}"));
        pushButton_addition = new QPushButton(centralWidget);
        pushButton_addition->setObjectName(QStringLiteral("pushButton_addition"));
        pushButton_addition->setGeometry(QRect(270, 330, 90, 60));
        pushButton_addition->setFont(font1);
        pushButton_addition->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color: rgb(202, 255, 255);\n"
"border: none;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0, y1:0, z2:0, y2:1,\n"
"						  stop: 0#A2B5CD, stop: 1#BCD2EE);\n"
"}"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 330, 90, 60));
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border:none;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"						  stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(180, 270, 90, 60));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border:none;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"						  stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_substraction = new QPushButton(centralWidget);
        pushButton_substraction->setObjectName(QStringLiteral("pushButton_substraction"));
        pushButton_substraction->setGeometry(QRect(270, 270, 90, 60));
        pushButton_substraction->setFont(font1);
        pushButton_substraction->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color: rgb(202, 255, 255);\n"
"border: none;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0, y1:0, z2:0, y2:1,\n"
"						  stop: 0#A2B5CD, stop: 1#BCD2EE);\n"
"}"));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(180, 210, 90, 60));
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border:none;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"						  stop: 0#dadbde, stop: 1#f6f7fa);\n"
"}"));
        pushButton_multiplication = new QPushButton(centralWidget);
        pushButton_multiplication->setObjectName(QStringLiteral("pushButton_multiplication"));
        pushButton_multiplication->setGeometry(QRect(270, 210, 90, 60));
        pushButton_multiplication->setFont(font1);
        pushButton_multiplication->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color: rgb(202, 255, 255);\n"
"border: none;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0, y1:0, z2:0, y2:1,\n"
"						  stop: 0#A2B5CD, stop: 1#BCD2EE);\n"
"}"));
        pushButton_backspace = new QPushButton(centralWidget);
        pushButton_backspace->setObjectName(QStringLiteral("pushButton_backspace"));
        pushButton_backspace->setGeometry(QRect(180, 150, 90, 60));
        pushButton_backspace->setFont(font1);
        pushButton_backspace->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color: rgb(202, 255, 255);\n"
"border: none;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0, y1:0, z2:0, y2:1,\n"
"						  stop: 0#A2B5CD, stop: 1#BCD2EE);\n"
"}"));
        pushButton_sqr = new QPushButton(centralWidget);
        pushButton_sqr->setObjectName(QStringLiteral("pushButton_sqr"));
        pushButton_sqr->setGeometry(QRect(180, 90, 90, 60));
        pushButton_sqr->setFont(font1);
        pushButton_sqr->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"border:none;\n"
"background-color: rgb(224, 224, 224);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"						  stop: 0#C0C0C0, stop: 1#D7D7D7);\n"
"}"));
        pushButton_division = new QPushButton(centralWidget);
        pushButton_division->setObjectName(QStringLiteral("pushButton_division"));
        pushButton_division->setGeometry(QRect(270, 150, 90, 60));
        pushButton_division->setFont(font1);
        pushButton_division->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color: rgb(202, 255, 255);\n"
"border: none;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"background-color:qlineargradient(x1:0, y1:0, z2:0, y2:1,\n"
"						  stop: 0#A2B5CD, stop: 1#BCD2EE);\n"
"}"));
        CalcClass->setCentralWidget(centralWidget);

        retranslateUi(CalcClass);

        QMetaObject::connectSlotsByName(CalcClass);
    } // setupUi

    void retranslateUi(QMainWindow *CalcClass)
    {
        CalcClass->setWindowTitle(QApplication::translate("CalcClass", "Calc", 0));
        Rez_label->setText(QApplication::translate("CalcClass", "0", 0));
        pushButton_pow->setText(QApplication::translate("CalcClass", "^", 0));
        pushButton_1->setText(QApplication::translate("CalcClass", "1", 0));
        pushButton_4->setText(QApplication::translate("CalcClass", "4", 0));
        pushButton_7->setText(QApplication::translate("CalcClass", "7", 0));
        pushButton_centry->setText(QApplication::translate("CalcClass", "CE", 0));
        pushButton_sgnch->setText(QApplication::translate("CalcClass", "\302\261", 0));
        pushButton_sqrt->setText(QApplication::translate("CalcClass", "\342\210\232", 0));
        pushButton_clear->setText(QApplication::translate("CalcClass", "C", 0));
        pushButton_8->setText(QApplication::translate("CalcClass", "8", 0));
        pushButton_5->setText(QApplication::translate("CalcClass", "5", 0));
        pushButton_2->setText(QApplication::translate("CalcClass", "2", 0));
        pushButton_0->setText(QApplication::translate("CalcClass", "0", 0));
        pushButton_decimal->setText(QApplication::translate("CalcClass", ".", 0));
        pushButton_result->setText(QApplication::translate("CalcClass", "=", 0));
        pushButton_addition->setText(QApplication::translate("CalcClass", "+", 0));
        pushButton_3->setText(QApplication::translate("CalcClass", "3", 0));
        pushButton_6->setText(QApplication::translate("CalcClass", "6", 0));
        pushButton_substraction->setText(QApplication::translate("CalcClass", "-", 0));
        pushButton_9->setText(QApplication::translate("CalcClass", "9", 0));
        pushButton_multiplication->setText(QApplication::translate("CalcClass", "*", 0));
        pushButton_backspace->setText(QApplication::translate("CalcClass", "\342\214\253", 0));
        pushButton_sqr->setText(QApplication::translate("CalcClass", "x^2", 0));
        pushButton_division->setText(QApplication::translate("CalcClass", "/", 0));
    } // retranslateUi

};

namespace Ui {
    class CalcClass: public Ui_CalcClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALC_H
