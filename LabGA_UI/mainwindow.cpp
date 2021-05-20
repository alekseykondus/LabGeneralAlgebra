#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Number.h"
#include "Calculator.h"
#include "lab7/OrderOfElement.h"
#include "lab12/pointDegree.h"

#include <QString>
#include <QRegExpValidator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_Calculator(LongArithmetic::Number("487"))
{
    ui->setupUi(this);
    ui->Number_a->setValidator(new QRegExpValidator(QRegExp("[0-9]*"), ui->Number_a));
    ui->Number_b->setValidator(new QRegExpValidator(QRegExp("[0-9]*"), ui->Number_b));
    ui->Number_modul->setValidator(new QRegExpValidator(QRegExp("[0-9]*"), ui->Number_modul));
    ui->lineEdit->setValidator(new QRegExpValidator(QRegExp("[0-9]*"), ui->Number_modul));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_plus_clicked()
{
    LongArithmetic::Number a(ui->Number_a->text().toStdString());
    LongArithmetic::Number b(ui->Number_b->text().toStdString());
    LongArithmetic::Number modul(ui->Number_modul->text().toStdString());
    m_Calculator.SetModulus(modul);

    ui->result->setText(QString::fromStdString(m_Calculator.Plus(a, b).ToString()));
}

void MainWindow::on_minus_clicked()
{
    LongArithmetic::Number a(ui->Number_a->text().toStdString());
    LongArithmetic::Number b(ui->Number_b->text().toStdString());
    LongArithmetic::Number modul(ui->Number_modul->text().toStdString());
    m_Calculator.SetModulus(modul);

    ui->result->setText(QString::fromStdString(m_Calculator.Minus(a, b).ToString()));
}

void MainWindow::on_multiplication_clicked()
{
    LongArithmetic::Number a(ui->Number_a->text().toStdString());
    LongArithmetic::Number b(ui->Number_b->text().toStdString());
    LongArithmetic::Number modul(ui->Number_modul->text().toStdString());
    m_Calculator.SetModulus(modul);

    ui->result->setText(QString::fromStdString(m_Calculator.Multiplication(a, b).ToString()));
}

void MainWindow::on_moduloDivision_clicked()
{
    LongArithmetic::Number a(ui->Number_a->text().toStdString());
    LongArithmetic::Number b(ui->Number_b->text().toStdString());
    LongArithmetic::Number modul(ui->Number_modul->text().toStdString());
    m_Calculator.SetModulus(modul);

    ui->result->setText(QString::fromStdString(m_Calculator.ModuloDivision(a, b).ToString()));
}

void MainWindow::on_getModul_a_clicked()
{
    LongArithmetic::Number a(ui->Number_a->text().toStdString());
    LongArithmetic::Number modul(ui->Number_modul->text().toStdString());
    m_Calculator.SetModulus(modul);

    ui->result->setText(QString::fromStdString(m_Calculator.Modul(a).ToString()));
}

void MainWindow::on_getModul_b_clicked()
{
    LongArithmetic::Number b(ui->Number_b->text().toStdString());
    LongArithmetic::Number modul(ui->Number_modul->text().toStdString());
    m_Calculator.SetModulus(modul);

    ui->result->setText(QString::fromStdString(m_Calculator.Modul(b).ToString()));
}

void MainWindow::on_getInverse_a_clicked()
{
    LongArithmetic::Number a(ui->Number_a->text().toStdString());
    LongArithmetic::Number modul(ui->Number_modul->text().toStdString());
    m_Calculator.SetModulus(modul);

    LongArithmetic::Number inverse = m_Calculator.Inverse(a);
    ui->result->setText(QString::fromStdString(inverse==LongArithmetic::Number("0")?("The inverse does not exist "):inverse.ToString()));
}

void MainWindow::on_getInverse_b_clicked()
{
    LongArithmetic::Number b(ui->Number_b->text().toStdString());
    LongArithmetic::Number modul(ui->Number_modul->text().toStdString());
    m_Calculator.SetModulus(modul);

    ui->result->setText(QString::fromStdString(m_Calculator.Inverse(b).ToString()));
}

void MainWindow::on_pushButton_clicked()
{
    LongArithmetic::Number const a( ui->lineEdit->text().toStdString());
    LongArithmetic::Number const modul(ui->Number_modul->text().toStdString());
    ui->result_2->setText(QString::fromStdString(LongArithmetic::find(modul, a).ToString()));
}

void MainWindow::on_pushButton_2_clicked()
{
    LongArithmetic::Number x(ui->lineEdit_2->text().toStdString());
    LongArithmetic::Number y(ui->lineEdit_3->text().toStdString());
    LongArithmetic::Number a(ui->lineEdit_4->text().toStdString());
    LongArithmetic::Number b(ui->lineEdit_5->text().toStdString());
    LongArithmetic::Number step(ui->lineEdit_6->text().toStdString());
    LongArithmetic::Number modul(ui->Number_modul->text().toStdString());

    Point point(x, y);
    point = PointDegree::pointDegree(point, step, a, b, modul);
    ui->result_x->setText(QString::fromStdString(point.x().ToString()));
    ui->result_y->setText(QString::fromStdString(point.y().ToString()));
}

void MainWindow::on_euler_button_clicked()
{
    LongArithmetic::Number a(ui->euler_number->text().toStdString());
    LongArithmetic::Number modul(ui->Number_modul->text().toStdString());
    m_Euler.SetModul(modul);

    ui->euler_result->setText(QString::fromStdString(m_Euler.Euler_fuction(a).ToString()));
}

void MainWindow::on_karmikle_button_clicked()
{
    LongArithmetic::Number a(ui->euler_number->text().toStdString());
    LongArithmetic::Number modul(ui->Number_modul->text().toStdString());
    m_Calculator.SetModulus(modul);
    m_Euler.SetModul(modul);

    ui->euler_result->setText(QString::fromStdString(m_Euler.carmichael(a).ToString()));
}
