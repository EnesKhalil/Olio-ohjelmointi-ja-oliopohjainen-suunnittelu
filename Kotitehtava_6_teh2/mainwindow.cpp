#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}


void MainWindow::on_N1_clicked()
{
    btnNum = "1";
    numberClickedHandler();
}


void MainWindow::on_N2_clicked()
{
    btnNum = "2";
    numberClickedHandler();
}


void MainWindow::on_N3_clicked()
{
    btnNum = "3";
    numberClickedHandler();
}

void MainWindow::on_N4_clicked()
{
    btnNum = "4";
    numberClickedHandler();
}


void MainWindow::on_N5_clicked()
{
    btnNum = "5";
    numberClickedHandler();
}


void MainWindow::on_N6_clicked()
{
    btnNum = "6";
    numberClickedHandler();
}


void MainWindow::on_N7_clicked()
{
    btnNum = "7";
    numberClickedHandler();
}


void MainWindow::on_N8_clicked()
{
    btnNum = "8";
    numberClickedHandler();
}


void MainWindow::on_N9_clicked()
{
    btnNum = "9";
    numberClickedHandler();
}


void MainWindow::on_N0_clicked()
{
    btnNum = "0";
    numberClickedHandler();
}


void MainWindow::on_Add_clicked()
{
    operand = 1;
}

void MainWindow::on_Sub_clicked()
{
    operand = 2;
}


void MainWindow::on_Mul_clicked()
{
    operand = 3;
}


void MainWindow::on_div_clicked()
{
    operand = 4;
}


void MainWindow::on_clear_clicked()
{
    state = 1;
    clearAndEnterClickHandler();
}

void MainWindow::on_enter_clicked()
{
    state = 2;
    clearAndEnterClickHandler();
}
//*****************************************

void MainWindow::numberClickedHandler()
{
    if(operand == 1 || operand == 2 || operand == 3 || operand == 4){
        number2 += btnNum;
        ui->num2_label->setText(number2);
    }
    else{
        number1 += btnNum;
        ui->num1_label->setText(number1);
    }
}
void MainWindow::clearAndEnterClickHandler()
{
    if(state == 1){
        ui->num2_label->clear();
        ui->num1_label->clear();
        ui->result_label->clear();
        number1.clear();
        number2.clear();
        result1_2 = 0.0;
        operand = 0;
    }
    else if(state == 2){
        float num_1 = number1.toFloat();
        float num_2 = number2.toFloat();
        if(operand == 1){
            result1_2 = num_1 + num_2;
            ui->result_label->setNum(result1_2);
        }
        else if(operand == 2){
            result1_2 = num_1 - num_2;
            ui->result_label->setNum(result1_2);
        }
        else if(operand == 3){
            result1_2 = num_1 * num_2;
            ui->result_label->setNum(result1_2);
        }
        else if(operand == 4){
            result1_2 = num_1 / num_2;
            ui->result_label->setNum(result1_2);
        }
    }

}
