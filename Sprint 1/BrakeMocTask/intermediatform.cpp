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

 void IntermediatForm::init(QString nom_bd, QString adresse_ip, QString mdp, QString id_bd)
 {
     nameBD=nom_bd;
     HostName=adresse_ip;
     PassWord=mdp;
     UserName=id_bd;
 }
