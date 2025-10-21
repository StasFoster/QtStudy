#include "second.h"
#include "ui_second.h"

Second::Second(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Second)
{
    ui->setupUi(this);
}

Second::~Second()
{
    delete ui;
}

void Second::on_pushButton_clicked()
{
    data = ui->textEdit->toPlainText();
    emit saveText(data);
    delete this;
}

