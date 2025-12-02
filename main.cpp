#include "meteo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Meteo w;
    w.show();

    return a.exec();
}
