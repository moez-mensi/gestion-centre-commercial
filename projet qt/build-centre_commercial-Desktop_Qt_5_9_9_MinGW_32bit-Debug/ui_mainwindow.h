/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Clients;
    QTabWidget *Tabs_Mag;
    QWidget *Ajout_Mag;
    QPushButton *Ajout_Mag_btn;
    QWidget *verticalLayoutWidget_12;
    QVBoxLayout *Magasin_inputs_4;
    QLineEdit *ID_Mag_2;
    QLineEdit *Nom_Mag_2;
    QLineEdit *Categorie_Mag_2;
    QLineEdit *Location_Mag_2;
    QWidget *verticalLayoutWidget_11;
    QVBoxLayout *Magasin_inputs_3;
    QLabel *ID_Magasin_2;
    QLabel *Nom_Magasin_2;
    QLabel *Categorie_2;
    QLabel *Location_2;
    QWidget *Modif_Mag;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *Magasin_inputs_2;
    QLineEdit *ID_Mag;
    QLineEdit *Nom_Mag;
    QLineEdit *Categorie_Mag;
    QLineEdit *Location_Mag;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *Magasin_inputs;
    QLabel *ID_Magasin;
    QLabel *Nom_Magasin;
    QLabel *Categorie;
    QLabel *Location;
    QPushButton *Modif_Mag_btn;
    QWidget *tab;
    QPushButton *Supp_Mag_btn;
    QWidget *verticalLayoutWidget_13;
    QVBoxLayout *Magasin_inputs_5;
    QLabel *ID_Magasin_3;
    QWidget *verticalLayoutWidget_14;
    QVBoxLayout *Magasin_inputs_6;
    QLineEdit *Location_Mag_3;
    QWidget *tab_2;
    QTableView *tableView;
    QPushButton *pdf_btn;
    QPushButton *refresh;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *Magasin;
    QTabWidget *Tabs_Cli;
    QWidget *Ajout_Cli;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *Client_inputs_3;
    QLineEdit *ID_cli_2;
    QLineEdit *Nom_Cli_2;
    QLineEdit *Prenom_Cli_2;
    QLineEdit *Sexe_Cli_2;
    QLineEdit *Email_Cli_2;
    QLineEdit *Num_tel_Cli_2;
    QLineEdit *Point_fid_Cli_2;
    QPushButton *Ajout_Cli_btn;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *Client_inputs_4;
    QLabel *ID_Client_2;
    QLabel *Nom_Client_2;
    QLabel *Prenom_2;
    QLabel *Sexe_2;
    QLabel *Email_2;
    QLabel *Num_tel_2;
    QLabel *Point_fid_2;
    QWidget *Modif_Cli;
    QPushButton *Modif_Cli_btn;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *Client_inputs_2;
    QLineEdit *ID_cli;
    QLineEdit *Nom_Cli;
    QLineEdit *Prenom_Cli;
    QLineEdit *Sexe_Cli;
    QLineEdit *Email_Cli;
    QLineEdit *Num_tel_Cli;
    QLineEdit *Point_fid_Cli;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *Client_inputs;
    QLabel *ID_Client;
    QLabel *Nom_Client;
    QLabel *Prenom;
    QLabel *Sexe;
    QLabel *Email;
    QLabel *Num_tel;
    QLabel *Point_fid;
    QMenuBar *menubar;
    QMenu *menuCentre_Commercial;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 781, 551));
        Clients = new QWidget();
        Clients->setObjectName(QStringLiteral("Clients"));
        Clients->setEnabled(true);
        Tabs_Mag = new QTabWidget(Clients);
        Tabs_Mag->setObjectName(QStringLiteral("Tabs_Mag"));
        Tabs_Mag->setGeometry(QRect(20, 30, 701, 431));
        Tabs_Mag->setTabShape(QTabWidget::Triangular);
        Tabs_Mag->setTabsClosable(false);
        Ajout_Mag = new QWidget();
        Ajout_Mag->setObjectName(QStringLiteral("Ajout_Mag"));
        Ajout_Mag_btn = new QPushButton(Ajout_Mag);
        Ajout_Mag_btn->setObjectName(QStringLiteral("Ajout_Mag_btn"));
        Ajout_Mag_btn->setGeometry(QRect(410, 360, 93, 28));
        verticalLayoutWidget_12 = new QWidget(Ajout_Mag);
        verticalLayoutWidget_12->setObjectName(QStringLiteral("verticalLayoutWidget_12"));
        verticalLayoutWidget_12->setGeometry(QRect(110, 10, 81, 381));
        Magasin_inputs_4 = new QVBoxLayout(verticalLayoutWidget_12);
        Magasin_inputs_4->setObjectName(QStringLiteral("Magasin_inputs_4"));
        Magasin_inputs_4->setContentsMargins(0, 0, 0, 0);
        ID_Mag_2 = new QLineEdit(verticalLayoutWidget_12);
        ID_Mag_2->setObjectName(QStringLiteral("ID_Mag_2"));

        Magasin_inputs_4->addWidget(ID_Mag_2);

        Nom_Mag_2 = new QLineEdit(verticalLayoutWidget_12);
        Nom_Mag_2->setObjectName(QStringLiteral("Nom_Mag_2"));

        Magasin_inputs_4->addWidget(Nom_Mag_2);

        Categorie_Mag_2 = new QLineEdit(verticalLayoutWidget_12);
        Categorie_Mag_2->setObjectName(QStringLiteral("Categorie_Mag_2"));

        Magasin_inputs_4->addWidget(Categorie_Mag_2);

        Location_Mag_2 = new QLineEdit(verticalLayoutWidget_12);
        Location_Mag_2->setObjectName(QStringLiteral("Location_Mag_2"));

        Magasin_inputs_4->addWidget(Location_Mag_2);

        verticalLayoutWidget_11 = new QWidget(Ajout_Mag);
        verticalLayoutWidget_11->setObjectName(QStringLiteral("verticalLayoutWidget_11"));
        verticalLayoutWidget_11->setGeometry(QRect(40, 30, 71, 331));
        Magasin_inputs_3 = new QVBoxLayout(verticalLayoutWidget_11);
        Magasin_inputs_3->setObjectName(QStringLiteral("Magasin_inputs_3"));
        Magasin_inputs_3->setContentsMargins(0, 0, 0, 0);
        ID_Magasin_2 = new QLabel(verticalLayoutWidget_11);
        ID_Magasin_2->setObjectName(QStringLiteral("ID_Magasin_2"));

        Magasin_inputs_3->addWidget(ID_Magasin_2);

        Nom_Magasin_2 = new QLabel(verticalLayoutWidget_11);
        Nom_Magasin_2->setObjectName(QStringLiteral("Nom_Magasin_2"));

        Magasin_inputs_3->addWidget(Nom_Magasin_2);

        Categorie_2 = new QLabel(verticalLayoutWidget_11);
        Categorie_2->setObjectName(QStringLiteral("Categorie_2"));

        Magasin_inputs_3->addWidget(Categorie_2);

        Location_2 = new QLabel(verticalLayoutWidget_11);
        Location_2->setObjectName(QStringLiteral("Location_2"));

        Magasin_inputs_3->addWidget(Location_2);

        Tabs_Mag->addTab(Ajout_Mag, QString());
        Modif_Mag = new QWidget();
        Modif_Mag->setObjectName(QStringLiteral("Modif_Mag"));
        verticalLayoutWidget_2 = new QWidget(Modif_Mag);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(170, 10, 81, 381));
        Magasin_inputs_2 = new QVBoxLayout(verticalLayoutWidget_2);
        Magasin_inputs_2->setObjectName(QStringLiteral("Magasin_inputs_2"));
        Magasin_inputs_2->setContentsMargins(0, 0, 0, 0);
        ID_Mag = new QLineEdit(verticalLayoutWidget_2);
        ID_Mag->setObjectName(QStringLiteral("ID_Mag"));

        Magasin_inputs_2->addWidget(ID_Mag);

        Nom_Mag = new QLineEdit(verticalLayoutWidget_2);
        Nom_Mag->setObjectName(QStringLiteral("Nom_Mag"));

        Magasin_inputs_2->addWidget(Nom_Mag);

        Categorie_Mag = new QLineEdit(verticalLayoutWidget_2);
        Categorie_Mag->setObjectName(QStringLiteral("Categorie_Mag"));

        Magasin_inputs_2->addWidget(Categorie_Mag);

        Location_Mag = new QLineEdit(verticalLayoutWidget_2);
        Location_Mag->setObjectName(QStringLiteral("Location_Mag"));

        Magasin_inputs_2->addWidget(Location_Mag);

        verticalLayoutWidget = new QWidget(Modif_Mag);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(100, 30, 71, 331));
        Magasin_inputs = new QVBoxLayout(verticalLayoutWidget);
        Magasin_inputs->setObjectName(QStringLiteral("Magasin_inputs"));
        Magasin_inputs->setContentsMargins(0, 0, 0, 0);
        ID_Magasin = new QLabel(verticalLayoutWidget);
        ID_Magasin->setObjectName(QStringLiteral("ID_Magasin"));

        Magasin_inputs->addWidget(ID_Magasin);

        Nom_Magasin = new QLabel(verticalLayoutWidget);
        Nom_Magasin->setObjectName(QStringLiteral("Nom_Magasin"));

        Magasin_inputs->addWidget(Nom_Magasin);

        Categorie = new QLabel(verticalLayoutWidget);
        Categorie->setObjectName(QStringLiteral("Categorie"));

        Magasin_inputs->addWidget(Categorie);

        Location = new QLabel(verticalLayoutWidget);
        Location->setObjectName(QStringLiteral("Location"));

        Magasin_inputs->addWidget(Location);

        Modif_Mag_btn = new QPushButton(Modif_Mag);
        Modif_Mag_btn->setObjectName(QStringLiteral("Modif_Mag_btn"));
        Modif_Mag_btn->setGeometry(QRect(450, 360, 93, 28));
        Tabs_Mag->addTab(Modif_Mag, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        Supp_Mag_btn = new QPushButton(tab);
        Supp_Mag_btn->setObjectName(QStringLiteral("Supp_Mag_btn"));
        Supp_Mag_btn->setGeometry(QRect(350, 240, 93, 28));
        verticalLayoutWidget_13 = new QWidget(tab);
        verticalLayoutWidget_13->setObjectName(QStringLiteral("verticalLayoutWidget_13"));
        verticalLayoutWidget_13->setGeometry(QRect(90, 140, 61, 41));
        Magasin_inputs_5 = new QVBoxLayout(verticalLayoutWidget_13);
        Magasin_inputs_5->setObjectName(QStringLiteral("Magasin_inputs_5"));
        Magasin_inputs_5->setContentsMargins(0, 0, 0, 0);
        ID_Magasin_3 = new QLabel(verticalLayoutWidget_13);
        ID_Magasin_3->setObjectName(QStringLiteral("ID_Magasin_3"));

        Magasin_inputs_5->addWidget(ID_Magasin_3);

        verticalLayoutWidget_14 = new QWidget(tab);
        verticalLayoutWidget_14->setObjectName(QStringLiteral("verticalLayoutWidget_14"));
        verticalLayoutWidget_14->setGeometry(QRect(150, 130, 81, 71));
        Magasin_inputs_6 = new QVBoxLayout(verticalLayoutWidget_14);
        Magasin_inputs_6->setObjectName(QStringLiteral("Magasin_inputs_6"));
        Magasin_inputs_6->setContentsMargins(0, 0, 0, 0);
        Location_Mag_3 = new QLineEdit(verticalLayoutWidget_14);
        Location_Mag_3->setObjectName(QStringLiteral("Location_Mag_3"));

        Magasin_inputs_6->addWidget(Location_Mag_3);

        Tabs_Mag->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableView = new QTableView(tab_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 30, 631, 251));
        pdf_btn = new QPushButton(tab_2);
        pdf_btn->setObjectName(QStringLiteral("pdf_btn"));
        pdf_btn->setGeometry(QRect(290, 340, 131, 41));
        refresh = new QPushButton(tab_2);
        refresh->setObjectName(QStringLiteral("refresh"));
        refresh->setGeometry(QRect(530, 290, 131, 41));
        Tabs_Mag->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        Tabs_Mag->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        Tabs_Mag->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        Tabs_Mag->addTab(tab_5, QString());
        tabWidget->addTab(Clients, QString());
        Magasin = new QWidget();
        Magasin->setObjectName(QStringLiteral("Magasin"));
        Tabs_Cli = new QTabWidget(Magasin);
        Tabs_Cli->setObjectName(QStringLiteral("Tabs_Cli"));
        Tabs_Cli->setGeometry(QRect(60, 40, 671, 431));
        Ajout_Cli = new QWidget();
        Ajout_Cli->setObjectName(QStringLiteral("Ajout_Cli"));
        verticalLayoutWidget_5 = new QWidget(Ajout_Cli);
        verticalLayoutWidget_5->setObjectName(QStringLiteral("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(130, 10, 81, 371));
        Client_inputs_3 = new QVBoxLayout(verticalLayoutWidget_5);
        Client_inputs_3->setObjectName(QStringLiteral("Client_inputs_3"));
        Client_inputs_3->setContentsMargins(0, 0, 0, 0);
        ID_cli_2 = new QLineEdit(verticalLayoutWidget_5);
        ID_cli_2->setObjectName(QStringLiteral("ID_cli_2"));

        Client_inputs_3->addWidget(ID_cli_2);

        Nom_Cli_2 = new QLineEdit(verticalLayoutWidget_5);
        Nom_Cli_2->setObjectName(QStringLiteral("Nom_Cli_2"));

        Client_inputs_3->addWidget(Nom_Cli_2);

        Prenom_Cli_2 = new QLineEdit(verticalLayoutWidget_5);
        Prenom_Cli_2->setObjectName(QStringLiteral("Prenom_Cli_2"));

        Client_inputs_3->addWidget(Prenom_Cli_2);

        Sexe_Cli_2 = new QLineEdit(verticalLayoutWidget_5);
        Sexe_Cli_2->setObjectName(QStringLiteral("Sexe_Cli_2"));

        Client_inputs_3->addWidget(Sexe_Cli_2);

        Email_Cli_2 = new QLineEdit(verticalLayoutWidget_5);
        Email_Cli_2->setObjectName(QStringLiteral("Email_Cli_2"));

        Client_inputs_3->addWidget(Email_Cli_2);

        Num_tel_Cli_2 = new QLineEdit(verticalLayoutWidget_5);
        Num_tel_Cli_2->setObjectName(QStringLiteral("Num_tel_Cli_2"));

        Client_inputs_3->addWidget(Num_tel_Cli_2);

        Point_fid_Cli_2 = new QLineEdit(verticalLayoutWidget_5);
        Point_fid_Cli_2->setObjectName(QStringLiteral("Point_fid_Cli_2"));

        Client_inputs_3->addWidget(Point_fid_Cli_2);

        Ajout_Cli_btn = new QPushButton(Ajout_Cli);
        Ajout_Cli_btn->setObjectName(QStringLiteral("Ajout_Cli_btn"));
        Ajout_Cli_btn->setGeometry(QRect(370, 350, 93, 28));
        verticalLayoutWidget_6 = new QWidget(Ajout_Cli);
        verticalLayoutWidget_6->setObjectName(QStringLiteral("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(40, 20, 91, 351));
        Client_inputs_4 = new QVBoxLayout(verticalLayoutWidget_6);
        Client_inputs_4->setObjectName(QStringLiteral("Client_inputs_4"));
        Client_inputs_4->setContentsMargins(0, 0, 0, 0);
        ID_Client_2 = new QLabel(verticalLayoutWidget_6);
        ID_Client_2->setObjectName(QStringLiteral("ID_Client_2"));

        Client_inputs_4->addWidget(ID_Client_2);

        Nom_Client_2 = new QLabel(verticalLayoutWidget_6);
        Nom_Client_2->setObjectName(QStringLiteral("Nom_Client_2"));

        Client_inputs_4->addWidget(Nom_Client_2);

        Prenom_2 = new QLabel(verticalLayoutWidget_6);
        Prenom_2->setObjectName(QStringLiteral("Prenom_2"));

        Client_inputs_4->addWidget(Prenom_2);

        Sexe_2 = new QLabel(verticalLayoutWidget_6);
        Sexe_2->setObjectName(QStringLiteral("Sexe_2"));

        Client_inputs_4->addWidget(Sexe_2);

        Email_2 = new QLabel(verticalLayoutWidget_6);
        Email_2->setObjectName(QStringLiteral("Email_2"));

        Client_inputs_4->addWidget(Email_2);

        Num_tel_2 = new QLabel(verticalLayoutWidget_6);
        Num_tel_2->setObjectName(QStringLiteral("Num_tel_2"));

        Client_inputs_4->addWidget(Num_tel_2);

        Point_fid_2 = new QLabel(verticalLayoutWidget_6);
        Point_fid_2->setObjectName(QStringLiteral("Point_fid_2"));

        Client_inputs_4->addWidget(Point_fid_2);

        Tabs_Cli->addTab(Ajout_Cli, QString());
        Modif_Cli = new QWidget();
        Modif_Cli->setObjectName(QStringLiteral("Modif_Cli"));
        Modif_Cli_btn = new QPushButton(Modif_Cli);
        Modif_Cli_btn->setObjectName(QStringLiteral("Modif_Cli_btn"));
        Modif_Cli_btn->setGeometry(QRect(360, 350, 93, 28));
        verticalLayoutWidget_4 = new QWidget(Modif_Cli);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(120, 10, 81, 371));
        Client_inputs_2 = new QVBoxLayout(verticalLayoutWidget_4);
        Client_inputs_2->setObjectName(QStringLiteral("Client_inputs_2"));
        Client_inputs_2->setContentsMargins(0, 0, 0, 0);
        ID_cli = new QLineEdit(verticalLayoutWidget_4);
        ID_cli->setObjectName(QStringLiteral("ID_cli"));

        Client_inputs_2->addWidget(ID_cli);

        Nom_Cli = new QLineEdit(verticalLayoutWidget_4);
        Nom_Cli->setObjectName(QStringLiteral("Nom_Cli"));

        Client_inputs_2->addWidget(Nom_Cli);

        Prenom_Cli = new QLineEdit(verticalLayoutWidget_4);
        Prenom_Cli->setObjectName(QStringLiteral("Prenom_Cli"));

        Client_inputs_2->addWidget(Prenom_Cli);

        Sexe_Cli = new QLineEdit(verticalLayoutWidget_4);
        Sexe_Cli->setObjectName(QStringLiteral("Sexe_Cli"));

        Client_inputs_2->addWidget(Sexe_Cli);

        Email_Cli = new QLineEdit(verticalLayoutWidget_4);
        Email_Cli->setObjectName(QStringLiteral("Email_Cli"));

        Client_inputs_2->addWidget(Email_Cli);

        Num_tel_Cli = new QLineEdit(verticalLayoutWidget_4);
        Num_tel_Cli->setObjectName(QStringLiteral("Num_tel_Cli"));

        Client_inputs_2->addWidget(Num_tel_Cli);

        Point_fid_Cli = new QLineEdit(verticalLayoutWidget_4);
        Point_fid_Cli->setObjectName(QStringLiteral("Point_fid_Cli"));

        Client_inputs_2->addWidget(Point_fid_Cli);

        verticalLayoutWidget_3 = new QWidget(Modif_Cli);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(30, 20, 91, 351));
        Client_inputs = new QVBoxLayout(verticalLayoutWidget_3);
        Client_inputs->setObjectName(QStringLiteral("Client_inputs"));
        Client_inputs->setContentsMargins(0, 0, 0, 0);
        ID_Client = new QLabel(verticalLayoutWidget_3);
        ID_Client->setObjectName(QStringLiteral("ID_Client"));

        Client_inputs->addWidget(ID_Client);

        Nom_Client = new QLabel(verticalLayoutWidget_3);
        Nom_Client->setObjectName(QStringLiteral("Nom_Client"));

        Client_inputs->addWidget(Nom_Client);

        Prenom = new QLabel(verticalLayoutWidget_3);
        Prenom->setObjectName(QStringLiteral("Prenom"));

        Client_inputs->addWidget(Prenom);

        Sexe = new QLabel(verticalLayoutWidget_3);
        Sexe->setObjectName(QStringLiteral("Sexe"));

        Client_inputs->addWidget(Sexe);

        Email = new QLabel(verticalLayoutWidget_3);
        Email->setObjectName(QStringLiteral("Email"));

        Client_inputs->addWidget(Email);

        Num_tel = new QLabel(verticalLayoutWidget_3);
        Num_tel->setObjectName(QStringLiteral("Num_tel"));

        Client_inputs->addWidget(Num_tel);

        Point_fid = new QLabel(verticalLayoutWidget_3);
        Point_fid->setObjectName(QStringLiteral("Point_fid"));

        Client_inputs->addWidget(Point_fid);

        Tabs_Cli->addTab(Modif_Cli, QString());
        tabWidget->addTab(Magasin, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuCentre_Commercial = new QMenu(menubar);
        menuCentre_Commercial->setObjectName(QStringLiteral("menuCentre_Commercial"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCentre_Commercial->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        Tabs_Mag->setCurrentIndex(1);
        Tabs_Cli->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        Ajout_Mag_btn->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        ID_Magasin_2->setText(QApplication::translate("MainWindow", "ID :", Q_NULLPTR));
        Nom_Magasin_2->setText(QApplication::translate("MainWindow", "Nom :", Q_NULLPTR));
        Categorie_2->setText(QApplication::translate("MainWindow", "Categorie :", Q_NULLPTR));
        Location_2->setText(QApplication::translate("MainWindow", "Location :", Q_NULLPTR));
        Tabs_Mag->setTabText(Tabs_Mag->indexOf(Ajout_Mag), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        ID_Magasin->setText(QApplication::translate("MainWindow", "ID :", Q_NULLPTR));
        Nom_Magasin->setText(QApplication::translate("MainWindow", "Nom :", Q_NULLPTR));
        Categorie->setText(QApplication::translate("MainWindow", "Categorie :", Q_NULLPTR));
        Location->setText(QApplication::translate("MainWindow", "Location :", Q_NULLPTR));
        Modif_Mag_btn->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        Tabs_Mag->setTabText(Tabs_Mag->indexOf(Modif_Mag), QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        Supp_Mag_btn->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        ID_Magasin_3->setText(QApplication::translate("MainWindow", "ID :", Q_NULLPTR));
        Tabs_Mag->setTabText(Tabs_Mag->indexOf(tab), QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pdf_btn->setText(QApplication::translate("MainWindow", "Enregistrer en pdf", Q_NULLPTR));
        refresh->setText(QApplication::translate("MainWindow", "Refresh", Q_NULLPTR));
        Tabs_Mag->setTabText(Tabs_Mag->indexOf(tab_2), QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        Tabs_Mag->setTabText(Tabs_Mag->indexOf(tab_3), QApplication::translate("MainWindow", "Tri", Q_NULLPTR));
        Tabs_Mag->setTabText(Tabs_Mag->indexOf(tab_4), QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        Tabs_Mag->setTabText(Tabs_Mag->indexOf(tab_5), QApplication::translate("MainWindow", "Statistique", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Clients), QApplication::translate("MainWindow", "Magasins", Q_NULLPTR));
        Ajout_Cli_btn->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        ID_Client_2->setText(QApplication::translate("MainWindow", "ID :", Q_NULLPTR));
        Nom_Client_2->setText(QApplication::translate("MainWindow", "Nom :", Q_NULLPTR));
        Prenom_2->setText(QApplication::translate("MainWindow", "Prenom :", Q_NULLPTR));
        Sexe_2->setText(QApplication::translate("MainWindow", "Sexe :", Q_NULLPTR));
        Email_2->setText(QApplication::translate("MainWindow", "Email :", Q_NULLPTR));
        Num_tel_2->setText(QApplication::translate("MainWindow", "Numero Tel :", Q_NULLPTR));
        Point_fid_2->setText(QApplication::translate("MainWindow", "Points Fidelite :", Q_NULLPTR));
        Tabs_Cli->setTabText(Tabs_Cli->indexOf(Ajout_Cli), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        Modif_Cli_btn->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        ID_Client->setText(QApplication::translate("MainWindow", "ID :", Q_NULLPTR));
        Nom_Client->setText(QApplication::translate("MainWindow", "Nom :", Q_NULLPTR));
        Prenom->setText(QApplication::translate("MainWindow", "Prenom :", Q_NULLPTR));
        Sexe->setText(QApplication::translate("MainWindow", "Sexe :", Q_NULLPTR));
        Email->setText(QApplication::translate("MainWindow", "Email :", Q_NULLPTR));
        Num_tel->setText(QApplication::translate("MainWindow", "Numero Tel :", Q_NULLPTR));
        Point_fid->setText(QApplication::translate("MainWindow", "Points Fidelite :", Q_NULLPTR));
        Tabs_Cli->setTabText(Tabs_Cli->indexOf(Modif_Cli), QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Magasin), QApplication::translate("MainWindow", "Clients", Q_NULLPTR));
        menuCentre_Commercial->setTitle(QApplication::translate("MainWindow", "Centre Commercial", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
