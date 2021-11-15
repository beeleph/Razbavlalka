#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QShortcut>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_calculateButton_clicked();

    void on_inputConcentration_valueChanged(double arg1);

    void on_neededConcentration_valueChanged(double arg1);

    void on_neededSolution_valueChanged(double arg1);

private:
    Ui::MainWindow *ui;
    double x = 0;          // solution to get (ml)
    double y = 0;          // needed concentration (mg/l)
    double z = 0;          // water to add (ml)
    double omega = 0;      // input concentration (mg/l)
    double gamma = 0;      // solution needed (ml)
    QShortcut *shortcut;
    QShortcut *shortcut2;
};
#endif // MAINWINDOW_H
