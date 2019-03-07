#include <iostream>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonClear_clicked()
{
    ui->orderDisplay->clear();
}

void MainWindow::on_pushButtonNum0_clicked()
{
    ui->orderDisplay->setText(ui->orderDisplay->text() + "0");
}

void MainWindow::on_pushButtonNum1_clicked()
{
    ui->orderDisplay->setText(ui->orderDisplay->text() + "1");
}

void MainWindow::on_pushButtonNum2_clicked()
{
    ui->orderDisplay->setText(ui->orderDisplay->text() + "2");
}

void MainWindow::on_pushButtonNum3_clicked()
{
    ui->orderDisplay->setText(ui->orderDisplay->text() + "3");
}

void MainWindow::on_pushButtonNum4_clicked()
{
    ui->orderDisplay->setText(ui->orderDisplay->text() + "4");
}

void MainWindow::on_pushButtonNum5_clicked()
{
    ui->orderDisplay->setText(ui->orderDisplay->text() + "5");
}

void MainWindow::on_pushButtonNum6_clicked()
{
    ui->orderDisplay->setText(ui->orderDisplay->text() + "6");
}

void MainWindow::on_pushButtonNum7_clicked()
{
    ui->orderDisplay->setText(ui->orderDisplay->text() + "7");
}

void MainWindow::on_pushButtonNum8_clicked()
{
    ui->orderDisplay->setText(ui->orderDisplay->text() + "8");
}

void MainWindow::on_pushButtonNum9_clicked()
{
    ui->orderDisplay->setText(ui->orderDisplay->text() + "9");
}
