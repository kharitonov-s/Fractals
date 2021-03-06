#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcustomplot.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public slots: //здесь будут описаны все слоты, которые ьбудут чтото обрабатывать
    void buttonClick();
private slots:
    void on_pushButton_2_clicked();
};

#endif // MAINWINDOW_H
