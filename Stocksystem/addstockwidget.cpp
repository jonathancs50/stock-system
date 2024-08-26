
#include "addstockwidget.h"
#include <QLabel>
#include <QRadioButton>
#include <QLineEdit>
#include <QSpinBox>
#include <QGridLayout>
#include <QPushButton>
#include <QGroupBox>
#include <QDebug>




AddStockWidget::AddStockWidget(QWidget *parent)
    : QWidget{parent},
    label(new QLabel("Complete the required data")),
    stockTypeLabel(new QLabel("Stock Type")),
    confectioneryRadioButton(new QRadioButton("Confectionery")),
    readingMaterialRadioButton(new QRadioButton("Reading Material")),
    itemName(new QLabel("Name of item:")),
    numItems(new QLabel("Number of items:")),
    cWeight(new QLabel("Confectionery item weight:")),
    rmFrequency(new QLabel("Reading Material item frequency")),
    itemNameEdit(new QLineEdit()),
    rmFrequencyEdit(new QLineEdit()),
    itemsSpinBox(new QSpinBox()),
    cSpinBox(new QSpinBox()),
    processDataButton(new QPushButton("Process data"))

{
    setupGUI();
    setWindowTitle("Add New Item");

}

AddStockWidget::~AddStockWidget()
{

}

void AddStockWidget::setupGUI()
{
    //Create the layout and add the elements
    QGridLayout * layout(new QGridLayout());
    layout->addWidget(label,0,0,1,2);
    label->setAlignment(Qt::AlignCenter); //Will make the heading centered
    layout->addWidget(stockTypeLabel,1,0);

    //Create a group for the radio buttons
    QGroupBox *groupBox = new QGroupBox;
    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(confectioneryRadioButton);
    vbox->addWidget(readingMaterialRadioButton);
    vbox->addStretch(1);
    groupBox->setLayout(vbox);
    layout->addWidget(groupBox,1,1);

    layout->addWidget(itemName,2,0);
    layout->addWidget(itemNameEdit,2,1);
    layout->addWidget(numItems,3,0);
    layout->addWidget(itemsSpinBox,3,1);
    layout->addWidget(cWeight,4,0);
    layout->addWidget(cSpinBox,5,0);
    layout->addWidget(rmFrequency,4,1);
    layout->addWidget(rmFrequencyEdit,5,1);
    layout->addWidget(processDataButton,7,1);

    connect(confectioneryRadioButton, &QRadioButton::clicked, this,&AddStockWidget::radioBtnConfectionerySelected);
    connect(readingMaterialRadioButton, &QRadioButton::clicked, this,&AddStockWidget::radioBtnReadinMaterialSelected);
    setLayout(layout);

}

void AddStockWidget::radioBtnConfectionerySelected()
{
    rmFrequencyEdit->setEnabled(false);
    cSpinBox->setEnabled(true);


}

void AddStockWidget::radioBtnReadinMaterialSelected()
{
    rmFrequencyEdit->setEnabled(true);
    cSpinBox->setEnabled(false);

}

void AddStockWidget::pressedAddBtn()
{
   // qDebug()<<"Button recognised from the Add Stock class";
        confectioneryRadioButton->setFocus();
        itemNameEdit->clear();
        rmFrequencyEdit->clear();
        itemsSpinBox->setValue(0);
        cSpinBox->setValue(0);

}

QString AddStockWidget::getItemName()
{
        return itemNameEdit->text();
}

QString AddStockWidget::getreadingmaterialName()
{
        return rmFrequencyEdit->text();
}

int AddStockWidget::getNumItems()
{
        return itemsSpinBox->value();
}

int AddStockWidget::getWeightValue()
{
        return cSpinBox->value();
}

bool AddStockWidget::getConfRadioBtn()
{
        return confectioneryRadioButton->isChecked();
}

bool AddStockWidget::getReadingMaterialRadioBtn()
{
        return readingMaterialRadioButton->isChecked();
}

