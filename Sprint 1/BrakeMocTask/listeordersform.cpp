#include "listeordersform.h"
#include "ui_listeordersform.h"

ListeOrdersForm::ListeOrdersForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListeOrdersForm)
{
    void setWindowTitle (const QString &Liste);
    ui->setupUi(this);
}

ListeOrdersForm::~ListeOrdersForm()
{
    delete ui;
}

 void ListeOrdersForm::init(QString nom_bd, QString adresse_ip, QString mdp, QString id_bd)
 {
     nameBD=nom_bd;
     HostName=adresse_ip;
     PassWord=mdp;
     UserName=id_bd;
 }
