#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QTimer>
#include <QMainWindow>
#include <QFileDialog>
#include <fstream>
#include <sstream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QVector<double> qv_x,qv_y;
    QTimer *timer;
    int time;

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void addPoint(double x,double y);
    void plot();
    void printpoint();

private:
    Ui::MainWindow *ui;
private slots:
    void TimerSlot();
    void on_startstopButton_clicked();
    void on_downloadButton_clicked();
    void on_saveButton_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};
#endif // MAINWINDOW_H
