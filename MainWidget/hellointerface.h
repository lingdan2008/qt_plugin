#ifndef HELLOINTERFACE_H
#define HELLOINTERFACE_H

#include <QString>

class HelloInterface
{
public:
    virtual ~HelloInterface() {}
    virtual QString getHello() = 0;
};

#define HelloInterface_iid "Examples.Plugin.HelloInterface"
QT_BEGIN_NAMESPACE
Q_DECLARE_INTERFACE(HelloInterface, HelloInterface_iid)
QT_END_NAMESPACE

#endif // HELLOINTERFACE_H
