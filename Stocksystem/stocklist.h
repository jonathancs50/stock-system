
#ifndef STOCKLIST_H
#define STOCKLIST_H

#include "stock.h"
#include "confectionery.h"
#include "readingmaterial.h"
#include <QList>



class StockList
{
public:
    static StockList * getInstance();
    void addStock(Stock * s,char o);
    QList<Stock *> getConfectioneryStock();
    QList<Stock *> getReadingMaterialStock();
private:
    StockList();//1. Singleton: Constructor is private
    static StockList * instance; //2. Make an static object to store intance
    QList<Stock *> confectioneryStock;
    QList<Stock *> readingmaterialStock;
};

#endif // STOCKLIST_H
