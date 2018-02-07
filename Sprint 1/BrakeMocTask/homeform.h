#ifndef HOMEFORM_H
#define HOMEFORM_H

#include <QWidget>
#include "listeordersform.h"
#include "generalform.h"
#include "intermediatform.h"
#include <QtSql/QtSql>
#include <QString>
#include <fstream>
#include <string>
#include <QMessageBox>
#include <QDebug>
#include "fichierlog.h"
using namespace std;

namespace Ui {
class HomeForm;
}

class HomeForm : public QWidget
{
    Q_OBJECT

public:
    explicit HomeForm(QWidget *parent = 0);

    int initialiser();
    int TesterBd();   //retourne 1 si ok

    ~HomeForm();
    
private slots:


    void on_bt_listorders_clicked();

    void on_bt_general_clicked();

    void on_bt_Intermediat_clicked();

private:
    Ui::HomeForm *ui;

    IntermediatForm inter_w;
    ListeOrdersForm list_w;
    GeneralForm general_w;


    string nameBD;

    string HostName;

    string UserName;
    string PassWord;



};

#endif // HOMEFORM_H
