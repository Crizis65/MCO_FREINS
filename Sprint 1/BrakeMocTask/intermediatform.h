#ifndef INTERMEDIATFORM_H
#define INTERMEDIATFORM_H

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
class IntermediatForm;
}

class IntermediatForm : public QWidget
{
    Q_OBJECT
    
public:
    explicit IntermediatForm(QWidget *parent = 0);
    ~IntermediatForm();
     void init(QString nom_bd, QString adresse_ip, QString mdp, QString id_bd);

private:
    Ui::IntermediatForm *ui;


    QString nameBD;

    QString HostName;

    QString UserName;
    QString PassWord;
};

#endif // INTERMEDIATFORM_H
