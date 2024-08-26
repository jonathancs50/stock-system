
#include "stock.h"

Stock::Stock()
{

}

Stock::Stock(QString i, int q)
{
    item=i;
    quantity=q;

}

QString Stock::getItem()
{
    return item;

}

int Stock::getQuantity()
{
    return quantity;
}

void Stock::setItem(QString i)
{
    item=i;
}

void Stock::setQuantity(int q)
{
    quantity=q;
}

int Stock::getWeight()
{
    return 0;
}

QString Stock::getFrequency()
{
    return  "success";
}

