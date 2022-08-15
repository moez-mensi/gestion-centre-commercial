#ifndef MAGASINS_H
#define MAGASINS_H
#include <QString>


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


};

#endif // MAGASINS_H
