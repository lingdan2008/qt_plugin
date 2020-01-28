#include "helloplugin.h"

HelloPlugin::HelloPlugin(QObject *parent) : QObject(parent)
{

}

QString HelloPlugin::getHello()
{
    return "Hello, World!";
}
