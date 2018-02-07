#include <QApplication>
#include "homeform.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    HomeForm w;

    if(w.initialiser()==1)
        w.show();
    
    return a.exec();
}
