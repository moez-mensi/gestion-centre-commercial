#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Ajout_Mag_btn_clicked()
{
    int id= ui->ID_Mag_2->text().toInt();
    QString nom= ui->Nom_Mag_2->text();
    QString categorie= ui->Categorie_Mag_2->text();
    QString location= ui->Location_Mag_2->text();
    Magasins m;
   bool isAdded= m.Ajouter(id,nom,categorie,location);
   if(isAdded)
     {
       QMessageBox::information(nullptr, QObject::tr("Succes"),
                                      QObject::tr("Ajout effectue.\n"
                                                  "Click Cancel to exit."), QMessageBox::Cancel);
     }else {
       QMessageBox::critical(nullptr, QObject::tr("Echec"),
                   QObject::tr("Ajout echoue.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);

       }
   }

void MainWindow::on_Modif_Mag_btn_clicked()
{

}

void MainWindow::on_Supp_Mag_btn_clicked()
{

}
