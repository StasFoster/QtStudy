#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "second.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWidget;
}
QT_END_NAMESPACE

class MainWidget : public QWidget
{
    Q_OBJECT
    Second *win;

public:
    MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

private slots:
    void on_pushButton_clicked();
    void getText(QString text);
    void press_Note();

private:
    Ui::MainWidget *ui;
};
#endif // MAINWIDGET_H
