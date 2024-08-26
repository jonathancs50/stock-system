
#include "confectionery.h"

Confectionery::Confectionery()
{

}

Confectionery::Confectionery(QString i, int q, int w)
{
    item=i;
    quantity=q;
    weight=w;

}

int Confectionery::getWeight()
{
    return weight;
}

void Confectionery::setWeight(int w)
{
    weight=w;
}

QString Confectionery::toString()
{
    QString string= "Confectionery:"+item+",Quantity:"+QString::number(quantity)+",Weight:"+QString::number(weight);
    return string;
}

