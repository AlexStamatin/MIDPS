#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Calc.h"

class Calc : public QMainWindow
{
    Q_OBJECT

public:
    Calc(QWidget *parent = Q_NULLPTR);
    ~Calc();

    private slots:
    
    void DigitPress();

private:

	Ui::CalcClass *ui;

};
