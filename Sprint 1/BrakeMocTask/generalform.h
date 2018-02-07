#ifndef GENERALFORM_H
#define GENERALFORM_H

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
class GeneralForm;
}

class GeneralForm : public QWidget
{
    Q_OBJECT
    
public:
    explicit GeneralForm(QWidget *parent = 0);
    ~GeneralForm();

    void init(QString nom_bd, QString adresse_ip, QString mdp, QString id_bd);
    
private:
    Ui::GeneralForm *ui;


    QString nameBD;

    QString HostName;

    QString UserName;
    QString PassWord;
};

#endif // GENERALFORM_H
