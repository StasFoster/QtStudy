#ifndef SECOND_H
#define SECOND_H

#include <QMainWindow>

namespace Ui {
class Second;
}

class Second : public QMainWindow
{
    Q_OBJECT
    QString data;

public:
    explicit Second(QWidget *parent = nullptr);
    ~Second();

private slots:
    void on_pushButton_clicked();

signals:
    void saveText(QString text);

private:
    Ui::Second *ui;
};

#endif // SECOND_H
