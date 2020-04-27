﻿#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsRectItem>
#include "bqgraphicsitem.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_scene.setBackgroundBrush(Qt::gray);
    ui->graphicsView->setScene(&m_scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_circleBtn_clicked()
{
    BCircle *m_circle = new BCircle(0, 0, 50, BGraphicsItem::ItemType::Circle);
    m_scene.addItem(m_circle);
}

void MainWindow::on_ellipseBtn_clicked()
{
    BEllipse *m_ellipse = new BEllipse(0, 0, 120, 80, BGraphicsItem::ItemType::Ellipse);
    m_scene.addItem(m_ellipse);
}

void MainWindow::on_conCircleBtn_clicked()
{
    BConcentricCircle *m_conCircle = new BConcentricCircle(0, 0, 50, 80, BGraphicsItem::ItemType::Concentric_Circle);
    m_scene.addItem(m_conCircle);
}

void MainWindow::on_squareBtn_clicked()
{
    BSquare *m_square = new BSquare(0, 0, 60, BGraphicsItem::ItemType::Square);
    m_scene.addItem(m_square);
}

void MainWindow::on_rectangleBtn_clicked()
{
    BRectangle *m_rectangle = new BRectangle(0, 0, 80, 60, BGraphicsItem::ItemType::Rectangle);
    m_scene.addItem(m_rectangle);
}

void MainWindow::on_polygonBtn_clicked()
{

}

void MainWindow::on_roundRecBtn_clicked()
{

}

void MainWindow::on_rnRecBtn_clicked()
{

}

void MainWindow::on_clearBtn_clicked()
{
    m_scene.clear();
}

void MainWindow::on_saveBtn_clicked()
{

}

void MainWindow::on_loadBtn_clicked()
{

}
