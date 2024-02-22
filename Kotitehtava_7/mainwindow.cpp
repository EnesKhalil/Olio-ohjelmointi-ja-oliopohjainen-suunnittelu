#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myTimerObject1 = new QTimer(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete myTimerObject1;
    myTimerObject1 = nullptr;
}
void MainWindow::my_timeout()
{
    if(currentPlayer == 1 && player1Time > 0){
        player1Time--;
        if(gameTime == 120){
            p1_120 = p1_120 - 0.83;
            on_player1_progressBar_valueChanged(p1_120);
        }
        else if (gameTime == 300){
            p1_300 = p1_300 - 0.33;
            on_player1_progressBar_valueChanged(p1_300);
        }
    }
    else if (currentPlayer == 2 && player2Time > 0){
        player2Time--;
        if(gameTime == 120){
            p2_120 = p2_120 - 0.83;
            on_palyer2_progressBar_valueChanged(p2_120);
        }
        else if (gameTime == 300){
            p2_300 = p2_300 - 0.33;
            on_palyer2_progressBar_valueChanged(p2_300);
        }
    }
    if(player1Time == 0){
        setGameInfoText("Player 2 WON!! Press stop game button", 22);
    }
    else if(player2Time == 0){
        setGameInfoText("Player 1 WON!! Press stop game button", 22);
    }
}

void MainWindow::on_palyer1_Btn_clicked()
{
    currentPlayer = 2;
}


void MainWindow::on_player2_Btn_clicked()
{
    currentPlayer = 1;
}


void MainWindow::on_sec150_Btn_clicked()
{
    gameTime = 120;
    player1Time = 120;
    player2Time = 120;
    setGameInfoText("Ready to play playtime 120 sec..Press start button", 12);
    ui->player1_progressBar->setValue(100);
    ui->player2_progressBar->setValue(100);
}


void MainWindow::on_min5_Btn_clicked()
{
    gameTime = 300;
    player1Time = 300;
    player2Time = 300;
    setGameInfoText("Ready to play playtime 5 min..Press start button", 12);
    ui->player1_progressBar->setValue(100);
    ui->player2_progressBar->setValue(100);
}


void MainWindow::on_startGame_Btn_clicked()
{
    connect(myTimerObject1, SIGNAL (timeout()), this, SLOT (my_timeout()));
    myTimerObject1->setInterval(1000);
    myTimerObject1->start();
    currentPlayer = 1;
    setGameInfoText("Game ongoing", 24);
    p1_120 = 100.00;
    p1_300 = 100.00;
    p2_120 = 100.00;
    p2_300 = 100.00;
}


void MainWindow::on_stopGame_Btn_clicked()
{
    ui->player1_progressBar->setValue(0);
    ui->player2_progressBar->setValue(0);
    myTimerObject1->stop();
    myTimerObject1->disconnect();
    setGameInfoText("New game? Select playtime and then start button", 14);
}


void MainWindow::on_player1_progressBar_valueChanged(int value)
{
    ui->player1_progressBar->setValue(value);
}


void MainWindow::on_palyer2_progressBar_valueChanged(int value)
{
    ui->player2_progressBar->setValue(value);
}

void MainWindow::setGameInfoText(QString text, short fontZize)
{
   ui->showing_label->setText(text);

   QFont font;
   font.setPointSize(fontZize);
   ui->showing_label->setFont(font);

}

