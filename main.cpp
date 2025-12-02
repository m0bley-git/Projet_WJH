#include "weather_judgment_hub.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Weather_Judgment_Hub w;
    w.show();

    return a.exec();
}
