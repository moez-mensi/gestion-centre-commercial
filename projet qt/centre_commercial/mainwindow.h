#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "magasins.h"
#include "clients.h"
#include <QMessageBox>
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
    void on_Ajout_Mag_btn_clicked();

    void on_Modif_Mag_btn_clicked();

    void on_Supp_Mag_btn_clicked();

    void on_on_Ajout_Mag_btn_5_clicked_clicked();

    void on_Modif_Mag_btn_5_clicked();

    void on_Supp_Mag_btn_5_clicked();

private:
    Ui::MainWindow *ui;
    Magasins mtmp;
    Clients ctmp;
};
#endif // MAINWINDOW_H
