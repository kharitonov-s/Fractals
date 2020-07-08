#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QPainter>
#include <cmath>
#include <complex>
#include <iostream>
#include<windows.h>
#include<conio.h>

typedef std::complex<double> Complex;

Complex sqr(const Complex &v)
{
    return pow(v, 2);
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    int depth = 2000;
    float cr, ci, zr, zi, tmp;
    //HWND wnd = GetConsoleWindow();
    //HDC dc = GetDC(wnd);
    int k;




    ui->setupUi(this);
   /* ui->label->setText("Привет мир!");
    ui->label->setGeometry(10,10,100,50);
    ui->pushButton->setText("Knopka");

    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(buttonClick()));
    ui->lineEdit->setText("Hello!");//при запуске сразу в текстовое поле запишется текст*/

    QPixmap pixmap(640,540);
    QPainter painter(&pixmap);
    //painter.fillRect(0,0,640,540,QBrush(QColor(255,255,255)));
   // painter.setPen(QPen(QColor(255,0,0)));
   // painter.drawLine(0,0,100,100);
    //painter.drawPoint(1,1);

    ci = -0.3842;
    cr = -0.70176;
    for (int i = 0;i<539;i++)
    {
        for (int j = 0;j<539;j++)
        {
            zr = 1.5*(i-539/2)/(0.5*539);
            zi = (j-539/2)/(0.5*539);
            for (k = 0;k<300;k++)
            {
                tmp = zr*zr - zi*zi;
                zi = 2 * zr*zi + ci;
                zr=tmp + cr;
                if (zr*zr + zi*zi>4) break;
            }
                painter.setPen(QPen(QColor(k*4,0,0)));
                painter.drawPoint(i, j);
            }

   }

  //  painter.drawEllipse(QPoint(50,50),10,10);

   // painter.drawLine(pixmap.width()/2,0,pixmap.width()/2,pixmap.height());
  //  painter.drawText(10,10,"Text");
   // painter.drawArc(); рисование кривой
    ui->label_3->setPixmap(pixmap);

    //Графики
    //QCustomPlot* customPlot = ui->plot;
   // QVector<double> x(2000), y(2000), y2(2000);

   // QDialog *qd = new QDialog();
    // qd->setResult(arr[depth][depth]);
       //     qd->show();
    //Добавление графика
    //customPlot->addGraph();
    //customPlot->graph(0)->setData(x,y);
    //customPlot->xAxis->setRange(-1,1);
    //customPlot->yAxis->setRange(0,1);
   // customPlot->graph(0)->rescaleAxes();

    //customPlot->addGraph();
    //customPlot->graph(1)->setPen(QPen(Qt::red));
    //customPlot->graph(1)->setData(x,y2);

  //  customPlot->setInteractions(QCP::iRangeDrag |
                                //QCP::iRangeZoom |
                                //QCP::iSelectPlottables);
}


void MainWindow::buttonClick()
{
  QString text = ui->lineEdit->text();
   ui->label->setText(text);
    ui->label->setGeometry(100,10,100,50);

    //QDialog *qd=new QDialog(); //задать новое окно
   // qd->show(); //показать его

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QString val1 = ui->lineEdit->text();
    QString val2 = ui->lineEdit_2->text();
    int num=val1.toInt() + val2.toInt();
    ui->label->setText(QString::number(num));
}
