#include "meteo.h"
#include "ui_meteo.h"

Meteo::Meteo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Meteo)
{
    ui->setupUi(this);
}

Meteo::~Meteo()
{
    delete ui;
}
