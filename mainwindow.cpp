#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //-------------------------------------------------------------------------

    m_degrees = 0.0f;
    m_minutes = 0.0f;
    m_seconds = 0.0f;

    //-------------------------------------------------------------------------

    ui->setupUi(this);
}

//-----------------------------------------------------------------------------

MainWindow::~MainWindow()
{
    delete ui;
}

//-----------------------------------------------------------------------------

void MainWindow::on_calculatePushButton_clicked()
{
    double result;

    m_degrees = ui->degrees->text().toDouble();
    m_minutes = ui->minutes->text().toDouble();
    m_seconds = ui->seconds->text().toDouble();

    result = m_degrees + m_minutes / 60 + m_seconds / 3600;

    QString valueAsString = QString::number(result, 'f', 5);
    addText(valueAsString);
}

//-----------------------------------------------------------------------------

void MainWindow::on_clearInputPushButton_clicked()
{
    ui->degrees->clear();
    ui->minutes->clear();
    ui->seconds->clear();
}

//-----------------------------------------------------------------------------

void MainWindow::on_clearAllPushButton_clicked()
{
    ui->dec_value->clear();
    ui->degrees->clear();
    ui->minutes->clear();
    ui->seconds->clear();
}

//-----------------------------------------------------------------------------

void MainWindow::addText(const QString &text)
{
    ui->dec_value->clear();
    ui->dec_value->setFontPointSize(34);
    ui->dec_value->append(text);
}

