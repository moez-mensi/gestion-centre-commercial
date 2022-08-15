#ifndef CLIENTS_H
#define CLIENTS_H
#include <QString>

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


};

#endif // CLIENTS_H
