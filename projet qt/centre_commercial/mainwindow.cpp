#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stat_combo.h"
#include <ui_stat_combo.h>
#include <QSystemTrayIcon>
#include <QPdfWriter>
#include <QPainter>
#include <QDesktopServices>
#include <QUrl>
#include <QPrinter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(mtmp.Afficher());
    ui->tableView_5->setModel(ctmp.Afficher());
    msys=new QSystemTrayIcon (this);
    msys->setIcon(QIcon(":/logo.ico"));
    msys->setVisible(true);
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
       msys->showMessage(tr("Ajout"),tr("Efféctuée"));

     }
   else
   {
       QMessageBox::critical(nullptr, QObject::tr("Echec"),
                   QObject::tr("Ajout echoue.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);

       msys->showMessage(tr("Ajout"),tr("Echouée"));


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
       msys->showMessage(tr("Modification"),tr("Efféctuée"));

     }else {
       QMessageBox::critical(nullptr, QObject::tr("Echec"),
                   QObject::tr("Modification echoue.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);

       msys->showMessage(tr("Ajout"),tr("Echouée"));


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

        msys->showMessage(tr("Supression"),tr("Efféctuée"));
      }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Echec"),
                    QObject::tr("Suppression echoue.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

        msys->showMessage(tr("Supression"),tr("Echouée"));


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

       msys->showMessage(tr("Ajout"),tr("Efféctuée"));

     }
   else
     {
       QMessageBox::critical(nullptr, QObject::tr("Echec"),
                   QObject::tr("Ajout echoue.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);

       msys->showMessage(tr("Ajout"),tr("Echouée"));
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
       msys->showMessage(tr("Modification"),tr("Efféctuée"));
     }
   else
     {
       QMessageBox::critical(nullptr, QObject::tr("Echec"),
                   QObject::tr("Modification echoue.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);

       msys->showMessage(tr("Supression"),tr("Echouée"));
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
        msys->showMessage(tr("Supression"),tr("Efféctuée"));
      }
    else
      {
        QMessageBox::critical(nullptr, QObject::tr("Echec"),
                    QObject::tr("Suppression echoue.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

        msys->showMessage(tr("Supression"),tr("Echouée"));
      }





}

void MainWindow::on_pushButton_6_clicked()
{
   stat_combo *s= new stat_combo();

         s->setWindowTitle("statistique ComboBox");
         s->choix_pie();
         s->show();
}

void MainWindow::on_pushButton_TriASC_clicked()
{
     ui->tableView_tri->setModel(mtmp.trierAc2());
}

void MainWindow::on_pushButton_TriDESC_clicked()
{
     ui->tableView_tri->setModel(mtmp.trierDec2());
}


void MainWindow::on_rechercher_clicked()
{
    int id=ui->lineEdit_rechercher->text().toInt() ;
        ui->tableView_rechercher->setModel(mtmp.rechercher_mag(id)) ;

}



//notification
void MainWindow::on_Ajout_Mag_btn_2_clicked()
{
    msys->showMessage(tr("message"),tr("test"));
}

void MainWindow::on_pdf_btn_clicked()
{
    QPrinter p;
    p.setOutputFormat (QPrinter::PdfFormat);
    p.setOutputFileName("file.pdf");


   QPainter q;
   q.begin (&p);
   q.drawText(100,0,"msbjcgdjdh");
   q.end();


}



void MainWindow::on_rechercher_3_clicked()
{
       int id=ui->lineEdit_rechercher_3->text().toInt() ;
       ui->tableView_rechercher_3->setModel(ctmp.rechercher_clients(id)) ;
}



void MainWindow::on_pushButton_TriASC_2_clicked()
{
    ui->tableView_tri_2->setModel(ctmp.trierAc());
}



void MainWindow::on_pushButton_TriDESC_2_clicked()
{
    ui->tableView_tri_2->setModel(ctmp.trierDec());
}





void MainWindow::on_pushButton_7_clicked()
{

    stat_combo *s= new stat_combo();

          s->setWindowTitle("statistique ComboBox");
          s->choix_pie_mag();
          s->show();

}







void MainWindow::on_pushButton_clicked()
{
    QString link="https://mail.google.com/mail/u/1/?view=cm&source=mailto&to=[email@address]";
    QDesktopServices::openUrl(link);
}
