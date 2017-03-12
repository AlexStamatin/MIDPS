#include "Calc.h"
#include <QtWidgets/QApplication>
#include <QDesktopWidget>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calc w;
    w.showMaximized();
    w.move(QApplication::desktop()->screen()->rect().center() - w.rect().center());
    w.show();
    return a.exec();
}
