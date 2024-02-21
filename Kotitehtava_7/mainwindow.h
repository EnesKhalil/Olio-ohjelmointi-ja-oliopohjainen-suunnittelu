#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
           void my_timeout();

private slots:
    void on_palyer1_Btn_clicked();

    void on_player2_Btn_clicked();

    void on_sec150_Btn_clicked();

    void on_min5_Btn_clicked();

    void on_startGame_Btn_clicked();

    void on_stopGame_Btn_clicked();

    void on_player1_progressBar_valueChanged(int value);

    void on_palyer2_progressBar_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    QTimer *myTimerObject1;
    int player1Time = 0, player2Time = 0, gameTime = 0, currentPlayer;
    float p1_120, p1_300, p2_120, p2_300;
};
#endif // MAINWINDOW_H
