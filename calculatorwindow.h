#ifndef CALCULATORWINDOW_H
#define CALCULATORWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class CalculatorWindow;
}
QT_END_NAMESPACE

class CalculatorWindow : public QWidget
{
    Q_OBJECT

public:
    CalculatorWindow(QWidget *parent = nullptr);
    ~CalculatorWindow();

private slots:
    void on_numButton_0_clicked();
    void on_numButton_1_clicked();
    void on_numButton_2_clicked();
    void on_numButton_3_clicked();
    void on_numButton_4_clicked();
    void on_numButton_5_clicked();
    void on_numButton_6_clicked();
    void on_numButton_7_clicked();
    void on_numButton_8_clicked();
    void on_numButton_9_clicked();

    void on_plusButton_clicked();
    void on_subButton_clicked();
    void on_mulButton_clicked();
    void on_divButton_clicked();

    void on_acButton_clicked();
    void on_eqlButton_clicked();

private:
    Ui::CalculatorWindow *ui;

private:
    char op,lastop = '*';
    QString calStr = "";
    int current_num = 0,current_ans = 1;

private:
    void inputNumber(int c);
    void displayNumber(int number);
    void inputOperator(char op);
    void clearEdit();
    void calculate();
    void displayadd(char c);
};

#endif // CALCULATORWINDOW_H
