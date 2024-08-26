
#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "stock.h"
#include <QString>
#include <QVariant>


class AbstractFactory
{
public:
    AbstractFactory();
    virtual Stock* creatStock(QString objName,QString i,int q,QVariant v)=0;
};

#endif // ABSTRACTFACTORY_H
