
#ifndef ADDSTOCKWIDGET_H
#define ADDSTOCKWIDGET_H


#include <QWidget>
class QLabel;
class QRadioButton;
class QLineEdit;
class QSpinBox;
class QPushButton;

class AddStockWidget : public QWidget
{
    Q_OBJECT
public:
    explicit AddStockWidget(QWidget *parent = nullptr);
    ~AddStockWidget();
    QLabel *label;
    QLabel *stockTypeLabel;
    QRadioButton *confectioneryRadioButton;
    QRadioButton *readingMaterialRadioButton;
    QLabel * itemName;
    QLabel * numItems ;
    QLabel * cWeight ;
    QLabel * rmFrequency;
    QLineEdit * itemNameEdit;
    QLineEdit * rmFrequencyEdit;
    QSpinBox * itemsSpinBox;
    QSpinBox * cSpinBox;
    QPushButton *processDataButton;
    void pressedAddBtn();
    QString getItemName();
    QString getreadingmaterialName();
    int getNumItems();
    int getWeightValue();
   bool getConfRadioBtn();
   bool getReadingMaterialRadioBtn();

private:
    void setupGUI();


private slots:
    void radioBtnConfectionerySelected();
    void radioBtnReadinMaterialSelected();
};

#endif // ADDSTOCKWIDGET_H
