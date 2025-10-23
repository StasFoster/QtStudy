#ifndef EDIT_H
#define EDIT_H

#include <QMainWindow>

namespace Ui {
class Edit;
}

class Edit : public QMainWindow
{
    Q_OBJECT

public:
    explicit Edit(QWidget *parent = nullptr);
    ~Edit();

private:
    Ui::Edit *ui;
};

#endif // EDIT_H
