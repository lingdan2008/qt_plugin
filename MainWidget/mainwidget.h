#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "hellointerface.h"

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();
private slots:
    void on_pushButton_Hello_clicked();

private:
    bool loadPlugin();

private:
    Ui::MainWidget *ui;

    HelloInterface *m_pHelloPlugin;
};

#endif // MAINWIDGET_H
