#include "weather_judgment_hub.h"
#include "ui_weather_judgment_hub.h"

Weather_Judgment_Hub::Weather_Judgment_Hub(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Weather_Judgment_Hub)
{
    ui->setupUi(this);
}

Weather_Judgment_Hub::~Weather_Judgment_Hub()
{
    delete ui;
}
