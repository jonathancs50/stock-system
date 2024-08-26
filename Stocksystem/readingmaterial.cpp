
#include "readingmaterial.h"

ReadingMaterial::ReadingMaterial()
{

}

ReadingMaterial::ReadingMaterial(QString i, int q, QString f)
{
    item=i;
    quantity=q;
    frequency=f;

}

QString ReadingMaterial::getFrequency()
{
    return frequency;
}

void ReadingMaterial::setFrequency(QString f)
{
    frequency=f;
}

QString ReadingMaterial::toString()
{
    QString str= "Reading Material:"+item+",Quantity:"+QString::number(quantity)+",Frequency:"+frequency;
    return str;

}

