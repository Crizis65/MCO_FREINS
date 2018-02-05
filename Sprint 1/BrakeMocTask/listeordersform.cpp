#include "listeordersform.h"
#include "ui_listeordersform.h"

ListeOrdersForm::ListeOrdersForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListeOrdersForm)
{
    ui->setupUi(this);
}

ListeOrdersForm::~ListeOrdersForm()
{
    delete ui;
}
