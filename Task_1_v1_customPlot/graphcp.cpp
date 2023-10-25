#include "graphcp.h"
#include "ui_graphcp.h"

GraphCP::GraphCP(QVector<double> xValue, QVector<double> yValue, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GraphCP)
{
    ui->setupUi(this);
    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setPen(QPen(Qt::blue));
    ui->customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    ui->customPlot->graph(0)->addData(xValue, yValue);
    ui->customPlot->rescaleAxes();
    ui->customPlot->xAxis->setRange(0, 1000);
    ui->customPlot->xAxis->ticker()->setTickCount(10);
    ui->customPlot->yAxis->ticker()->setTickCount(10);
    ui->customPlot->xAxis->setLabel("1000 Гц");
    ui->customPlot->replot();
    this->show();
}

GraphCP::~GraphCP()
{
    delete ui;
}
