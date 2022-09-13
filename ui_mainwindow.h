/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *label;
    QPushButton *startstopButton;
    QPushButton *downloadButton;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *saveButton;
    QCustomPlot *widget;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/title_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(69, 83, 100);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 180, 111, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 italic 16pt Roboto Medium;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 110, 151, 20));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 italic 16pt Roboto Medium;"));
        startstopButton = new QPushButton(centralwidget);
        startstopButton->setObjectName(QString::fromUtf8("startstopButton"));
        startstopButton->setGeometry(QRect(10, 30, 191, 51));
        startstopButton->setStyleSheet(QString::fromUtf8(""));
        downloadButton = new QPushButton(centralwidget);
        downloadButton->setObjectName(QString::fromUtf8("downloadButton"));
        downloadButton->setGeometry(QRect(10, 400, 201, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 200, 61, 20));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 italic 8pt Roboto Medium;"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 130, 61, 20));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 700 italic 8pt Roboto Medium;"));
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(10, 460, 201, 41));
        saveButton->setStyleSheet(QString::fromUtf8(""));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(230, 80, 561, 471));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(90, 130, 91, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto 7")});
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        textEdit->setFont(font);
        textEdit->setStyleSheet(QString::fromUtf8("font: 700 italic 16pt Roboto Medium;\n"
"color: rgb(255, 255, 255);"));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(90, 200, 91, 41));
        textEdit_2->setFont(font);
        textEdit_2->setStyleSheet(QString::fromUtf8("font: 700 italic 16pt Roboto Medium;\n"
"color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 130, 41, 24));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 200, 41, 24));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\220\320\274\320\277\320\273\320\270\321\202\321\203\320\264\320\260", nullptr));
        startstopButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\242\320\220\320\240\320\242", nullptr));
        downloadButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "1-100", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "100-10000", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Roboto 7'; font-size:16pt; font-weight:700; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">100</p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Roboto 7'; font-size:16pt; font-weight:700; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">100</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "V", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "V", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
