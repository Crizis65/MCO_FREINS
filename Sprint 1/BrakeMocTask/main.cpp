#include <QApplication>
#include "homeform.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    HomeForm w;




    w.show();
    
    return a.exec();
}
