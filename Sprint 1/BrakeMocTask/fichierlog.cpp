#include "fichierlog.h"
#include <QFile>
#include <QDate>
#include <QTextStream>
#include <QDebug>

FichierLog::FichierLog()
{
}

void FichierLog::tracer(QString info)
{
    QDate date = QDate::currentDate();
    QTime time = QTime::currentTime();
    QString mess = "["+ date.toString()+ "]"+ " [" +time.toString()+ "] " + info;

    QFile fichier("BrakeMocTask.log");
    QByteArray Fin ="\n";
    //qDebug()<< "ouverture fichier";
    if(fichier.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        int offset = fichier.size();
        fichier.seek(offset);
        fichier.write(mess.toAscii());
        fichier.write(Fin);
        fichier.close();
        //qDebug()<< "ecriture fichier";
    }

}

