#include "calculatorwindow.h"//lcycoding

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculatorWindow w;
    w.show();
    return a.exec();
}
