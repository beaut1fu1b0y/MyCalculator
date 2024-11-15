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
    ui->displayEdit->setText("");
    this->current_ans = 0;
    this->current_num = 0;
    this->calStr = "";
    this->lastop = '+';
}

void CalculatorWindow::inputNumber(int c) {
    this->current_num = this->current_num * 10 + c;
    displayadd(char(c + '0'));  // 将数字转换为字符并显示
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

void CalculatorWindow::displayadd(char c){
    this->calStr = ui->displayEdit->toPlainText() += c;
    ui->displayEdit->setText(calStr);
}

void CalculatorWindow::displayNumber(int number) {
    ui->displayEdit->setText(QString::number(number));
}

// Slot functions for digit buttons //lcycoding
void CalculatorWindow::on_numButton_0_clicked() { this->displayadd('0'); }  //这段代码看似很烂但其实易读性拉满了
void CalculatorWindow::on_numButton_1_clicked() { this->displayadd('1'); }
void CalculatorWindow::on_numButton_2_clicked() { this->displayadd('2'); }
void CalculatorWindow::on_numButton_3_clicked() { this->displayadd('3'); }
void CalculatorWindow::on_numButton_4_clicked() { this->displayadd('4'); }
void CalculatorWindow::on_numButton_5_clicked() { this->displayadd('5'); }
void CalculatorWindow::on_numButton_6_clicked() { this->displayadd('6'); }
void CalculatorWindow::on_numButton_7_clicked() { this->displayadd('7'); }
void CalculatorWindow::on_numButton_8_clicked() { this->displayadd('8'); }
void CalculatorWindow::on_numButton_9_clicked() { this->displayadd('9'); }

// Slot functions for operator buttons
void CalculatorWindow::on_plusButton_clicked() { this->displayadd('+'); }
void CalculatorWindow::on_subButton_clicked() { this->displayadd('-'); }
void CalculatorWindow::on_mulButton_clicked() { this->displayadd('*'); }
void CalculatorWindow::on_divButton_clicked() { this->displayadd('/'); }

void CalculatorWindow::on_acButton_clicked() {
    this->clearEdit();
}

void CalculatorWindow::on_eqlButton_clicked()
{
    this->calStr = ui->displayEdit->toPlainText();
    this->strRec(this->calStr);
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
    this->current_num = 0;
    this->current_ans = 1;
    this->lastop = '*';
}


void CalculatorWindow::strRec(QString str) {    //这段代码看似很烂但其实易读性拉满了
    for (int i = 0; i < str.size(); i++) {
        if (str.at(i) == '0') { this->inputNumber(0); }
        else if (str.at(i) == '1') { this->inputNumber(1); }
        else if (str.at(i) == '2') { this->inputNumber(2); }
        else if (str.at(i) == '3') { this->inputNumber(3); }
        else if (str.at(i) == '4') { this->inputNumber(4); }
        else if (str.at(i) == '5') { this->inputNumber(5); }
        else if (str.at(i) == '6') { this->inputNumber(6); }
        else if (str.at(i) == '7') { this->inputNumber(7); }
        else if (str.at(i) == '8') { this->inputNumber(8); }
        else if (str.at(i) == '9') { this->inputNumber(9); }
        else if (str.at(i) == '+') { this->inputOperator('+');}
        else if (str.at(i) == '-') { this->inputOperator('-');}
        else if (str.at(i) == '*') { this->inputOperator('*');}
        else if (str.at(i) == '/') {
            if(str.at(i+1) == 0){
                ui->displayEdit->setText("Error");  // 显示错误信息
                this->clearEdit();
                return;
            }
            else this->inputOperator('/');
        }
    }
}

