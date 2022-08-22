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
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_5;
    QWidget *Magasin;
    QTabWidget *Tabs_Clts;
    QWidget *Ajout_Mag_5;
    QPushButton *on_Ajout_Mag_btn_5_clicked;
    QWidget *verticalLayoutWidget_15;
    QVBoxLayout *Magasin_inputs_31;
    QLabel *ID_Magasin_16;
    QLabel *Nom_Magasin_11;
    QLabel *Categorie_14;
    QLabel *Categorie_15;
    QLabel *Categorie_16;
    QLabel *Categorie_17;
    QLabel *Location_11;
    QWidget *verticalLayoutWidget_16;
    QVBoxLayout *Magasin_inputs_32;
    QLineEdit *ID_Mag_11;
    QLineEdit *Nom_Mag_11;
    QLineEdit *Categorie_Mag_14;
    QLineEdit *Categorie_Mag_15;
    QLineEdit *Categorie_Mag_16;
    QLineEdit *Categorie_Mag_17;
    QLineEdit *Location_Mag_16;
    QWidget *Modif_Mag_5;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *Magasin_inputs_27;
    QLineEdit *ID_Mag_10;
    QLineEdit *Nom_Mag_10;
    QLineEdit *Categorie_Mag_10;
    QLineEdit *Categorie_Mag_11;
    QLineEdit *Categorie_Mag_12;
    QLineEdit *Categorie_Mag_13;
    QLineEdit *Location_Mag_14;
    QWidget *verticalLayoutWidget_10;
    QVBoxLayout *Magasin_inputs_28;
    QLabel *ID_Magasin_14;
    QLabel *Nom_Magasin_10;
    QLabel *Categorie_10;
    QLabel *Categorie_12;
    QLabel *Categorie_13;
    QLabel *Categorie_11;
    QLabel *Location_10;
    QPushButton *Modif_Mag_btn_5;
    QWidget *tab_21;
    QPushButton *Supp_Mag_btn_5;
    QWidget *verticalLayoutWidget_29;
    QVBoxLayout *Magasin_inputs_29;
    QLabel *ID_Magasin_15;
    QWidget *verticalLayoutWidget_30;
    QVBoxLayout *Magasin_inputs_30;
    QLineEdit *Location_Mag_15;
    QWidget *tab_22;
    QTableView *tableView_5;
    QPushButton *pdf_btn_5;
    QWidget *tab_23;
    QWidget *tab_24;
    QWidget *tab_25;
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
        tabWidget->setGeometry(QRect(10, 10, 781, 551));
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
        verticalLayoutWidget_2->setGeometry(QRect(110, 10, 81, 381));
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
        verticalLayoutWidget->setGeometry(QRect(40, 30, 71, 331));
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
        Tabs_Clts = new QTabWidget(Magasin);
        Tabs_Clts->setObjectName(QStringLiteral("Tabs_Clts"));
        Tabs_Clts->setGeometry(QRect(20, 30, 701, 431));
        Tabs_Clts->setTabShape(QTabWidget::Triangular);
        Tabs_Clts->setTabsClosable(false);
        Ajout_Mag_5 = new QWidget();
        Ajout_Mag_5->setObjectName(QStringLiteral("Ajout_Mag_5"));
        on_Ajout_Mag_btn_5_clicked = new QPushButton(Ajout_Mag_5);
        on_Ajout_Mag_btn_5_clicked->setObjectName(QStringLiteral("on_Ajout_Mag_btn_5_clicked"));
        on_Ajout_Mag_btn_5_clicked->setGeometry(QRect(410, 360, 93, 28));
        verticalLayoutWidget_15 = new QWidget(Ajout_Mag_5);
        verticalLayoutWidget_15->setObjectName(QStringLiteral("verticalLayoutWidget_15"));
        verticalLayoutWidget_15->setGeometry(QRect(50, 40, 71, 331));
        Magasin_inputs_31 = new QVBoxLayout(verticalLayoutWidget_15);
        Magasin_inputs_31->setObjectName(QStringLiteral("Magasin_inputs_31"));
        Magasin_inputs_31->setContentsMargins(0, 0, 0, 0);
        ID_Magasin_16 = new QLabel(verticalLayoutWidget_15);
        ID_Magasin_16->setObjectName(QStringLiteral("ID_Magasin_16"));

        Magasin_inputs_31->addWidget(ID_Magasin_16);

        Nom_Magasin_11 = new QLabel(verticalLayoutWidget_15);
        Nom_Magasin_11->setObjectName(QStringLiteral("Nom_Magasin_11"));

        Magasin_inputs_31->addWidget(Nom_Magasin_11);

        Categorie_14 = new QLabel(verticalLayoutWidget_15);
        Categorie_14->setObjectName(QStringLiteral("Categorie_14"));

        Magasin_inputs_31->addWidget(Categorie_14);

        Categorie_15 = new QLabel(verticalLayoutWidget_15);
        Categorie_15->setObjectName(QStringLiteral("Categorie_15"));

        Magasin_inputs_31->addWidget(Categorie_15);

        Categorie_16 = new QLabel(verticalLayoutWidget_15);
        Categorie_16->setObjectName(QStringLiteral("Categorie_16"));

        Magasin_inputs_31->addWidget(Categorie_16);

        Categorie_17 = new QLabel(verticalLayoutWidget_15);
        Categorie_17->setObjectName(QStringLiteral("Categorie_17"));

        Magasin_inputs_31->addWidget(Categorie_17);

        Location_11 = new QLabel(verticalLayoutWidget_15);
        Location_11->setObjectName(QStringLiteral("Location_11"));

        Magasin_inputs_31->addWidget(Location_11);

        verticalLayoutWidget_16 = new QWidget(Ajout_Mag_5);
        verticalLayoutWidget_16->setObjectName(QStringLiteral("verticalLayoutWidget_16"));
        verticalLayoutWidget_16->setGeometry(QRect(120, 30, 81, 361));
        Magasin_inputs_32 = new QVBoxLayout(verticalLayoutWidget_16);
        Magasin_inputs_32->setObjectName(QStringLiteral("Magasin_inputs_32"));
        Magasin_inputs_32->setContentsMargins(0, 0, 0, 0);
        ID_Mag_11 = new QLineEdit(verticalLayoutWidget_16);
        ID_Mag_11->setObjectName(QStringLiteral("ID_Mag_11"));

        Magasin_inputs_32->addWidget(ID_Mag_11);

        Nom_Mag_11 = new QLineEdit(verticalLayoutWidget_16);
        Nom_Mag_11->setObjectName(QStringLiteral("Nom_Mag_11"));

        Magasin_inputs_32->addWidget(Nom_Mag_11);

        Categorie_Mag_14 = new QLineEdit(verticalLayoutWidget_16);
        Categorie_Mag_14->setObjectName(QStringLiteral("Categorie_Mag_14"));

        Magasin_inputs_32->addWidget(Categorie_Mag_14);

        Categorie_Mag_15 = new QLineEdit(verticalLayoutWidget_16);
        Categorie_Mag_15->setObjectName(QStringLiteral("Categorie_Mag_15"));

        Magasin_inputs_32->addWidget(Categorie_Mag_15);

        Categorie_Mag_16 = new QLineEdit(verticalLayoutWidget_16);
        Categorie_Mag_16->setObjectName(QStringLiteral("Categorie_Mag_16"));

        Magasin_inputs_32->addWidget(Categorie_Mag_16);

        Categorie_Mag_17 = new QLineEdit(verticalLayoutWidget_16);
        Categorie_Mag_17->setObjectName(QStringLiteral("Categorie_Mag_17"));

        Magasin_inputs_32->addWidget(Categorie_Mag_17);

        Location_Mag_16 = new QLineEdit(verticalLayoutWidget_16);
        Location_Mag_16->setObjectName(QStringLiteral("Location_Mag_16"));

        Magasin_inputs_32->addWidget(Location_Mag_16);

        Tabs_Clts->addTab(Ajout_Mag_5, QString());
        Modif_Mag_5 = new QWidget();
        Modif_Mag_5->setObjectName(QStringLiteral("Modif_Mag_5"));
        verticalLayoutWidget_9 = new QWidget(Modif_Mag_5);
        verticalLayoutWidget_9->setObjectName(QStringLiteral("verticalLayoutWidget_9"));
        verticalLayoutWidget_9->setGeometry(QRect(120, 30, 81, 361));
        Magasin_inputs_27 = new QVBoxLayout(verticalLayoutWidget_9);
        Magasin_inputs_27->setObjectName(QStringLiteral("Magasin_inputs_27"));
        Magasin_inputs_27->setContentsMargins(0, 0, 0, 0);
        ID_Mag_10 = new QLineEdit(verticalLayoutWidget_9);
        ID_Mag_10->setObjectName(QStringLiteral("ID_Mag_10"));

        Magasin_inputs_27->addWidget(ID_Mag_10);

        Nom_Mag_10 = new QLineEdit(verticalLayoutWidget_9);
        Nom_Mag_10->setObjectName(QStringLiteral("Nom_Mag_10"));

        Magasin_inputs_27->addWidget(Nom_Mag_10);

        Categorie_Mag_10 = new QLineEdit(verticalLayoutWidget_9);
        Categorie_Mag_10->setObjectName(QStringLiteral("Categorie_Mag_10"));

        Magasin_inputs_27->addWidget(Categorie_Mag_10);

        Categorie_Mag_11 = new QLineEdit(verticalLayoutWidget_9);
        Categorie_Mag_11->setObjectName(QStringLiteral("Categorie_Mag_11"));

        Magasin_inputs_27->addWidget(Categorie_Mag_11);

        Categorie_Mag_12 = new QLineEdit(verticalLayoutWidget_9);
        Categorie_Mag_12->setObjectName(QStringLiteral("Categorie_Mag_12"));

        Magasin_inputs_27->addWidget(Categorie_Mag_12);

        Categorie_Mag_13 = new QLineEdit(verticalLayoutWidget_9);
        Categorie_Mag_13->setObjectName(QStringLiteral("Categorie_Mag_13"));

        Magasin_inputs_27->addWidget(Categorie_Mag_13);

        Location_Mag_14 = new QLineEdit(verticalLayoutWidget_9);
        Location_Mag_14->setObjectName(QStringLiteral("Location_Mag_14"));

        Magasin_inputs_27->addWidget(Location_Mag_14);

        verticalLayoutWidget_10 = new QWidget(Modif_Mag_5);
        verticalLayoutWidget_10->setObjectName(QStringLiteral("verticalLayoutWidget_10"));
        verticalLayoutWidget_10->setGeometry(QRect(50, 40, 71, 331));
        Magasin_inputs_28 = new QVBoxLayout(verticalLayoutWidget_10);
        Magasin_inputs_28->setObjectName(QStringLiteral("Magasin_inputs_28"));
        Magasin_inputs_28->setContentsMargins(0, 0, 0, 0);
        ID_Magasin_14 = new QLabel(verticalLayoutWidget_10);
        ID_Magasin_14->setObjectName(QStringLiteral("ID_Magasin_14"));

        Magasin_inputs_28->addWidget(ID_Magasin_14);

        Nom_Magasin_10 = new QLabel(verticalLayoutWidget_10);
        Nom_Magasin_10->setObjectName(QStringLiteral("Nom_Magasin_10"));

        Magasin_inputs_28->addWidget(Nom_Magasin_10);

        Categorie_10 = new QLabel(verticalLayoutWidget_10);
        Categorie_10->setObjectName(QStringLiteral("Categorie_10"));

        Magasin_inputs_28->addWidget(Categorie_10);

        Categorie_12 = new QLabel(verticalLayoutWidget_10);
        Categorie_12->setObjectName(QStringLiteral("Categorie_12"));

        Magasin_inputs_28->addWidget(Categorie_12);

        Categorie_13 = new QLabel(verticalLayoutWidget_10);
        Categorie_13->setObjectName(QStringLiteral("Categorie_13"));

        Magasin_inputs_28->addWidget(Categorie_13);

        Categorie_11 = new QLabel(verticalLayoutWidget_10);
        Categorie_11->setObjectName(QStringLiteral("Categorie_11"));

        Magasin_inputs_28->addWidget(Categorie_11);

        Location_10 = new QLabel(verticalLayoutWidget_10);
        Location_10->setObjectName(QStringLiteral("Location_10"));

        Magasin_inputs_28->addWidget(Location_10);

        Modif_Mag_btn_5 = new QPushButton(Modif_Mag_5);
        Modif_Mag_btn_5->setObjectName(QStringLiteral("Modif_Mag_btn_5"));
        Modif_Mag_btn_5->setGeometry(QRect(450, 360, 93, 28));
        Tabs_Clts->addTab(Modif_Mag_5, QString());
        tab_21 = new QWidget();
        tab_21->setObjectName(QStringLiteral("tab_21"));
        Supp_Mag_btn_5 = new QPushButton(tab_21);
        Supp_Mag_btn_5->setObjectName(QStringLiteral("Supp_Mag_btn_5"));
        Supp_Mag_btn_5->setGeometry(QRect(350, 240, 93, 28));
        verticalLayoutWidget_29 = new QWidget(tab_21);
        verticalLayoutWidget_29->setObjectName(QStringLiteral("verticalLayoutWidget_29"));
        verticalLayoutWidget_29->setGeometry(QRect(90, 140, 61, 41));
        Magasin_inputs_29 = new QVBoxLayout(verticalLayoutWidget_29);
        Magasin_inputs_29->setObjectName(QStringLiteral("Magasin_inputs_29"));
        Magasin_inputs_29->setContentsMargins(0, 0, 0, 0);
        ID_Magasin_15 = new QLabel(verticalLayoutWidget_29);
        ID_Magasin_15->setObjectName(QStringLiteral("ID_Magasin_15"));

        Magasin_inputs_29->addWidget(ID_Magasin_15);

        verticalLayoutWidget_30 = new QWidget(tab_21);
        verticalLayoutWidget_30->setObjectName(QStringLiteral("verticalLayoutWidget_30"));
        verticalLayoutWidget_30->setGeometry(QRect(150, 130, 81, 71));
        Magasin_inputs_30 = new QVBoxLayout(verticalLayoutWidget_30);
        Magasin_inputs_30->setObjectName(QStringLiteral("Magasin_inputs_30"));
        Magasin_inputs_30->setContentsMargins(0, 0, 0, 0);
        Location_Mag_15 = new QLineEdit(verticalLayoutWidget_30);
        Location_Mag_15->setObjectName(QStringLiteral("Location_Mag_15"));

        Magasin_inputs_30->addWidget(Location_Mag_15);

        Tabs_Clts->addTab(tab_21, QString());
        tab_22 = new QWidget();
        tab_22->setObjectName(QStringLiteral("tab_22"));
        tableView_5 = new QTableView(tab_22);
        tableView_5->setObjectName(QStringLiteral("tableView_5"));
        tableView_5->setGeometry(QRect(30, 30, 631, 251));
        pdf_btn_5 = new QPushButton(tab_22);
        pdf_btn_5->setObjectName(QStringLiteral("pdf_btn_5"));
        pdf_btn_5->setGeometry(QRect(290, 340, 131, 41));
        Tabs_Clts->addTab(tab_22, QString());
        tab_23 = new QWidget();
        tab_23->setObjectName(QStringLiteral("tab_23"));
        Tabs_Clts->addTab(tab_23, QString());
        tab_24 = new QWidget();
        tab_24->setObjectName(QStringLiteral("tab_24"));
        Tabs_Clts->addTab(tab_24, QString());
        tab_25 = new QWidget();
        tab_25->setObjectName(QStringLiteral("tab_25"));
        Tabs_Clts->addTab(tab_25, QString());
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
        Tabs_Mag->setCurrentIndex(3);
        Tabs_Clts->setCurrentIndex(3);


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
        Tabs_Mag->setTabText(Tabs_Mag->indexOf(tab_2), QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        Tabs_Mag->setTabText(Tabs_Mag->indexOf(tab_3), QApplication::translate("MainWindow", "Tri", Q_NULLPTR));
        Tabs_Mag->setTabText(Tabs_Mag->indexOf(tab_4), QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        Tabs_Mag->setTabText(Tabs_Mag->indexOf(tab_5), QApplication::translate("MainWindow", "Statistique", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Clients), QApplication::translate("MainWindow", "Magasins", Q_NULLPTR));
        on_Ajout_Mag_btn_5_clicked->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        ID_Magasin_16->setText(QApplication::translate("MainWindow", "ID :", Q_NULLPTR));
        Nom_Magasin_11->setText(QApplication::translate("MainWindow", "Nom :", Q_NULLPTR));
        Categorie_14->setText(QApplication::translate("MainWindow", "Prenom :", Q_NULLPTR));
        Categorie_15->setText(QApplication::translate("MainWindow", "Sexe :", Q_NULLPTR));
        Categorie_16->setText(QApplication::translate("MainWindow", "Email :", Q_NULLPTR));
        Categorie_17->setText(QApplication::translate("MainWindow", "Num.Tel :", Q_NULLPTR));
        Location_11->setText(QApplication::translate("MainWindow", "Pts.Fid :", Q_NULLPTR));
        Tabs_Clts->setTabText(Tabs_Clts->indexOf(Ajout_Mag_5), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        ID_Magasin_14->setText(QApplication::translate("MainWindow", "ID :", Q_NULLPTR));
        Nom_Magasin_10->setText(QApplication::translate("MainWindow", "Nom :", Q_NULLPTR));
        Categorie_10->setText(QApplication::translate("MainWindow", "Prenom :", Q_NULLPTR));
        Categorie_12->setText(QApplication::translate("MainWindow", "Sexe :", Q_NULLPTR));
        Categorie_13->setText(QApplication::translate("MainWindow", "Email :", Q_NULLPTR));
        Categorie_11->setText(QApplication::translate("MainWindow", "Num.Tel :", Q_NULLPTR));
        Location_10->setText(QApplication::translate("MainWindow", "Pts.Fid :", Q_NULLPTR));
        Modif_Mag_btn_5->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        Tabs_Clts->setTabText(Tabs_Clts->indexOf(Modif_Mag_5), QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        Supp_Mag_btn_5->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        ID_Magasin_15->setText(QApplication::translate("MainWindow", "ID :", Q_NULLPTR));
        Tabs_Clts->setTabText(Tabs_Clts->indexOf(tab_21), QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pdf_btn_5->setText(QApplication::translate("MainWindow", "Enregistrer en pdf", Q_NULLPTR));
        Tabs_Clts->setTabText(Tabs_Clts->indexOf(tab_22), QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        Tabs_Clts->setTabText(Tabs_Clts->indexOf(tab_23), QApplication::translate("MainWindow", "Tri", Q_NULLPTR));
        Tabs_Clts->setTabText(Tabs_Clts->indexOf(tab_24), QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        Tabs_Clts->setTabText(Tabs_Clts->indexOf(tab_25), QApplication::translate("MainWindow", "Statistique", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Magasin), QApplication::translate("MainWindow", "Clients", Q_NULLPTR));
        menuCentre_Commercial->setTitle(QApplication::translate("MainWindow", "Centre Commercial", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
