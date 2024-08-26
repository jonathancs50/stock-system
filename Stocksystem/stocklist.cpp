
#include "stocklist.h"
#include <QMetaMethod>

StockList * StockList::instance;

StockList *StockList::getInstance()
{
    if(StockList::instance==NULL)
    {
        StockList::instance=new StockList();
    }
    return instance;
}


void StockList::addStock(Stock *s, char o)
{

    if(o=='c')
    {
        confectioneryStock.append(s);

    }
    if(o=='r')
    {
        readingmaterialStock.append(s);
    }
//    for (int i = 0; i < s->metaObject()->methodCount(); ++i) {
////        QMetaMethod method = s->metaObject()->method(i);
////        qDebug() << method.name();
////        qDebug()<<"Name: " << s->metaObject()->property(i).name();
//        QMetaProperty prop = s->metaObject()->property(i);
//        qDebug() << prop.name();
//    }

//    if(dynamic_cast<Confectionery*>(s))
//    {
//        Confectionery *c = qobject_cast<Confectionery *>(s);
//        confectioneryStock.append(c->toString());
//                qDebug()<<c->toString();
//    }
//    if(dynamic_cast<ReadingMaterial*>(s))
//    {
//        ReadingMaterial *r = qobject_cast<ReadingMaterial *>(s);
//        readingmaterialStock.append(r->toString());
//        qDebug()<<r->toString();
//    }
//    if (Confectionery *c = qobject_cast<Confectionery *>(s)) {
//        confectioneryStock.append(c->toString());
//        qDebug()<<c->toString();
//    }
//    if (ReadingMaterial *r = qobject_cast<ReadingMaterial *>(s)) {
//        readingmaterialStock.append(r->toString());
//        qDebug()<<r->toString();
//    }

}

QList<Stock *> StockList::getConfectioneryStock()
{
    return confectioneryStock;

}

QList<Stock *> StockList::getReadingMaterialStock()
{
    return readingmaterialStock;
}

StockList::StockList()
{

}

