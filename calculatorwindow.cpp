#include "calculatorwindow.h"
#include "./ui_calculatorwindow.h"

/*
 *
 * private:
 *  int number_1, number_2;
 *  char op;
 *  int status; // status = 0, input the first number, otherwise input the second number
 *
*/

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
    this->number_1 = 0;
    this->number_2 = 0;
    this->status = 0;
    ui->displayEdit->setText("0");
}

void CalculatorWindow::inputNumber(int c) {
    if(this->status == 0) {
        this->number_1 = this->number_1 * 10 + c;
        this->displayNumber(this->number_1);
    }
    else {
        this->number_2 = this->number_2 * 10 + c;
        this->displayNumber(this->number_2);
    }
}

void CalculatorWindow::displayNumber(int number) {
    ui->displayEdit->setText(QString::number(number));
}

void CalculatorWindow::inputOperator(char op) {
    if (this->status == 0) {
        this->status = 1;
        this->op = op;
    } else {
        this->calculate();
        this->op = op;
    }
}

void CalculatorWindow::calculate() {
    int result = 0;
    if(this->op == '+') {
        result = this->number_1 + this->number_2;
    }
    else if(this->op == '-') {
        result = this->number_1 - this->number_2;
    }
    else if(this->op == '*') {
        result = this->number_1 * this->number_2;
    }
    else if(this->op == '/') {
        if (this->number_2 != 0) {
            result = this->number_1 / this->number_2;
        } else {
            ui->displayEdit->setText("Error");
            this->clearEdit();
            return;
        }
    }
    this->displayNumber(result);
    this->number_1 = result;
    this->number_2 = 0;
    this->status = 1;
}

// Slot functions for digit buttons
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
    int result = 0;

    // 根据当前操作符执行相应的计算
    if(this->op == '+') {
        result = this->number_1 + this->number_2;
    }
    else if(this->op == '-') {
        result = this->number_1 - this->number_2;
    }
    else if(this->op == '*') {
        result = this->number_1 * this->number_2;
    }
    else if(this->op == '/') {
        if (this->number_2 != 0) {
            result = this->number_1 / this->number_2;
        } else {
            ui->displayEdit->setText("Error");
            this->clearEdit();  // 清除错误信息后的数据
            return;  // 直接返回，避免继续执行后续代码
        }
    }

    // 显示计算结果
    this->displayNumber(result);

}


