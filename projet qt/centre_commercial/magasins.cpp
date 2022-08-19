#include "magasins.h"

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
    q.prepare("update magasins set id=:id,nom=:nom,categorie=:categorie,location=:location");
    q.bindValue(":id",res);
    q.bindValue(":nom",nom);
    q.bindValue(":categorie",categorie);
    q.bindValue(":location",location);
    return q.exec();

}





