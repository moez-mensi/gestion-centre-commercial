#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(mtmp.Afficher());
    ui->tableView_5->setModel(ctmp.Afficher());
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
       ui->tableView->setModel(mtmp.Afficher());
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

    int id= ui->ID_Mag->text().toInt();
    QString nom= ui->Nom_Mag->text();
    QString categorie= ui->Categorie_Mag->text();
    QString location= ui->Location_Mag->text();
    Magasins m;
   bool isUpdated= m.Modifier(id,nom,categorie,location);
   if(isUpdated)
     {
       ui->tableView->setModel(mtmp.Afficher());
       QMessageBox::information(nullptr, QObject::tr("Succes"),
                                      QObject::tr("Modification effectue.\n"
                                                  "Click Cancel to exit."), QMessageBox::Cancel);
     }else {
       QMessageBox::critical(nullptr, QObject::tr("Echec"),
                   QObject::tr("Modification echoue.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);

       }


}

void MainWindow::on_Supp_Mag_btn_clicked()
{
    int id= ui->Location_Mag_3->text().toInt();
    Magasins m;
    bool isDeleted=m.Supprimer(id);
    if(isDeleted)
      {
        ui->tableView->setModel(mtmp.Afficher());
        QMessageBox::information(nullptr, QObject::tr("Succes"),
                                       QObject::tr("Suppression effectue.\n"
                                                   "Click Cancel to exit."), QMessageBox::Cancel);
      }else {
        QMessageBox::critical(nullptr, QObject::tr("Echec"),
                    QObject::tr("Suppression echoue.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

        }

}




//crud clients

void MainWindow::on_on_Ajout_Mag_btn_5_clicked_clicked()
{
    int id= ui->ID_Mag_11->text().toInt();
    QString nom= ui->Nom_Mag_11->text();
    QString prenom= ui->Categorie_Mag_14->text();
    QString sexe= ui->Categorie_Mag_15->text();
    QString email= ui->Categorie_Mag_16->text();
    int num_tel= ui->Categorie_Mag_17->text().toInt();
    int pts_fid= ui->Location_Mag_16->text().toInt();
    Clients c;
   bool isAdded= c.Ajouter(id,nom,prenom,sexe,email,num_tel,pts_fid);
   if(isAdded)
     {
       ui->tableView_5->setModel(ctmp.Afficher());
       QMessageBox::information(nullptr, QObject::tr("Succes"),
                                      QObject::tr("Ajout effectue.\n"
                                                  "Click Cancel to exit."), QMessageBox::Cancel);
     }
   else
     {
       QMessageBox::critical(nullptr, QObject::tr("Echec"),
                   QObject::tr("Ajout echoue.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);

     }
}




void MainWindow::on_Modif_Mag_btn_5_clicked()
{

    int id= ui->ID_Mag_10->text().toInt();
    QString nom= ui->Nom_Mag_10->text();
    QString prenom= ui->Categorie_Mag_10->text();
    QString sexe= ui->Categorie_Mag_11->text();
    QString email= ui->Categorie_Mag_12->text();
    int num_tel= ui->Categorie_Mag_13->text().toInt();
    int pts_fid= ui->Location_Mag_14->text().toInt();
    Clients c;
   bool isUpdated= c.Modifier(id,nom,prenom,sexe,email,num_tel,pts_fid);
   if(isUpdated)
     {
       ui->tableView_5->setModel(ctmp.Afficher());
       QMessageBox::information(nullptr, QObject::tr("Succes"),
                                      QObject::tr("Modification effectue.\n"
                                                  "Click Cancel to exit."), QMessageBox::Cancel);
     }else {
       QMessageBox::critical(nullptr, QObject::tr("Echec"),
                   QObject::tr("Modification echoue.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);

       }



}





void MainWindow::on_Supp_Mag_btn_5_clicked()
{

    int id= ui->Location_Mag_15->text().toInt();
    Clients c;
    bool isDeleted=c.Supprimer(id);
    if(isDeleted)
      {
        ui->tableView_5->setModel(ctmp.Afficher());
        QMessageBox::information(nullptr, QObject::tr("Succes"),
                                       QObject::tr("Suppression effectue.\n"
                                                   "Click Cancel to exit."), QMessageBox::Cancel);
      }else {
        QMessageBox::critical(nullptr, QObject::tr("Echec"),
                    QObject::tr("Suppression echoue.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

        }


}




