#ifndef LISTEORDERSFORM_H
#define LISTEORDERSFORM_H

#include <QWidget>
#include <QtSql/QtSql>
#include <QString>
#include <fstream>
#include <string>
#include <QMessageBox>
#include <QDebug>
#include "fichierlog.h"
using namespace std;

namespace Ui {
class ListeOrdersForm;
}

class ListeOrdersForm : public QWidget
{
    Q_OBJECT
    
public:
    explicit ListeOrdersForm(QWidget *parent = 0);
    ~ListeOrdersForm();
     void init(QString nom_bd, QString adresse_ip, QString mdp, QString id_bd);

private:
    Ui::ListeOrdersForm *ui;


    QString nameBD;

    QString HostName;

    QString UserName;
    QString PassWord;
};

#endif // LISTEORDERSFORM_H
