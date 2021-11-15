#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    shortcut = new QShortcut(QKeySequence(Qt::Key_Return), this);
    QObject::connect(shortcut, SIGNAL(activated()), this, SLOT(on_calculateButton_clicked()));
    shortcut2 = new QShortcut(QKeySequence(Qt::Key_Enter), this);
    QObject::connect(shortcut2, SIGNAL(activated()), this, SLOT(on_calculateButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete shortcut;
    delete shortcut2;
    delete ui;
}

void MainWindow::on_calculateButton_clicked()
{
    ui->solutionToGet->setValue(y*gamma/omega);
    ui->waterToGet->setValue(gamma-(y*gamma/omega));
}


void MainWindow::on_inputConcentration_valueChanged(double arg1)
{
    omega = arg1;
}


void MainWindow::on_neededConcentration_valueChanged(double arg1)
{
    y = arg1;
}


void MainWindow::on_neededSolution_valueChanged(double arg1)
{
    gamma = arg1;
}

