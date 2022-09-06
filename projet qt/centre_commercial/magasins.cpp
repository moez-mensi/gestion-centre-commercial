#include "magasins.h"
#include "stat_combo.h"
#include "ui_stat_combo.h"



Magasins::Magasins()
{

}


bool Magasins::Ajouter(int id,QString nom,QString categorie,QString location)
{
    QSqlQuery q;
    QString res=QString::number(id);
    q.prepare("insert into magasins (id,nom,categorie,location)""values(:id,:nom,:categorie,:location)");
    q.bindValue(":id",res);
    q.bindValue(":nom",nom);
    q.bindValue(":categorie",categorie);
    q.bindValue(":location",location);
    return q.exec();
}

bool Magasins::Supprimer(int id)
{
    QSqlQuery q;
    QString res=QString::number(id);
    q.prepare("delete from magasins where id=:id ");
    q.bindValue(":id",res);
    return q.exec();

}

QSqlQueryModel* Magasins::Afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
    model->setQuery("select * from magasins");
    model->setHeaderData(0,Qt::Horizontal,  QObject::tr("id"));
    model->setHeaderData(1,Qt::Horizontal,  QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,  QObject::tr("categorie"));
    model->setHeaderData(3,Qt::Horizontal,  QObject::tr("location"));

    return model;

}


bool Magasins::Modifier(int id,QString nom,QString categorie,QString location)
{
    QSqlQuery q;
    QString res=QString::number(id);
    q.prepare("update magasins set id=:id,nom=:nom,categorie=:categorie,location=:location where id=:id");
    q.bindValue(":id",res);
    q.bindValue(":nom",nom);
    q.bindValue(":categorie",categorie);
    q.bindValue(":location",location);
    return q.exec();

}


QSqlQueryModel * Magasins::rechercher_mag(int id)
     {
        QString res=QString::number(id);

            QSqlQuery qry;


             qry.prepare("SELECT * FROM magasins where id=:id");
             qry.bindValue(":id",res);
             qry.exec();
             QSqlQueryModel *model= new QSqlQueryModel;
        model->setQuery(qry);

        model->setHeaderData(0,Qt::Horizontal,  QObject::tr("id"));
        model->setHeaderData(1,Qt::Horizontal,  QObject::tr("nom"));
        model->setHeaderData(2,Qt::Horizontal,  QObject::tr("categorie"));
        model->setHeaderData(3,Qt::Horizontal,  QObject::tr("location"));



     return model ;
   }

QSqlQueryModel * Magasins::trierAc2()
  {
      QSqlQuery * q = new  QSqlQuery ();
               QSqlQueryModel * model = new  QSqlQueryModel ();
               q->prepare("SELECT * FROM magasins order by id ASC");
               q->exec();
               model->setQuery(*q);
               model->setHeaderData(0,Qt::Horizontal,  QObject::tr("id"));
               model->setHeaderData(1,Qt::Horizontal,  QObject::tr("nom"));
               model->setHeaderData(2,Qt::Horizontal,  QObject::tr("categorie"));
               model->setHeaderData(3,Qt::Horizontal,  QObject::tr("location"));


               return model;

  }

  QSqlQueryModel * Magasins::trierDec2()
  {
            QSqlQuery * q = new  QSqlQuery ();
                   QSqlQueryModel * model = new  QSqlQueryModel ();
                   q->prepare("SELECT * FROM magasins order by id DESC");
                   q->exec();
                   model->setQuery(*q);
                   model->setHeaderData(0,Qt::Horizontal,  QObject::tr("id"));
                   model->setHeaderData(1,Qt::Horizontal,  QObject::tr("nom"));
                   model->setHeaderData(2,Qt::Horizontal,  QObject::tr("categorie"));
                   model->setHeaderData(3,Qt::Horizontal,  QObject::tr("location"));

                   return model;
  }





  //pie chart
      void stat_combo::choix_pie_mag()
      {
      QSqlQuery q1,q2,q3;
      qreal tot=0,c1=0,c2=0;

      q1.prepare("SELECT * FROM magasins");
      q1.exec();

      q2.prepare("SELECT * FROM magasins WHERE (location='oui')");
      q2.exec();

      q3.prepare("SELECT * FROM magasins where (location='non')");
      q3.exec();


      while (q1.next()){tot++;}
      while (q2.next()){c1++;}
      while (q3.next()){c2++;}

      c1=c1/tot;
      c2=c2/tot;

      // Define slices and percentage of whole they take up
      QPieSeries *series = new QPieSeries();
      series->append("Location payée",c1);
      series->append("Location non payée",c2);




      // Create the chart widget
      QChart *chart = new QChart();

      // Add data to chart with title and show legend
      chart->addSeries(series);
      chart->legend()->show();


      // Used to display the chart
      chartView = new QChartView(chart,ui->label_stat);
      chartView->setRenderHint(QPainter::Antialiasing);
      chartView->setMinimumSize(400,400);

      chartView->show();
      }





