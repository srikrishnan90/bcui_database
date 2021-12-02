#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QGridLayout>
#include <QScroller>


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
    void on_toolButton_7_clicked();

    void on_toolButton_8_clicked();

    void on_toolButton_9_clicked();

    void on_toolButton_10_clicked();

    void on_toolButton_11_clicked();

    void on_toolButton_12_clicked();

    void on_toolButton_13_clicked();

    void on_toolButton_14_clicked();

    void on_pushButton_309_clicked();

    void on_toolButton_clicked();

    void on_pushButton_clicked();

    void on_toolButton_2_clicked();

    void on_pushButton_117_clicked();

    void on_toolButton_3_clicked();

    void on_pushButton_222_clicked();

    void on_toolButton_4_clicked();

    void on_toolButton_5_clicked();

    void cald();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
