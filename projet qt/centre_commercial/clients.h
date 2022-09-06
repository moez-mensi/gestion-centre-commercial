

#ifndef CLIENTS_H
#define CLIENTS_H
#include <QString>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QTableWidget>


class Clients
{
private:
    int id;
    QString nom;
    QString prenom;
    QString sexe;
    QString email;
    int num_tel;
    int pts_fid;




    //int,QString,QString,QString,QString,int,int


public:
    Clients();

    int Getid() { return id;};
        void Setid(int i){ id=i;};

    QString Getnom() { return nom;};
        void Setnom(QString n){ nom=n;};

    QString Getprenom() { return prenom;};
        void Setprenom(QString p){ prenom=p;};

    QString Getsexe() { return sexe;};
        void Setsexe(QString s){ sexe=s;};

    QString Getemail() { return email;};
        void Setemail(QString e){ email=e;};

    int Getnum_tel() { return num_tel;};
        void Setnum_tel(int num){ num_tel=num;};

    int Getpts_fid() { return pts_fid;};
        void Setpts_fid(int pts){ pts_fid=pts;};

        //CRUD
        bool Ajouter(int,QString,QString,QString,QString,int,int);
        bool Modifier(int,QString,QString,QString,QString,int,int);
        bool Supprimer(int);
        QSqlQueryModel* Afficher();
          ~Clients(){}
        QSqlQueryModel *trierAc();
        QSqlQueryModel * trierDec();
        QSqlQueryModel * rechercher_clients(int id);




};

#endif // CLIENTS_H
