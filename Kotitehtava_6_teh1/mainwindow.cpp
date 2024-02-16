#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_countButton_clicked()
{
    num++;
    ui->labelresult->setNum(num);
}


void MainWindow::on_resetButton_clicked()
{
    num = 0;
    ui->labelresult->setNum(num);
}

