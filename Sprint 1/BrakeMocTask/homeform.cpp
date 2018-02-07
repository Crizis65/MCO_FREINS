#include "homeform.h"
#include "ui_homeform.h"

#include <QCoreApplication>
using namespace std;

HomeForm::HomeForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeForm)
{
    ui->setupUi(this);
    //this->TesterBd();
}

HomeForm::~HomeForm()
{
    delete ui;
}
//*************************************************************************************************************************
int HomeForm::initialiser()
{
    ifstream config("BrakeMocTask.ini");

    if(config)
    {
          // lecture fichierue
        getline(config, nameBD);
        qDebug(nameBD.data());
        getline(config,HostName);
        qDebug(HostName.data());
        getline(config,UserName);
        qDebug(UserName.data());
        getline(config,PassWord);
        qDebug(PassWord.data());
        FichierLog::tracer("Lecture fichier initialisation");
        config.close();

        if(TesterBd()==1)
        {
            inter_w.init(QString::fromStdString(nameBD), QString::fromStdString(HostName),QString::fromStdString(UserName),QString::fromStdString(PassWord));
            general_w.init(QString::fromStdString(nameBD), QString::fromStdString(HostName),QString::fromStdString(UserName),QString::fromStdString(PassWord));
            list_w.init(QString::fromStdString(nameBD), QString::fromStdString(HostName),QString::fromStdString(UserName),QString::fromStdString(PassWord));
            FichierLog::tracer("Connexion à la BDD");
            return 1;
        }
        else
        {
            QMessageBox::information(this, "infos", "ERREUR: Impossible de se connecter à la BDD.");
            FichierLog::tracer("Erreur connexion BDD");
            return 0;
        }



    }
  else
    {
        QMessageBox::information(this, "infos", "ERREUR: Impossible d'ouvrir le fichier en lecture.");
        FichierLog::tracer("Erreur ouverture fichier .ini");
        return 0;

    }
}


//*************************************************************************************************************************
int HomeForm::TesterBd()
{
    QSqlDatabase db =
    QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(QString::fromStdString(HostName));
    db.setUserName(QString::fromStdString(UserName));
    db.setPassword(QString::fromStdString(PassWord));
    db.setDatabaseName(QString::fromStdString(nameBD));

    if(db.open())
    {
        db.close();
        return 1;

    }
    else
    {
        return 0;
    }

}

//*************************************************************************************************************************


void HomeForm::on_bt_listorders_clicked()
{
    list_w.show();
}

void HomeForm::on_bt_general_clicked()
{
    general_w.show();
}

void HomeForm::on_bt_Intermediat_clicked()
{
    inter_w.show();
}
