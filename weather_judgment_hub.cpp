#include "weather_judgment_hub.h"
#include "ui_weather_judgment_hub.h"

Weather_Judgment_Hub::Weather_Judgment_Hub(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Weather_Judgment_Hub)
{
    ui->setupUi(this);
    connect(ui->boxtest,QOverload<double>::of(&QDoubleSpinBox::valueChanged),
            this, &Weather_Judgment_Hub::valuechange);
}


Weather_Judgment_Hub::~Weather_Judgment_Hub()
{
    delete ui;
}

void Weather_Judgment_Hub::valuechange(double value) {
    //ui->test->setText(QString::number(value));
    if (value > 22) {
        ui->test->setText("Decole pas ta mere");
    }
}
