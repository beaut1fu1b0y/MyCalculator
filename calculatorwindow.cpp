#include "calculatorwindow.h"
#include "./ui_calculatorwindow.h"

CalculatorWindow::CalculatorWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CalculatorWindow)
{
    ui->setupUi(this);
    this->clearEdit();
}

CalculatorWindow::~CalculatorWindow()
{
    delete ui;
}

void CalculatorWindow::clearEdit() {
    ui->displayEdit->setText("0");
    this->current_ans = 0;
    this->current_num = 0;
    this->calStr = "";
    this->lastop = '+';
}

void CalculatorWindow::inputNumber(int c) {
    this->current_num = this->current_num * 10 + c;
    displayadd(char(c + '0'));  // 将数字转换为字符并显示
}

void CalculatorWindow::displayadd(char c){
    this->calStr += c;
    ui->displayEdit->setText(calStr);
}

void CalculatorWindow::displayNumber(int number) {
    ui->displayEdit->setText(QString::number(number));
}

void CalculatorWindow::inputOperator(char op) {
    this->displayadd(op);

    if (this->lastop == '+') {
        this->current_ans += this->current_num;
    } else if (this->lastop == '-') {
        this->current_ans -= this->current_num;
    } else if (this->lastop == '*') {
        this->current_ans *= this->current_num;
    } else if (this->lastop == '/') {
        if (this->current_num != 0) {
            this->current_ans /= this->current_num;
        } else {
            ui->displayEdit->setText("Error");  // 显示错误信息
            this->clearEdit();
            return;
        }
    }

    this->lastop = op;
    this->current_num = 0;
}

// Slot functions for digit buttons //lcycoding
void CalculatorWindow::on_numButton_0_clicked() { this->inputNumber(0); }
void CalculatorWindow::on_numButton_1_clicked() { this->inputNumber(1); }
void CalculatorWindow::on_numButton_2_clicked() { this->inputNumber(2); }
void CalculatorWindow::on_numButton_3_clicked() { this->inputNumber(3); }
void CalculatorWindow::on_numButton_4_clicked() { this->inputNumber(4); }
void CalculatorWindow::on_numButton_5_clicked() { this->inputNumber(5); }
void CalculatorWindow::on_numButton_6_clicked() { this->inputNumber(6); }
void CalculatorWindow::on_numButton_7_clicked() { this->inputNumber(7); }
void CalculatorWindow::on_numButton_8_clicked() { this->inputNumber(8); }
void CalculatorWindow::on_numButton_9_clicked() { this->inputNumber(9); }

// Slot functions for operator buttons
void CalculatorWindow::on_plusButton_clicked() { this->inputOperator('+'); }
void CalculatorWindow::on_subButton_clicked() { this->inputOperator('-'); }
void CalculatorWindow::on_mulButton_clicked() { this->inputOperator('*'); }
void CalculatorWindow::on_divButton_clicked() { this->inputOperator('/'); }

void CalculatorWindow::on_acButton_clicked() {
    this->clearEdit();
}

void CalculatorWindow::on_eqlButton_clicked()
{
    if (this->lastop == '+') {
        this->current_ans += this->current_num;
    } else if (this->lastop == '-') {
        this->current_ans -= this->current_num;
    } else if (this->lastop == '*') {
        this->current_ans *= this->current_num;
    } else if (this->lastop == '/') {
        if (this->current_num != 0) {
            this->current_ans /= this->current_num;
        } else {
            ui->displayEdit->setText("Error");  // 显示错误信息
            this->clearEdit();
            return;
        }
    }

    this->displayNumber(current_ans);
    this->calStr = QString::number(current_ans);
    this->current_num = current_ans;
    this->current_ans = 1;
    this->lastop = '*';
}
