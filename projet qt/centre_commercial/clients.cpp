#include "clients.h"

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





