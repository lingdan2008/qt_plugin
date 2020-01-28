#ifndef HELLOPLUGIN_H
#define HELLOPLUGIN_H

#include <QObject>
#include <QtPlugin>
#include "hellointerface.h"

class HelloPlugin : public QObject, HelloInterface
{
    Q_OBJECT
    Q_INTERFACES(HelloInterface)
#if QT_VERSION >= 0x050000
    Q_PLUGIN_METADATA(IID "Examples.Plugin.HelloInterface")
#endif

public:
    explicit HelloPlugin(QObject *parent = nullptr);
    QString getHello() override;

signals:

public slots:
};

#endif // HELLOPLUGIN_H
