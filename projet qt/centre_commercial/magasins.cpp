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
