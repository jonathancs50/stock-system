
#ifndef STOCKFACTORY_H
#define STOCKFACTORY_H

#include "abstractfactory.h"
#include "stock.h"



class StockFactory : public AbstractFactory
{
public:
    StockFactory();
    Stock* creatStock(QString objName,QString i,int q,QVariant v);
};

#endif // STOCKFACTORY_H
