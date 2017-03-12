#include "Calc.h"


Calc::Calc(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::CalcClass)
{
	MemRez = 0.0;
	CurrOp = 0.0;
	CurrOp = 0.0;
	NextOper = true;

	ui->setupUi(this);

	connect(ui->pushButton_0, SIGNAL(released()), this, SLOT(DigitPress()));
	connect(ui->pushButton_1, SIGNAL(released()), this, SLOT(DigitPress()));
	connect(ui->pushButton_2, SIGNAL(released()), this, SLOT(DigitPress()));
	connect(ui->pushButton_3, SIGNAL(released()), this, SLOT(DigitPress()));
	connect(ui->pushButton_4, SIGNAL(released()), this, SLOT(DigitPress()));
	connect(ui->pushButton_5, SIGNAL(released()), this, SLOT(DigitPress()));
	connect(ui->pushButton_6, SIGNAL(released()), this, SLOT(DigitPress()));
	connect(ui->pushButton_7, SIGNAL(released()), this, SLOT(DigitPress()));
	connect(ui->pushButton_8, SIGNAL(released()), this, SLOT(DigitPress()));
	connect(ui->pushButton_9, SIGNAL(released()), this, SLOT(DigitPress()));
	connect(ui->pushButton_sqrt, SIGNAL(released()), this, SLOT(SqrtOpPress()));
	connect(ui->pushButton_sqr, SIGNAL(released()), this, SLOT(SqrOpPress()));
	connect(ui->pushButton_addition, SIGNAL(released()), this, SLOT(AddOpPress()));
	connect(ui->pushButton_substraction, SIGNAL(released()), this, SLOT(AddOpPress()));
	connect(ui->pushButton_multiplication, SIGNAL(released()), this, SLOT(MultOpPress()));
	connect(ui->pushButton_division, SIGNAL(released()), this, SLOT(MultOpPress()));
	connect(ui->pushButton_result, SIGNAL(released()), this, SLOT(EqPress()));
	connect(ui->pushButton_decimal, SIGNAL(released()), this, SLOT(DeciPress()));
	connect(ui->pushButton_sgnch, SIGNAL(released()), this, SLOT(SgnPress()));
	connect(ui->pushButton_backspace, SIGNAL(released()), this, SLOT(BackspacePress()));
	connect(ui->pushButton_clear, SIGNAL(released()), this, SLOT(ClearPress()));
	connect(ui->pushButton_centry, SIGNAL(released()), this, SLOT(ClearEPress()));
}

Calc::~Calc()
{
	delete ui;
}

void Calc::DigitPress()
{
	QPushButton *button=(QPushButton*)sender();

	double currNum;
	QString newNum;
	
	currNum = (ui->Rez_label->text() + button->text()).toDouble();

	if (ui->Rez_label->text() == "0" && button->text().toDouble() == 0.0)
	{
		return;
	}
	if (NextOper)
	{
		ui->Rez_label->clear();
		NextOper = false;
	}

	newNum = QString::number(currNum, 'g',15);

	ui->Rez_label->setText(ui->Rez_label->text() + QString::number(button->text().toDouble()));
}

void Calc::SqrtOpPress()
{
	QPushButton *button = (QPushButton*)sender();
	QString Op = button->text();
	double oper = ui->Rez_label->text().toDouble();
	double rez = 0.0;
	QString toshow;
		if (oper < 0.0)
		{
			InvalidOp();
			return;
		}
	rez = std::sqrt(oper);
	toshow = QString::number(rez, 'g', 15);
	ui->Rez_label->setText(toshow);
	NextOper = true;

}
void Calc::SqrOpPress() 
{
	QPushButton *button = (QPushButton*)sender();
	QString Op = button->text();
	double oper = ui->Rez_label->text().toDouble();
	double rez = 0.0;
	QString toshow;
	rez = oper*oper;
	toshow = QString::number(rez, 'g', 15);
	ui->Rez_label->setText(toshow);
	NextOper = true;

}
void Calc::AddOpPress()
{
	QPushButton *button = (QPushButton*)sender();
	QString Op = button->text();
	double oper = ui->Rez_label->text().toDouble();

	if (!NextMultOper.isEmpty()) {
		if (!calculation(oper, NextMultOper)) {
			InvalidOp();
			return;
		}
		ui->Rez_label->setText(QString::number(CurrOp));
		oper = CurrOp;
		CurrOp = 0.0;
		NextMultOper.clear();
	}

	if (!NextAddOper.isEmpty())
	{
		if (!calculation(oper, NextAddOper)) {
			InvalidOp();
			return;
		}
		ui->Rez_label->setText(QString::number(CurrRez));
	}
	else
	{
		CurrRez = oper;
	}
	NextAddOper = Op;
	NextOper = true;
}
void Calc::MultOpPress() {

	QPushButton *button = (QPushButton*)sender();
	QString Op = button->text();
	double oper = ui->Rez_label->text().toDouble();

	if (!NextMultOper.isEmpty()) {
		if (!calculation(oper, NextMultOper)) {
			InvalidOp();
			return;
		}
		ui->Rez_label->setText(QString::number(CurrOp));
	}
	else {
		CurrOp = oper;
	}

	NextMultOper = Op;
	NextOper = true;

}
void Calc::EqPress() {

	double oper = ui->Rez_label->text().toDouble();

	if (!NextMultOper.isEmpty()) {
		if (!calculation(oper, NextMultOper)) {
			InvalidOp();
			return;
		}
		oper = CurrOp;
		CurrOp = 0.0;
		NextMultOper.clear();
	}
	if (!NextAddOper.isEmpty()) {
		if (!calculation(oper, NextAddOper)) {
			InvalidOp();
			return;
		}
		NextAddOper.clear();
	}
	else {
		CurrRez = oper;
	}
	ui->Rez_label->setText(QString::number(CurrRez));
	CurrRez = 0.0;
	NextOper = true;

}
void Calc::DeciPress() {}
void Calc::SgnPress() {}
void Calc::BackspacePress() {}
void Calc::ClearPress() {}
void Calc::ClearEPress() {}
bool Calc::calculation(double firstOP, QString oper)
{
	if (oper == "+")
	{
		CurrRez += firstOP;
	}
	else if (oper == "-")
	{
		CurrRez -= firstOP;
	}
	else if (oper == "?")
	{
		CurrRez = CurrRez*firstOP;
	}
	else if (oper == "?")
	{
		if (firstOP == 0.0)
			return false;
			CurrRez = CurrRez/firstOP;
	}
	return true;
}
void Calc::InvalidOp() 
{
	ui->Rez_label->setText("Error");
}

