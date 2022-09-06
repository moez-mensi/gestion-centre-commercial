#include "clients.h"
#include "stat_combo.h"
#include "ui_stat_combo.h"




Clients::Clients()
{

}


bool Clients::Ajouter(int id,QString nom,QString prenom,QString sexe,QString email,int num_tel,int pts_fid)
{
    QSqlQuery q;
    QString res1=QString::number(id);
    QString res2=QString::number(num_tel);
    QString res3=QString::number(pts_fid);
    q.prepare("insert into clients (id,nom,prenom,sexe,email,num_tel,pts_fid)""values(:id,:nom,:prenom,:sexe,:email,:num_tel,:pts_fid)");
    q.bindValue(":id",res1);
    q.bindValue(":nom",nom);
    q.bindValue(":prenom",prenom);
    q.bindValue(":sexe",sexe);
    q.bindValue(":email",email);
    q.bindValue(":num_tel",res2);
    q.bindValue(":pts_fid",res3);

    return q.exec();
}

bool Clients::Supprimer(int id)
{
    QSqlQuery q;
    QString res1=QString::number(id);
    q.prepare("delete from clients where id=:id ");
    q.bindValue(":id",res1);
    return q.exec();

}

QSqlQueryModel* Clients::Afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
    model->setQuery("select * from clients");
    model->setHeaderData(0,Qt::Horizontal,  QObject::tr("id"));
    model->setHeaderData(1,Qt::Horizontal,  QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,  QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,  QObject::tr("sexe"));
    model->setHeaderData(4,Qt::Horizontal,  QObject::tr("email"));
    model->setHeaderData(5,Qt::Horizontal,  QObject::tr("num_tel"));
    model->setHeaderData(6,Qt::Horizontal,  QObject::tr("pts_fid"));

    return model;

}


bool Clients::Modifier(int id,QString nom,QString prenom,QString sexe,QString email,int num_tel,int pts_fid)
{
    QSqlQuery q;
    QString res1=QString::number(id);
    QString res2=QString::number(num_tel);
    QString res3=QString::number(pts_fid);
    q.prepare("update clients set id=:id,nom=:nom,prenom=:prenom,sexe=:sexe,email=:email,num_tel=:num_tel,pts_fid=:pts_fid where id=:id");
    q.bindValue(":id",res1);
    q.bindValue(":nom",nom);
    q.bindValue(":prenom",prenom);
    q.bindValue(":sexe",sexe);
    q.bindValue(":email",email);
    q.bindValue(":num_tel",res2);
    q.bindValue(":pts_fid",res3);
    return q.exec();

}


//stat------------------------------------------------
  stat_combo::stat_combo(QWidget *parent) :
      QDialog(parent),
      ui(new Ui::stat_combo)
  {
      ui->setupUi(this);
  }

  stat_combo::~stat_combo()
  {
      delete ui;
  }


  //bar chart
  void stat_combo::choix_bar()
  {
  QSqlQuery q1,q2,q3;
  qreal tot=0,c1=0,c2=0;

  q1.prepare("SELECT * FROM clients");
  q1.exec();

  q2.prepare("SELECT * FROM clients where(pts_fid!=0)");
  q2.exec();

  q3.prepare("SELECT * FROM clients WHERE (pts_fid=0)");
  q3.exec();


  while (q1.next()){tot++;}
  while (q2.next()){c1++;}
  while (q3.next()){c2++;}

  c1=c1/tot;
  c2=c2/tot;


  // Assign names to the set of bars used
          QBarSet *set0 = new QBarSet("ayant des pts de fid");
          QBarSet *set1 = new QBarSet("non pas des pts de fid");

          // Assign values for each bar
          *set0 << c1;
          *set1 << c2;


          // Add all sets of data to the chart as a whole
          // 1. Bar Chart
          QBarSeries *series = new QBarSeries();

          // 2. Stacked bar chart
          series->append(set0);
          series->append(set1);



          // Used to define the bar chart to display, title
          // legend,
          QChart *chart = new QChart();

          // Add the chart
          chart->addSeries(series);


          // Adds categories to the axes
         QBarCategoryAxis *axis = new QBarCategoryAxis();



          // 1. Bar chart
         chart->setAxisX(axis, series);

          // Used to change the palette
          QPalette pal = qApp->palette();

          // Change the color around the chart widget and text
          pal.setColor(QPalette::Window, QRgb(0xffffff));
          pal.setColor(QPalette::WindowText, QRgb(0xf00020));

          // Apply palette changes to the application
          qApp->setPalette(pal);


  // Used to display the chart

  chartView = new QChartView(chart,ui->label_stat);
  chartView->setRenderHint(QPainter::Antialiasing);
  chartView->setMinimumSize(400,400);
  chartView->show();
  }

  //pie chart
      void stat_combo::choix_pie()
      {
      QSqlQuery q1,q2,q3;
      qreal tot=0,c1=0,c2=0;

      q1.prepare("SELECT * FROM clients");
      q1.exec();

      q2.prepare("SELECT * FROM clients WHERE (sexe='male')");
      q2.exec();

      q3.prepare("SELECT * FROM clients where (sexe='femelle')");
      q3.exec();


      while (q1.next()){tot++;}
      while (q2.next()){c1++;}
      while (q3.next()){c2++;}

      c1=c1/tot;
      c2=c2/tot;

      // Define slices and percentage of whole they take up
      QPieSeries *series = new QPieSeries();
      series->append("Male",c1);
      series->append("Femelle",c2);




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

      QSqlQueryModel * Clients::trierAc()
        {
            QSqlQuery * q = new  QSqlQuery ();
                     QSqlQueryModel * model = new  QSqlQueryModel ();
                     q->prepare("SELECT * FROM clients order by id ASC");
                     q->exec();
                     model->setQuery(*q);
                     model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
                    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
                    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
                      model->setHeaderData(4, Qt::Horizontal, QObject::tr("sexe"));
                       model->setHeaderData(5, Qt::Horizontal, QObject::tr("email"));
                        model->setHeaderData(5, Qt::Horizontal, QObject::tr("num_tel"));
                        model->setHeaderData(6, Qt::Horizontal, QObject::tr("pts_fid"));


                     return model;

        }

        QSqlQueryModel * Clients::trierDec()
        {
                  QSqlQuery * q = new  QSqlQuery ();
                         QSqlQueryModel * model = new  QSqlQueryModel ();
                         q->prepare("SELECT * FROM clients order by id DESC");
                         q->exec();
                         model->setQuery(*q);
                         model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
                        model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
                        model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
                          model->setHeaderData(4, Qt::Horizontal, QObject::tr("sexe"));
                           model->setHeaderData(5, Qt::Horizontal, QObject::tr("email"));
                            model->setHeaderData(5, Qt::Horizontal, QObject::tr("num_tel"));
                            model->setHeaderData(6, Qt::Horizontal, QObject::tr("pts_fid"));

                         return model;
        }


      QSqlQueryModel * Clients::rechercher_clients(int id)
           {
              QString res=QString::number(id);

                  QSqlQuery qry;


                   qry.prepare("SELECT * FROM clients where id=:id");
                   qry.bindValue(":id",res);
                   qry.exec();
                   QSqlQueryModel *model= new QSqlQueryModel;
              model->setQuery(qry);

              model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
             model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
             model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
               model->setHeaderData(4, Qt::Horizontal, QObject::tr("sexe"));
                model->setHeaderData(5, Qt::Horizontal, QObject::tr("email"));
                 model->setHeaderData(5, Qt::Horizontal, QObject::tr("num_tel"));
                 model->setHeaderData(6, Qt::Horizontal, QObject::tr("pts_fid"));



           return model ;
         }


