#include "generalform.h"
#include "ui_generalform.h"

GeneralForm::GeneralForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GeneralForm)
{
    ui->setupUi(this);
}

GeneralForm::~GeneralForm()
{
    delete ui;
}

 void GeneralForm::init(QString nom_bd, QString adresse_ip, QString mdp, QString id_bd)
 {

    nameBD=nom_bd;
    HostName=adresse_ip;
    PassWord=mdp;
    UserName=id_bd;
 }
