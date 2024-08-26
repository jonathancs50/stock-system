
#ifndef WIDGET_H
#define WIDGET_H
#include <QMainWindow>
#include <QWidget>
#include <QMenuBar>
#include <QMenu>
#include "addstockwidget.h"
#include "stocklist.h"

class QStringListModel;
class QListView;

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    void setupGUI();
    QStringListModel * model;
    QListView * view;
    QMenuBar *menuBar;
    QMenu *stockMenu;
    QAction *addStockAction;
    QMenu *listMenu;
    QAction *confectionaryAction;
    QAction *readingMaterialAction;
    QMenu *xmlMenu;
    QAction *writeToXmlAction;
    AddStockWidget w;
    StockList * list;
private slots:
    void create_Item();
    void addStock();
    void showConfectionaryList();
    void showReadingMaterialList();
    void writeToXml();
};


#endif // WIDGET_H
