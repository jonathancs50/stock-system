#include <QXmlStreamWriter>
#include <QFile>
#include "widget.h"
#include <QStringListModel>
#include <QListView>
#include <QDebug>
#include <QTextEdit>
#include <QPushButton>
#include <QFileInfo>
#include "stockfactory.h"
#include "stocklist.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupGUI();
    setWindowTitle("Stock");
    setMinimumSize(500,300);

    list=StockList::getInstance();
}

MainWindow::~MainWindow()
{
}

void MainWindow::setupGUI()
{
    //Create the model and List view
    model=new QStringListModel(this);
    view=new QListView(this);
    //Connecting the List view to the model
    view->setModel(model);
    setCentralWidget(view);

    //Create the menu bar
    menuBar = new QMenuBar(this);

    //Create the menus stock and its popup menu Add Stock
    stockMenu = new QMenu("Stock");
    addStockAction = new QAction("Add stock", this);
    connect(addStockAction, &QAction::triggered, this, &MainWindow::create_Item);
    stockMenu->addAction(addStockAction);

    listMenu = new QMenu("List");
    confectionaryAction = new QAction("Confectionary", this);
    readingMaterialAction = new QAction("Reading Material", this);
    connect(confectionaryAction, &QAction::triggered, this, &MainWindow::showConfectionaryList);
    connect(readingMaterialAction, &QAction::triggered, this, &MainWindow::showReadingMaterialList);
    listMenu->addAction(confectionaryAction);
    listMenu->addAction(readingMaterialAction);

    xmlMenu = new QMenu("XML");
    writeToXmlAction = new QAction("Write to XML", this);
    connect(writeToXmlAction, &QAction::triggered, this, &MainWindow::writeToXml);
    xmlMenu->addAction(writeToXmlAction);

    menuBar->addMenu(stockMenu);
    menuBar->addMenu(listMenu);
    menuBar->addMenu(xmlMenu);

    setMenuBar(menuBar);

    connect(w.processDataButton, &QPushButton::clicked, this, &MainWindow::addStock);

}

void MainWindow::create_Item()
{
    w.show();

}

void MainWindow::addStock()
{
    StockFactory factory;

    if(w.getConfRadioBtn())
     {
        qDebug()<<"conf";
        Stock *item=factory.creatStock("Confectionery",w.getItemName(),w.getNumItems(),w.getWeightValue());
        list->addStock(item,'c');
        w.pressedAddBtn();
        w.close();
     }
    if(w.getReadingMaterialRadioBtn())
    {
        qDebug()<<"rm";
        Stock *item=factory.creatStock("Reading Material",w.getItemName(),w.getNumItems(),w.getreadingmaterialName());
        list->addStock(item,'r');
        w.pressedAddBtn();
        w.close();
    }





}

void MainWindow::showConfectionaryList()
{
   //model->setStringList(list->getConfectioneryStock());
    QStringList stringList;
    for(int i=0; i<list->getConfectioneryStock().size();i++) {
        stringList <<list->getConfectioneryStock()[i]->toString();
    }
    model->setStringList(stringList);

}

void MainWindow::showReadingMaterialList()
{
    QStringList stringList;
    for(int i=0; i<list->getReadingMaterialStock().size();i++) {
        stringList <<list->getReadingMaterialStock()[i]->toString();
        qDebug()<<list->getReadingMaterialStock()[i]->toString();
    }
    model->setStringList(stringList);


}

void MainWindow::writeToXml()
{
    qDebug()<<"Wrote to XML";
    QFile file("output.xml");
    qDebug() << "File path:" << QFileInfo(file).absoluteFilePath();
    file.open(QIODevice::WriteOnly);
    QXmlStreamWriter xmlWriter(&file);
    xmlWriter.setAutoFormatting(true);
    xmlWriter.writeStartDocument();
    xmlWriter.writeStartElement("stockList");

    for(int i=0; i<list->getConfectioneryStock().size();i++) {
        xmlWriter.writeStartElement("stockItem");
        xmlWriter.writeAttribute("type", "Confectionery");
        xmlWriter.writeTextElement("item", list->getReadingMaterialStock()[i]->getItem());
        xmlWriter.writeTextElement("quantity",QString::number(list->getReadingMaterialStock()[i]->getQuantity()));
        xmlWriter.writeTextElement("weight", QString::number(list->getReadingMaterialStock()[i]->getWeight()));
        xmlWriter.writeEndElement();
    }

    for(int i=0; i<list->getReadingMaterialStock().size();i++) {
        xmlWriter.writeStartElement("stockItem");
        xmlWriter.writeAttribute("type", "ReadingMaterial");
        xmlWriter.writeTextElement("item",list->getReadingMaterialStock()[i]->getItem());
        xmlWriter.writeTextElement("quantity",QString::number(list->getReadingMaterialStock()[i]->getQuantity()));
        xmlWriter.writeTextElement("frequency", list->getReadingMaterialStock()[i]->getFrequency());
        xmlWriter.writeEndElement();
    }




    xmlWriter.writeEndElement();
    xmlWriter.writeEndDocument();
    file.close();



}


