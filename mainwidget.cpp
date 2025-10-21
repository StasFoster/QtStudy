#include "mainwidget.h"
#include "ui_mainwidget.h"
#include "second.h"
#include <QLabel>
#include <QFrame>

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::on_pushButton_clicked()
{
    win = new Second();
    QWidget::connect(win, &Second::saveText,this, &MainWidget::getText);
    win->setMinimumWidth(400);
    win->setMinimumHeight(400);
    win -> show();
}

void MainWidget::getText(QString text){
    QFrame *box = new QFrame();
    box->setMinimumHeight(60);
    box->setMidLineWidth(60);
    box->setStyleSheet("background-color:green");
    QLabel *t = new QLabel(text, box);
    ui->Conteiner->addWidget(box);
}

