#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->comboBox->insertItem(0,"50",50);
    ui->comboBox->insertItem(1,"100",100);
    ui->comboBox->insertItem(2,"1000",1000);
    ui->comboBox->insertItem(3,"100000",100000);

    ui->label_res->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    myAlgorithm.size=(ui->comboBox->currentData()).toInt();

    myAlgorithm.basicCalc();

    ui->label_res->setVisible(true);

    ui->spin_M->setValue(myAlgorithm.M);
    ui->spin_D->setValue(myAlgorithm.D);
    ui->spin_Mark->setValue(myAlgorithm.mark);

    if(myAlgorithm.mark < 1.22)
        ui->label_res->setText("Распределение не подходит по критерию Колмагорова");
    else
        ui->label_res->setText("Распределение подходит по критерию Колмагорова");

    QVector<double> analytic_x, analytic_F;
    double step = 1.5 / 1000000;
    for(int i=0 ; i<1000000 ; ++i) {
        analytic_x << -0.5 + step * i;
        double fun;
        if(analytic_x[i] <= 0)
            fun=analytic_x[i]+0.5;
        else
            fun=-pow(analytic_x[i], 2)/2+analytic_x[i]+0.5;
        analytic_F << fun/*tan(analytic_x[i]/2)*/;
    }

    ui->widget->addGraph();
    ui->widget->graph(0)->setData(myAlgorithm.x,myAlgorithm.random_F);
    ui->widget->graph(0)->setLineStyle(QCPGraph::lsStepRight);
    ui->widget->addGraph();
    ui->widget->graph(1)->setData(analytic_x, analytic_F);
    ui->widget->xAxis->setLabel("x");
    ui->widget->yAxis->setLabel("F");
    ui->widget->xAxis->setRange(0, myAlgorithm.x.last());
    ui->widget->yAxis->setRange(0, myAlgorithm.random_F.last());
    ui->widget->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    ui->widget->replot();
}
