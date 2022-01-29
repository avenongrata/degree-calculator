#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    //-------------------------------------------------------------------------

public:    
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //-------------------------------------------------------------------------

private slots:
    void on_calculatePushButton_clicked();
    void on_clearInputPushButton_clicked();
    void on_clearAllPushButton_clicked();

    //-------------------------------------------------------------------------

private:
    void addText(const QString &text);
    Ui::MainWindow *ui;

    //-------------------------------------------------------------------------

    double m_degrees;
    double m_minutes;
    double m_seconds;
};
#endif // MAINWINDOW_H
