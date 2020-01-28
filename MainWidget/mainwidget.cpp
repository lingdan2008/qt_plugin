#include "mainwidget.h"
#include "ui_mainwidget.h"
#include <QDir>
#include <QPluginLoader>
#include <QDebug>


MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    qDebug() << __FUNCTION__;
    ui->setupUi(this);

    m_pHelloPlugin = nullptr;
    loadPlugin();
}

MainWidget::~MainWidget()
{
    qDebug() << __FUNCTION__;
    delete ui;
}

void MainWidget::on_pushButton_Hello_clicked()
{
    qDebug() << __FUNCTION__;

    if(m_pHelloPlugin) {
        ui->label_Text->setText(m_pHelloPlugin->getHello());
    }
}

bool MainWidget::loadPlugin()
{
    bool bLoaded = false;
    QPluginLoader pluginLoader("../plugins/libhelloplugin.so");
    QObject *plugin = pluginLoader.instance();
    if(plugin) {
        QString pluginName = plugin->metaObject()->className();
        if("HelloPlugin" == pluginName) {
            m_pHelloPlugin = qobject_cast<HelloInterface*>(plugin);
            if(m_pHelloPlugin) {
                bLoaded = true;
            }
        }
    }

    qDebug() << __FUNCTION__ << bLoaded;
    return bLoaded;
}
