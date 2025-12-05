#ifndef WEATHER_JUDGMENT_HUB_H
#define WEATHER_JUDGMENT_HUB_H

#include <QMainWindow>

namespace Ui {
class Weather_Judgment_Hub;
}

class Weather_Judgment_Hub : public QMainWindow
{
    Q_OBJECT

public:
    explicit Weather_Judgment_Hub(QWidget *parent = 0);
    ~Weather_Judgment_Hub();

private slots:
    void valuechange(double value);


private:
    Ui::Weather_Judgment_Hub *ui;
};

#endif // WEATHER_JUDGMENT_HUB_H
