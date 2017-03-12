#include "Calc.h"

Calc::Calc(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::CalcClass)
{
	ui->setupUi(this);

	//connect(ui->pushButton_0)
}

Calc::~Calc()
{
	//delete ui;
}

void Calc::DigitPress()
{}