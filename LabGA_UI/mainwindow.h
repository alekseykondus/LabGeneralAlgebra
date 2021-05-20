#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Calculator.h"
#include "euler_carmichael.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_plus_clicked();

    void on_minus_clicked();

    void on_multiplication_clicked();

    void on_moduloDivision_clicked();

    void on_getModul_a_clicked();

    void on_getModul_b_clicked();

    void on_getInverse_a_clicked();

    void on_getInverse_b_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_euler_button_clicked();

    void on_karmikle_button_clicked();

    void on_pushButton_EC_sum_clicked();

    void on_pushButton_EC_inverse1_clicked();

    void on_pushButton_EC_inverse_2_clicked();

private:
    Ui::MainWindow *ui;
    LongArithmetic::Calculator m_Calculator;
    Euler_Carmichael m_Euler;
};
#endif // MAINWINDOW_H
