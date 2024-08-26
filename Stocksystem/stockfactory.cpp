
#include "stockfactory.h"
#include "confectionery.h"
#include "readingmaterial.h"

StockFactory::StockFactory()
{

}

Stock * StockFactory::creatStock(QString objName, QString i, int q,QVariant v)
{
    if(objName.toLower()=="confectionery")
    {
        return new Confectionery(i,q,v.toInt());
    }
    if(objName.toLower()=="reading material")
    {
        return new ReadingMaterial(i,q,v.toString());
    }
    return NULL;

}

