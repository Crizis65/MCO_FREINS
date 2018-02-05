#include "intermediatform.h"
#include "ui_intermediatform.h"

IntermediatForm::IntermediatForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IntermediatForm)
{
    ui->setupUi(this);
}

IntermediatForm::~IntermediatForm()
{
    delete ui;
}
