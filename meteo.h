#ifndef METEO_H
#define METEO_H

#include <QMainWindow>

namespace Ui {
class Meteo;
}

class Meteo : public QMainWindow
{
    Q_OBJECT

public:
    explicit Meteo(QWidget *parent = 0);
    ~Meteo();

private:
    Ui::Meteo *ui;
};

#endif // METEO_H
