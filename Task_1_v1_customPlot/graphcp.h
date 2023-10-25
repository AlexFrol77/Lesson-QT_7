#ifndef GRAPHCP_H
#define GRAPHCP_H

#include <QWidget>
#include <QDebug>
#include "qcustomplot.h"

namespace Ui {
class GraphCP;
}

class GraphCP : public QWidget
{
    Q_OBJECT

public:
    explicit GraphCP(QVector<double> xValue, QVector<double> yValue, QWidget *parent = nullptr);
    ~GraphCP();

public slots:


private:
    Ui::GraphCP *ui;
};

#endif // GRAPHCP_H
