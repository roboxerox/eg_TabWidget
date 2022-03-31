#ifndef EG_TABWIDGET_H
#define EG_TABWIDGET_H

#include <QMainWindow>
#include <QDebug>

namespace Ui {
class eg_TabWidget;
}

class eg_TabWidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit eg_TabWidget(QWidget *parent = 0);
    ~eg_TabWidget();

private slots:
    void on_pushButton_SignUp_clicked();

    void on_pushButton_SignIn_clicked();

private:
    Ui::eg_TabWidget *ui;
};

#endif // EG_TABWIDGET_H
