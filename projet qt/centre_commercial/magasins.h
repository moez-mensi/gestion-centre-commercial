#ifndef MAGASINS_H
#define MAGASINS_H
#include <QString>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlQueryModel>



class Magasins
{

private:
    int id;
    QString nom;
    QString categorie;
    QString location;


public:
    Magasins();

    int Getid() { return id;};
    void Setid(int i){ id=i;};

    QString Getnom() { return nom;};
    void Setnom(QString n){ nom=n;};

    QString Getcategorie() { return categorie;};
    void Setcategorie(QString c){ categorie=c;};

    QString Getlocation() { return location;};
    void Setclocation(QString l){ location=l;};

    //CRUD
    bool Ajouter(int,QString,QString,QString);
    bool Modifier(int,QString,QString,QString);
    bool Supprimer(int);
    QSqlQueryModel* Afficher();

};

#endif // MAGASINS_H
