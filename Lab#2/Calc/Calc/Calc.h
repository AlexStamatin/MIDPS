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
    void SqrtOpPress();
    void SqrOpPress();
    void InvertPress();
    void AddOpPress();
    void MultOpPress();
    void EqPress();
    void DeciPress();
    void SgnPress();
    void BackspacePress();
    void ClearPress();
    void ClearEPress();

private:

	Ui::CalcClass *ui;
	void InvalidOp();
	bool calculation(double firstOP, QString oper);

	double MemRez;
	double CurrRez;
	double CurrOp;

	QString NextAddOper;
	QString NextMultOper;
	bool NextOper;



};
