/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLineEdit *Number_modul;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QLineEdit *result;
    QGridLayout *gridLayout_3;
    QPushButton *moduloDivision;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *plus;
    QPushButton *multiplication;
    QPushButton *minus;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QPushButton *getInverse_a;
    QLineEdit *Number_a;
    QLabel *label_2;
    QPushButton *getModul_b;
    QLineEdit *Number_b;
    QPushButton *getInverse_b;
    QPushButton *getModul_a;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLineEdit *result_2;
    QLabel *label_6;
    QWidget *tab_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *result_x;
    QLineEdit *result_y;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *pushButton_2;
    QWidget *tab_4;
    QLineEdit *euler_number;
    QPushButton *euler_button;
    QPushButton *karmikle_button;
    QLineEdit *euler_result;
    QLabel *label_15;
    QWidget *tab_5;
    QLineEdit *lineEdit__EC_res;
    QLabel *label_22;
    QPushButton *pushButton_EC_sum;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_5;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *lineEdit_EC_y1;
    QLineEdit *lineEdit_EC_x1;
    QLabel *label_16;
    QLineEdit *lineEdit_EC_B;
    QLineEdit *lineEdit_EC_x2;
    QLineEdit *lineEdit_EC_A;
    QLineEdit *lineEdit_EC_y2;
    QLabel *label_21;
    QLabel *label_17;
    QLabel *label_20;
    QPushButton *pushButton_EC_inverse1;
    QPushButton *pushButton_EC_inverse_2;
    QWidget *tab_6;
    QLabel *label_23;
    QPushButton *pushButton_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *tab_7;
    QLabel *label_24;
    QLineEdit *resultM;
    QLineEdit *Number_aM;
    QLineEdit *Number_bM;
    QPushButton *montMult;
    QPushButton *montPow;
    QWidget *tab_9;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLineEdit *DLog1;
    QLineEdit *DLog2;
    QLineEdit *DLog_res;
    QPushButton *DLog_calc;
    QWidget *tab_10;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_7;
    QHBoxLayout *factorization_buttons;
    QPushButton *factorization_naive;
    QPushButton *factorization_pollard;
    QPushButton *factorization_all;
    QLineEdit *factorization_input;
    QLabel *factorization_input_label;
    QLabel *factorization_result_label;
    QTextEdit *factorization_result;
    QWidget *tab_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Number_modul = new QLineEdit(centralwidget);
        Number_modul->setObjectName(QString::fromUtf8("Number_modul"));

        gridLayout->addWidget(Number_modul, 2, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        result = new QLineEdit(tab);
        result->setObjectName(QString::fromUtf8("result"));

        gridLayout_4->addWidget(result, 3, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        moduloDivision = new QPushButton(tab);
        moduloDivision->setObjectName(QString::fromUtf8("moduloDivision"));

        gridLayout_3->addWidget(moduloDivision, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        plus = new QPushButton(tab);
        plus->setObjectName(QString::fromUtf8("plus"));

        gridLayout_3->addWidget(plus, 0, 1, 1, 1);

        multiplication = new QPushButton(tab);
        multiplication->setObjectName(QString::fromUtf8("multiplication"));

        gridLayout_3->addWidget(multiplication, 0, 2, 1, 1);

        minus = new QPushButton(tab);
        minus->setObjectName(QString::fromUtf8("minus"));

        gridLayout_3->addWidget(minus, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 2, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        getInverse_a = new QPushButton(tab);
        getInverse_a->setObjectName(QString::fromUtf8("getInverse_a"));

        gridLayout_2->addWidget(getInverse_a, 0, 3, 1, 1);

        Number_a = new QLineEdit(tab);
        Number_a->setObjectName(QString::fromUtf8("Number_a"));

        gridLayout_2->addWidget(Number_a, 0, 1, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        getModul_b = new QPushButton(tab);
        getModul_b->setObjectName(QString::fromUtf8("getModul_b"));

        gridLayout_2->addWidget(getModul_b, 1, 2, 1, 1);

        Number_b = new QLineEdit(tab);
        Number_b->setObjectName(QString::fromUtf8("Number_b"));

        gridLayout_2->addWidget(Number_b, 1, 1, 1, 1);

        getInverse_b = new QPushButton(tab);
        getInverse_b->setObjectName(QString::fromUtf8("getInverse_b"));

        gridLayout_2->addWidget(getInverse_b, 1, 3, 1, 1);

        getModul_a = new QPushButton(tab);
        getModul_a->setObjectName(QString::fromUtf8("getModul_a"));

        gridLayout_2->addWidget(getModul_a, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 1, 0, 1, 2);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 4, 0, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 60, 111, 20));
        lineEdit = new QLineEdit(tab_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 60, 601, 22));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(660, 110, 93, 28));
        result_2 = new QLineEdit(tab_2);
        result_2->setObjectName(QString::fromUtf8("result_2"));
        result_2->setGeometry(QRect(110, 410, 641, 22));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 410, 55, 16));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 30, 55, 16));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(50, 120, 55, 16));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(390, 30, 55, 16));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(390, 100, 55, 16));
        lineEdit_2 = new QLineEdit(tab_3);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 30, 113, 22));
        lineEdit_3 = new QLineEdit(tab_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 120, 113, 22));
        lineEdit_4 = new QLineEdit(tab_3);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(470, 30, 113, 22));
        lineEdit_5 = new QLineEdit(tab_3);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(470, 100, 113, 22));
        lineEdit_6 = new QLineEdit(tab_3);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(150, 220, 113, 22));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(50, 220, 91, 16));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 390, 55, 16));
        result_x = new QLineEdit(tab_3);
        result_x->setObjectName(QString::fromUtf8("result_x"));
        result_x->setGeometry(QRect(200, 380, 113, 22));
        result_y = new QLineEdit(tab_3);
        result_y->setObjectName(QString::fromUtf8("result_y"));
        result_y->setGeometry(QRect(200, 410, 113, 22));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(110, 380, 55, 16));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(110, 410, 55, 16));
        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(480, 210, 93, 28));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        euler_number = new QLineEdit(tab_4);
        euler_number->setObjectName(QString::fromUtf8("euler_number"));
        euler_number->setGeometry(QRect(150, 80, 113, 22));
        euler_button = new QPushButton(tab_4);
        euler_button->setObjectName(QString::fromUtf8("euler_button"));
        euler_button->setGeometry(QRect(50, 240, 93, 28));
        karmikle_button = new QPushButton(tab_4);
        karmikle_button->setObjectName(QString::fromUtf8("karmikle_button"));
        karmikle_button->setGeometry(QRect(270, 240, 93, 28));
        euler_result = new QLineEdit(tab_4);
        euler_result->setObjectName(QString::fromUtf8("euler_result"));
        euler_result->setGeometry(QRect(190, 350, 113, 22));
        label_15 = new QLabel(tab_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(90, 350, 55, 16));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        lineEdit__EC_res = new QLineEdit(tab_5);
        lineEdit__EC_res->setObjectName(QString::fromUtf8("lineEdit__EC_res"));
        lineEdit__EC_res->setGeometry(QRect(150, 260, 511, 22));
        label_22 = new QLabel(tab_5);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(80, 260, 55, 16));
        pushButton_EC_sum = new QPushButton(tab_5);
        pushButton_EC_sum->setObjectName(QString::fromUtf8("pushButton_EC_sum"));
        pushButton_EC_sum->setGeometry(QRect(60, 200, 701, 28));
        layoutWidget = new QWidget(tab_5);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 20, 709, 163));
        gridLayout_5 = new QGridLayout(layoutWidget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_5->addWidget(label_18, 2, 0, 1, 1);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_5->addWidget(label_19, 2, 1, 1, 1);

        lineEdit_EC_y1 = new QLineEdit(layoutWidget);
        lineEdit_EC_y1->setObjectName(QString::fromUtf8("lineEdit_EC_y1"));

        gridLayout_5->addWidget(lineEdit_EC_y1, 3, 1, 1, 1);

        lineEdit_EC_x1 = new QLineEdit(layoutWidget);
        lineEdit_EC_x1->setObjectName(QString::fromUtf8("lineEdit_EC_x1"));
        lineEdit_EC_x1->setMinimumSize(QSize(300, 0));

        gridLayout_5->addWidget(lineEdit_EC_x1, 3, 0, 1, 1);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_5->addWidget(label_16, 0, 0, 1, 1);

        lineEdit_EC_B = new QLineEdit(layoutWidget);
        lineEdit_EC_B->setObjectName(QString::fromUtf8("lineEdit_EC_B"));
        lineEdit_EC_B->setMinimumSize(QSize(300, 0));

        gridLayout_5->addWidget(lineEdit_EC_B, 1, 1, 1, 1);

        lineEdit_EC_x2 = new QLineEdit(layoutWidget);
        lineEdit_EC_x2->setObjectName(QString::fromUtf8("lineEdit_EC_x2"));
        lineEdit_EC_x2->setMinimumSize(QSize(300, 0));

        gridLayout_5->addWidget(lineEdit_EC_x2, 5, 0, 1, 1);

        lineEdit_EC_A = new QLineEdit(layoutWidget);
        lineEdit_EC_A->setObjectName(QString::fromUtf8("lineEdit_EC_A"));
        lineEdit_EC_A->setMinimumSize(QSize(300, 0));

        gridLayout_5->addWidget(lineEdit_EC_A, 1, 0, 1, 1);

        lineEdit_EC_y2 = new QLineEdit(layoutWidget);
        lineEdit_EC_y2->setObjectName(QString::fromUtf8("lineEdit_EC_y2"));

        gridLayout_5->addWidget(lineEdit_EC_y2, 5, 1, 1, 1);

        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_5->addWidget(label_21, 4, 1, 1, 1);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_5->addWidget(label_17, 0, 1, 1, 1);

        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_5->addWidget(label_20, 4, 0, 1, 1);

        pushButton_EC_inverse1 = new QPushButton(layoutWidget);
        pushButton_EC_inverse1->setObjectName(QString::fromUtf8("pushButton_EC_inverse1"));

        gridLayout_5->addWidget(pushButton_EC_inverse1, 3, 2, 1, 1);

        pushButton_EC_inverse_2 = new QPushButton(layoutWidget);
        pushButton_EC_inverse_2->setObjectName(QString::fromUtf8("pushButton_EC_inverse_2"));

        gridLayout_5->addWidget(pushButton_EC_inverse_2, 5, 2, 1, 1);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        label_23 = new QLabel(tab_6);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(9, 95, 758, 370));
        pushButton_3 = new QPushButton(tab_6);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(340, 90, 177, 28));
        gridLayoutWidget = new QWidget(tab_6);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(130, 70, 160, 80));
        gridLayout_6 = new QGridLayout(gridLayoutWidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(gridLayoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout_6->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(gridLayoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout_6->addWidget(radioButton_2, 1, 0, 1, 1);

        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        label_24 = new QLabel(tab_7);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(20, 440, 55, 16));
        resultM = new QLineEdit(tab_7);
        resultM->setObjectName(QString::fromUtf8("resultM"));
        resultM->setGeometry(QRect(80, 440, 671, 22));
        Number_aM = new QLineEdit(tab_7);
        Number_aM->setObjectName(QString::fromUtf8("Number_aM"));
        Number_aM->setGeometry(QRect(210, 90, 341, 22));
        Number_bM = new QLineEdit(tab_7);
        Number_bM->setObjectName(QString::fromUtf8("Number_bM"));
        Number_bM->setGeometry(QRect(210, 190, 341, 22));
        montMult = new QPushButton(tab_7);
        montMult->setObjectName(QString::fromUtf8("montMult"));
        montMult->setGeometry(QRect(330, 120, 93, 28));
        montPow = new QPushButton(tab_7);
        montPow->setObjectName(QString::fromUtf8("montPow"));
        montPow->setGeometry(QRect(330, 150, 93, 28));
        tabWidget->addTab(tab_7, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        label_25 = new QLabel(tab_9);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(90, 70, 55, 16));
        label_26 = new QLabel(tab_9);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(90, 130, 55, 16));
        label_27 = new QLabel(tab_9);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(90, 350, 55, 16));
        DLog1 = new QLineEdit(tab_9);
        DLog1->setObjectName(QString::fromUtf8("DLog1"));
        DLog1->setGeometry(QRect(190, 60, 521, 22));
        DLog2 = new QLineEdit(tab_9);
        DLog2->setObjectName(QString::fromUtf8("DLog2"));
        DLog2->setGeometry(QRect(190, 130, 521, 22));
        DLog_res = new QLineEdit(tab_9);
        DLog_res->setObjectName(QString::fromUtf8("DLog_res"));
        DLog_res->setGeometry(QRect(190, 350, 511, 22));
        DLog_calc = new QPushButton(tab_9);
        DLog_calc->setObjectName(QString::fromUtf8("DLog_calc"));
        DLog_calc->setGeometry(QRect(340, 210, 171, 61));
        tabWidget->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        gridLayoutWidget_2 = new QWidget(tab_10);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(9, 9, 711, 451));
        gridLayout_7 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        factorization_buttons = new QHBoxLayout();
        factorization_buttons->setObjectName(QString::fromUtf8("factorization_buttons"));
        factorization_naive = new QPushButton(gridLayoutWidget_2);
        factorization_naive->setObjectName(QString::fromUtf8("factorization_naive"));

        factorization_buttons->addWidget(factorization_naive);

        factorization_pollard = new QPushButton(gridLayoutWidget_2);
        factorization_pollard->setObjectName(QString::fromUtf8("factorization_pollard"));

        factorization_buttons->addWidget(factorization_pollard);

        factorization_all = new QPushButton(gridLayoutWidget_2);
        factorization_all->setObjectName(QString::fromUtf8("factorization_all"));

        factorization_buttons->addWidget(factorization_all);


        gridLayout_7->addLayout(factorization_buttons, 2, 1, 1, 1);

        factorization_input = new QLineEdit(gridLayoutWidget_2);
        factorization_input->setObjectName(QString::fromUtf8("factorization_input"));

        gridLayout_7->addWidget(factorization_input, 0, 1, 1, 1);

        factorization_input_label = new QLabel(gridLayoutWidget_2);
        factorization_input_label->setObjectName(QString::fromUtf8("factorization_input_label"));

        gridLayout_7->addWidget(factorization_input_label, 0, 0, 1, 1);

        factorization_result_label = new QLabel(gridLayoutWidget_2);
        factorization_result_label->setObjectName(QString::fromUtf8("factorization_result_label"));

        gridLayout_7->addWidget(factorization_result_label, 3, 0, 1, 1);

        factorization_result = new QTextEdit(gridLayoutWidget_2);
        factorization_result->setObjectName(QString::fromUtf8("factorization_result"));

        gridLayout_7->addWidget(factorization_result, 3, 1, 1, 1);

        tabWidget->addTab(tab_10, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        tabWidget->addTab(tab_8, QString());

        gridLayout->addWidget(tabWidget, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(8);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Number_modul->setText(QCoreApplication::translate("MainWindow", "487", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Modul", nullptr));
        moduloDivision->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        multiplication->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "b = ", nullptr));
        getInverse_a->setText(QCoreApplication::translate("MainWindow", "Get Inverse of a", nullptr));
        Number_a->setInputMask(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "a = ", nullptr));
        getModul_b->setText(QCoreApplication::translate("MainWindow", "Get Modul b", nullptr));
        getInverse_b->setText(QCoreApplication::translate("MainWindow", "Get Inverse of b", nullptr));
        getModul_a->setText(QCoreApplication::translate("MainWindow", "Get Modul a", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\225\320\273\320\265\320\274\320\265\320\275\321\202 \320\263\321\200\321\203\320\277\320\270: ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\237\320\276\321\200\321\217\320\264\320\276\320\272 \320\265\320\273\320\265\320\274\320\265\320\275\321\202 \320\263\321\200\321\203\320\277\320\270", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "a", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "b", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\265\320\277\321\226\320\275\321\214", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\241\321\202\320\265\320\277\321\226\320\275\321\214 \321\202\320\276\321\207\320\272\320\270", nullptr));
        euler_button->setText(QCoreApplication::translate("MainWindow", "\320\225\320\271\320\273\320\265\321\200", nullptr));
        karmikle_button->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\321\200\320\274\320\260\320\271\320\272\320\273", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\320\225\320\271\320\273\320\265\321\200 \320\232\320\260\321\200\320\274\320\260\320\271\320\272\320\273", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        pushButton_EC_sum->setText(QCoreApplication::translate("MainWindow", "Sum", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "x1", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "y1", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "y2", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "x2", nullptr));
        pushButton_EC_inverse1->setText(QCoreApplication::translate("MainWindow", "Inverse", nullptr));
        pushButton_EC_inverse_2->setText(QCoreApplication::translate("MainWindow", "Inverse", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Elliptic Curve", nullptr));
        label_23->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\227\320\275\320\260\320\271\321\202\320\270 \320\262\321\201\321\226 \320\263\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200\320\270 \320\263\321\200\321\203\320\277\320\270", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200\320\270 \320\263\321\200\321\203\320\277\320\270", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        montMult->setText(QCoreApplication::translate("MainWindow", "Mult", nullptr));
        montPow->setText(QCoreApplication::translate("MainWindow", "Pow", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("MainWindow", "\320\234\320\276\320\275\321\202\320\263\320\276\320\274\320\265\321\200\321\226", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        DLog_calc->setText(QCoreApplication::translate("MainWindow", "Calculate", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QCoreApplication::translate("MainWindow", "Discret Logarythm", nullptr));
        factorization_naive->setText(QCoreApplication::translate("MainWindow", "Naive", nullptr));
        factorization_pollard->setText(QCoreApplication::translate("MainWindow", "Pollard", nullptr));
        factorization_all->setText(QCoreApplication::translate("MainWindow", "all", nullptr));
        factorization_input_label->setText(QCoreApplication::translate("MainWindow", "Input :", nullptr));
        factorization_result_label->setText(QCoreApplication::translate("MainWindow", "Result : ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QCoreApplication::translate("MainWindow", "Factorization", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
