#include "mainwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidget w;
    //QWidget::connect(win, &Second::saveText,&w, &MainWidget::getText);
    w.show();
    return a.exec();
}
