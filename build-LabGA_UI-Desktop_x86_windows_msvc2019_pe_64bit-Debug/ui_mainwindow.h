/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *Number_modul;
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
    QWidget *tab_5;
    QWidget *tab_6;
    QWidget *tab_7;
    QWidget *tab_9;
    QWidget *tab_10;
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
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        Number_modul = new QLineEdit(centralwidget);
        Number_modul->setObjectName(QString::fromUtf8("Number_modul"));

        gridLayout->addWidget(Number_modul, 1, 1, 1, 1);

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
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        tabWidget->addTab(tab_7, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        tabWidget->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QString::fromUtf8("tab_10"));
        tabWidget->addTab(tab_10, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        tabWidget->addTab(tab_8, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Modul", nullptr));
        Number_modul->setText(QCoreApplication::translate("MainWindow", "487", nullptr));
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
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QCoreApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\270\321\206\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
