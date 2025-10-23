/********************************************************************************
** Form generated from reading UI file 'second.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECOND_H
#define UI_SECOND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Second
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser_2;
    QTextEdit *textEdit_3;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Second)
    {
        if (Second->objectName().isEmpty())
            Second->setObjectName("Second");
        Second->resize(800, 600);
        centralwidget = new QWidget(Second);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(13, 14, 771, 381));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(630, 500, 151, 41));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 400, 221, 71));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser_2 = new QTextBrowser(gridLayoutWidget);
        textBrowser_2->setObjectName("textBrowser_2");

        gridLayout->addWidget(textBrowser_2, 2, 0, 1, 1);

        textEdit_3 = new QTextEdit(gridLayoutWidget);
        textEdit_3->setObjectName("textEdit_3");

        gridLayout->addWidget(textEdit_3, 2, 1, 1, 1);

        textBrowser = new QTextBrowser(gridLayoutWidget);
        textBrowser->setObjectName("textBrowser");

        gridLayout->addWidget(textBrowser, 3, 0, 1, 1);

        textEdit_2 = new QTextEdit(gridLayoutWidget);
        textEdit_2->setObjectName("textEdit_2");

        gridLayout->addWidget(textEdit_2, 3, 1, 1, 1);

        Second->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Second);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Second->setMenuBar(menubar);
        statusbar = new QStatusBar(Second);
        statusbar->setObjectName("statusbar");
        Second->setStatusBar(statusbar);

        retranslateUi(Second);

        QMetaObject::connectSlotsByName(Second);
    } // setupUi

    void retranslateUi(QMainWindow *Second)
    {
        Second->setWindowTitle(QCoreApplication::translate("Second", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Second", "PushButton", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("Second", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">\320\241\321\202\321\200\320\276\320\272\320\260</span></p></body></html>", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Second", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">\320\241\321\202\320\276\320\273\320\261\320\265\321\206</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Second: public Ui_Second {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECOND_H
