#ifndef FICHIERLOG_H
#define FICHIERLOG_H
#include <QString>

class FichierLog
{
public:
    FichierLog();

    static void tracer(QString info);
};

#endif // FICHIERLOG_H
