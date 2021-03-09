/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *rivisteGroupBox;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_23;
    QLineEdit *nomeRivistaLineEdit;
    QLineEdit *acronimoRivistaLineEdit;
    QLineEdit *editoreRivistaLineEdit;
    QPushButton *aggiungiRivistaButton;
    QComboBox *annoRivistaComboBox;
    QLabel *label_24;
    QLabel *label_26;
    QComboBox *giornoRivistaComboBox;
    QLabel *label_25;
    QComboBox *meseRivistaComboBox;
    QLabel *label_4;
    QListWidget *rivisteListWidget;
    QSpinBox *volumeRivistaSpinBox;
    QGroupBox *autoriGroupBox;
    QLabel *label;
    QPushButton *aggiungiAutoreButton;
    QListWidget *autoriListWidget;
    QLabel *label_5;
    QLineEdit *nomeAutoreLineEdit;
    QLabel *label_6;
    QLineEdit *cognomeAutoreLineEdit;
    QLabel *label_7;
    QComboBox *afferenzaAutoreComboBox;
    QGroupBox *articoliGroupBox;
    QListWidget *articoliListWidget;
    QLabel *label_2;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *titoloArticoloLineEdit;
    QListWidget *listaAutoriArticoloListWidget;
    QListWidget *listaArticoliCorrelatiArticoloListWidget;
    QListWidget *listaKeywordArticoloListWidget;
    QLabel *label_27;
    QLabel *label_28;
    QComboBox *pubblicatoPerConferenzaComboBox;
    QComboBox *pubblicatoPerRivistaComboBox;
    QPushButton *aggiungiKeywordButton;
    QLineEdit *keywordArticoloLineEdit;
    QLabel *label_29;
    QPushButton *aggiungiArticoloButton;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QRadioButton *pubblicatoPerConferenzaRadioButton;
    QRadioButton *pubblicatoPerRivistaRadioButton;
    QLabel *label_30;
    QLabel *label_31;
    QListWidget *listaAutoriSelezionatiArticoloListWidget;
    QLabel *label_32;
    QListWidget *listaArticoliCorrelatiSelezionatiArticoloListWidget;
    QLabel *label_33;
    QDoubleSpinBox *prezzoArticoloDoubleSpinBox;
    QSpinBox *numeroPagineArticoloSpinBox;
    QGroupBox *conferenzeGroupBox;
    QListWidget *conferenzeListWidget;
    QListWidget *listaOrganizzatoriConferenzaListWidget;
    QLabel *label_8;
    QLabel *label_3;
    QLineEdit *nomeConferenzaLineEdit;
    QLineEdit *acronimoConferenzaLineEdit;
    QLineEdit *luogoConferenzaLineEdit;
    QComboBox *giornoConferenzaComboBox;
    QComboBox *meseConferenzaComboBox;
    QComboBox *annoConferenzaComboBox;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QPushButton *aggiungiConferenzaButton;
    QPushButton *aggiungiOrganizzatoreButton;
    QLineEdit *nomeOrganizzatoreLineEdit;
    QLabel *label_16;
    QSpinBox *numeroPartecipantiConferenzaSpinBox;
    QGroupBox *b1c12;
    QListWidget *b1ListWidget;
    QListWidget *b45ListWidget;
    QLabel *label_34;
    QLabel *label_35;
    QRadioButton *b5RadioButton;
    QRadioButton *b4RadioButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox2;
    QRadioButton *cNoneRadioButton;
    QRadioButton *c2AltoRadioButton;
    QRadioButton *c1BassoRadioButton;
    QComboBox *b1c12ComboBox;
    QPushButton *b1c12Button;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QComboBox *b5ComboBox;
    QPushButton *b45Button;
    QComboBox *b4ComboBox;
    QLabel *label_37;
    QLabel *label_36;
    QGroupBox *c6;
    QGridLayout *gridLayout_3;
    QListWidget *c6ListWidget;
    QLabel *label_39;
    QLabel *label_38;
    QPushButton *c6Button;
    QGroupBox *d26;
    QListWidget *dListWidget;
    QRadioButton *d6RadioButton;
    QRadioButton *d2RadioButton;
    QLabel *label_41;
    QLabel *label_40;
    QPushButton *dButton;
    QComboBox *dComboBox;
    QGroupBox *e6;
    QGridLayout *gridLayout_4;
    QListWidget *e6ListWidget;
    QLabel *label_42;
    QLabel *label_43;
    QPushButton *e6Button;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_5;
    QRadioButton *autoriDaFileRadioButton;
    QRadioButton *rivisteDaFileRadioButton;
    QPushButton *f4Button;
    QRadioButton *articoliDaFileRadioButton;
    QLabel *label_44;
    QRadioButton *conferenzeDaFileRadioButton;
    QLabel *label_45;
    QListWidget *f4ListWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1900, 1000);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        rivisteGroupBox = new QGroupBox(centralwidget);
        rivisteGroupBox->setObjectName(QString::fromUtf8("rivisteGroupBox"));
        rivisteGroupBox->setGeometry(QRect(1080, 20, 371, 281));
        label_17 = new QLabel(rivisteGroupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(191, 21, 27, 16));
        label_18 = new QLabel(rivisteGroupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(191, 66, 44, 16));
        label_19 = new QLabel(rivisteGroupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(191, 111, 34, 16));
        label_23 = new QLabel(rivisteGroupBox);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(191, 201, 34, 16));
        nomeRivistaLineEdit = new QLineEdit(rivisteGroupBox);
        nomeRivistaLineEdit->setObjectName(QString::fromUtf8("nomeRivistaLineEdit"));
        nomeRivistaLineEdit->setGeometry(QRect(191, 40, 133, 20));
        acronimoRivistaLineEdit = new QLineEdit(rivisteGroupBox);
        acronimoRivistaLineEdit->setObjectName(QString::fromUtf8("acronimoRivistaLineEdit"));
        acronimoRivistaLineEdit->setGeometry(QRect(191, 85, 133, 20));
        editoreRivistaLineEdit = new QLineEdit(rivisteGroupBox);
        editoreRivistaLineEdit->setObjectName(QString::fromUtf8("editoreRivistaLineEdit"));
        editoreRivistaLineEdit->setGeometry(QRect(191, 130, 133, 20));
        aggiungiRivistaButton = new QPushButton(rivisteGroupBox);
        aggiungiRivistaButton->setObjectName(QString::fromUtf8("aggiungiRivistaButton"));
        aggiungiRivistaButton->setGeometry(QRect(284, 250, 81, 23));
        annoRivistaComboBox = new QComboBox(rivisteGroupBox);
        annoRivistaComboBox->addItem(QString());
        annoRivistaComboBox->addItem(QString());
        annoRivistaComboBox->addItem(QString());
        annoRivistaComboBox->addItem(QString());
        annoRivistaComboBox->addItem(QString());
        annoRivistaComboBox->addItem(QString());
        annoRivistaComboBox->addItem(QString());
        annoRivistaComboBox->addItem(QString());
        annoRivistaComboBox->addItem(QString());
        annoRivistaComboBox->addItem(QString());
        annoRivistaComboBox->setObjectName(QString::fromUtf8("annoRivistaComboBox"));
        annoRivistaComboBox->setGeometry(QRect(300, 180, 49, 20));
        label_24 = new QLabel(rivisteGroupBox);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(300, 159, 25, 16));
        label_26 = new QLabel(rivisteGroupBox);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(245, 159, 25, 16));
        giornoRivistaComboBox = new QComboBox(rivisteGroupBox);
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->addItem(QString());
        giornoRivistaComboBox->setObjectName(QString::fromUtf8("giornoRivistaComboBox"));
        giornoRivistaComboBox->setGeometry(QRect(190, 180, 49, 20));
        label_25 = new QLabel(rivisteGroupBox);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(190, 159, 31, 16));
        meseRivistaComboBox = new QComboBox(rivisteGroupBox);
        meseRivistaComboBox->addItem(QString());
        meseRivistaComboBox->addItem(QString());
        meseRivistaComboBox->addItem(QString());
        meseRivistaComboBox->addItem(QString());
        meseRivistaComboBox->addItem(QString());
        meseRivistaComboBox->addItem(QString());
        meseRivistaComboBox->addItem(QString());
        meseRivistaComboBox->addItem(QString());
        meseRivistaComboBox->addItem(QString());
        meseRivistaComboBox->addItem(QString());
        meseRivistaComboBox->addItem(QString());
        meseRivistaComboBox->addItem(QString());
        meseRivistaComboBox->setObjectName(QString::fromUtf8("meseRivistaComboBox"));
        meseRivistaComboBox->setGeometry(QRect(245, 180, 49, 20));
        label_4 = new QLabel(rivisteGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(330, 0, 41, 16));
        rivisteListWidget = new QListWidget(rivisteGroupBox);
        rivisteListWidget->setObjectName(QString::fromUtf8("rivisteListWidget"));
        rivisteListWidget->setGeometry(QRect(0, 0, 181, 281));
        volumeRivistaSpinBox = new QSpinBox(rivisteGroupBox);
        volumeRivistaSpinBox->setObjectName(QString::fromUtf8("volumeRivistaSpinBox"));
        volumeRivistaSpinBox->setGeometry(QRect(190, 220, 42, 22));
        autoriGroupBox = new QGroupBox(centralwidget);
        autoriGroupBox->setObjectName(QString::fromUtf8("autoriGroupBox"));
        autoriGroupBox->setGeometry(QRect(10, 20, 401, 281));
        label = new QLabel(autoriGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 0, 29, 16));
        aggiungiAutoreButton = new QPushButton(autoriGroupBox);
        aggiungiAutoreButton->setObjectName(QString::fromUtf8("aggiungiAutoreButton"));
        aggiungiAutoreButton->setGeometry(QRect(260, 190, 91, 23));
        autoriListWidget = new QListWidget(autoriGroupBox);
        autoriListWidget->setObjectName(QString::fromUtf8("autoriListWidget"));
        autoriListWidget->setGeometry(QRect(0, 0, 256, 281));
        label_5 = new QLabel(autoriGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(261, 21, 27, 16));
        nomeAutoreLineEdit = new QLineEdit(autoriGroupBox);
        nomeAutoreLineEdit->setObjectName(QString::fromUtf8("nomeAutoreLineEdit"));
        nomeAutoreLineEdit->setGeometry(QRect(261, 40, 133, 20));
        label_6 = new QLabel(autoriGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(261, 71, 45, 16));
        cognomeAutoreLineEdit = new QLineEdit(autoriGroupBox);
        cognomeAutoreLineEdit->setObjectName(QString::fromUtf8("cognomeAutoreLineEdit"));
        cognomeAutoreLineEdit->setGeometry(QRect(261, 90, 133, 20));
        label_7 = new QLabel(autoriGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(261, 121, 48, 16));
        afferenzaAutoreComboBox = new QComboBox(autoriGroupBox);
        afferenzaAutoreComboBox->addItem(QString());
        afferenzaAutoreComboBox->addItem(QString());
        afferenzaAutoreComboBox->addItem(QString());
        afferenzaAutoreComboBox->addItem(QString());
        afferenzaAutoreComboBox->addItem(QString());
        afferenzaAutoreComboBox->setObjectName(QString::fromUtf8("afferenzaAutoreComboBox"));
        afferenzaAutoreComboBox->setGeometry(QRect(261, 140, 86, 20));
        articoliGroupBox = new QGroupBox(centralwidget);
        articoliGroupBox->setObjectName(QString::fromUtf8("articoliGroupBox"));
        articoliGroupBox->setGeometry(QRect(1480, 20, 401, 511));
        articoliListWidget = new QListWidget(articoliGroupBox);
        articoliListWidget->setObjectName(QString::fromUtf8("articoliListWidget"));
        articoliListWidget->setGeometry(QRect(0, 0, 201, 281));
        label_2 = new QLabel(articoliGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(360, 0, 32, 16));
        label_20 = new QLabel(articoliGroupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(211, 23, 26, 16));
        label_21 = new QLabel(articoliGroupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(211, 64, 72, 16));
        label_22 = new QLabel(articoliGroupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(211, 106, 32, 16));
        titoloArticoloLineEdit = new QLineEdit(articoliGroupBox);
        titoloArticoloLineEdit->setObjectName(QString::fromUtf8("titoloArticoloLineEdit"));
        titoloArticoloLineEdit->setGeometry(QRect(211, 42, 133, 16));
        listaAutoriArticoloListWidget = new QListWidget(articoliGroupBox);
        listaAutoriArticoloListWidget->setObjectName(QString::fromUtf8("listaAutoriArticoloListWidget"));
        listaAutoriArticoloListWidget->setGeometry(QRect(210, 170, 81, 101));
        listaArticoliCorrelatiArticoloListWidget = new QListWidget(articoliGroupBox);
        listaArticoliCorrelatiArticoloListWidget->setObjectName(QString::fromUtf8("listaArticoliCorrelatiArticoloListWidget"));
        listaArticoliCorrelatiArticoloListWidget->setGeometry(QRect(210, 300, 81, 101));
        listaKeywordArticoloListWidget = new QListWidget(articoliGroupBox);
        listaKeywordArticoloListWidget->setObjectName(QString::fromUtf8("listaKeywordArticoloListWidget"));
        listaKeywordArticoloListWidget->setGeometry(QRect(210, 420, 71, 81));
        label_27 = new QLabel(articoliGroupBox);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(210, 150, 41, 16));
        label_28 = new QLabel(articoliGroupBox);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(210, 280, 41, 21));
        label_28->setWordWrap(true);
        pubblicatoPerConferenzaComboBox = new QComboBox(articoliGroupBox);
        pubblicatoPerConferenzaComboBox->setObjectName(QString::fromUtf8("pubblicatoPerConferenzaComboBox"));
        pubblicatoPerConferenzaComboBox->setEnabled(false);
        pubblicatoPerConferenzaComboBox->setGeometry(QRect(12, 370, 91, 20));
        pubblicatoPerConferenzaComboBox->setMouseTracking(false);
        pubblicatoPerConferenzaComboBox->setInputMethodHints(Qt::ImhNone);
        pubblicatoPerConferenzaComboBox->setEditable(false);
        pubblicatoPerRivistaComboBox = new QComboBox(articoliGroupBox);
        pubblicatoPerRivistaComboBox->setObjectName(QString::fromUtf8("pubblicatoPerRivistaComboBox"));
        pubblicatoPerRivistaComboBox->setEnabled(false);
        pubblicatoPerRivistaComboBox->setGeometry(QRect(110, 370, 91, 20));
        aggiungiKeywordButton = new QPushButton(articoliGroupBox);
        aggiungiKeywordButton->setObjectName(QString::fromUtf8("aggiungiKeywordButton"));
        aggiungiKeywordButton->setGeometry(QRect(290, 470, 93, 23));
        keywordArticoloLineEdit = new QLineEdit(articoliGroupBox);
        keywordArticoloLineEdit->setObjectName(QString::fromUtf8("keywordArticoloLineEdit"));
        keywordArticoloLineEdit->setGeometry(QRect(290, 444, 93, 20));
        label_29 = new QLabel(articoliGroupBox);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(290, 425, 42, 16));
        aggiungiArticoloButton = new QPushButton(articoliGroupBox);
        aggiungiArticoloButton->setObjectName(QString::fromUtf8("aggiungiArticoloButton"));
        aggiungiArticoloButton->setGeometry(QRect(10, 480, 91, 23));
        groupBox = new QGroupBox(articoliGroupBox);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 290, 161, 61));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        pubblicatoPerConferenzaRadioButton = new QRadioButton(groupBox);
        pubblicatoPerConferenzaRadioButton->setObjectName(QString::fromUtf8("pubblicatoPerConferenzaRadioButton"));

        formLayout->setWidget(0, QFormLayout::LabelRole, pubblicatoPerConferenzaRadioButton);

        pubblicatoPerRivistaRadioButton = new QRadioButton(groupBox);
        pubblicatoPerRivistaRadioButton->setObjectName(QString::fromUtf8("pubblicatoPerRivistaRadioButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pubblicatoPerRivistaRadioButton);

        label_30 = new QLabel(articoliGroupBox);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(12, 351, 56, 16));
        label_31 = new QLabel(articoliGroupBox);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(110, 350, 32, 16));
        listaAutoriSelezionatiArticoloListWidget = new QListWidget(articoliGroupBox);
        listaAutoriSelezionatiArticoloListWidget->setObjectName(QString::fromUtf8("listaAutoriSelezionatiArticoloListWidget"));
        listaAutoriSelezionatiArticoloListWidget->setGeometry(QRect(310, 170, 81, 101));
        label_32 = new QLabel(articoliGroupBox);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(310, 150, 81, 16));
        listaArticoliCorrelatiSelezionatiArticoloListWidget = new QListWidget(articoliGroupBox);
        listaArticoliCorrelatiSelezionatiArticoloListWidget->setObjectName(QString::fromUtf8("listaArticoliCorrelatiSelezionatiArticoloListWidget"));
        listaArticoliCorrelatiSelezionatiArticoloListWidget->setGeometry(QRect(310, 300, 81, 101));
        label_33 = new QLabel(articoliGroupBox);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(310, 280, 91, 21));
        prezzoArticoloDoubleSpinBox = new QDoubleSpinBox(articoliGroupBox);
        prezzoArticoloDoubleSpinBox->setObjectName(QString::fromUtf8("prezzoArticoloDoubleSpinBox"));
        prezzoArticoloDoubleSpinBox->setGeometry(QRect(210, 120, 62, 22));
        numeroPagineArticoloSpinBox = new QSpinBox(articoliGroupBox);
        numeroPagineArticoloSpinBox->setObjectName(QString::fromUtf8("numeroPagineArticoloSpinBox"));
        numeroPagineArticoloSpinBox->setGeometry(QRect(210, 80, 42, 22));
        conferenzeGroupBox = new QGroupBox(centralwidget);
        conferenzeGroupBox->setObjectName(QString::fromUtf8("conferenzeGroupBox"));
        conferenzeGroupBox->setGeometry(QRect(440, 20, 611, 281));
        conferenzeListWidget = new QListWidget(conferenzeGroupBox);
        conferenzeListWidget->setObjectName(QString::fromUtf8("conferenzeListWidget"));
        conferenzeListWidget->setGeometry(QRect(0, 0, 256, 281));
        listaOrganizzatoriConferenzaListWidget = new QListWidget(conferenzeGroupBox);
        listaOrganizzatoriConferenzaListWidget->setObjectName(QString::fromUtf8("listaOrganizzatoriConferenzaListWidget"));
        listaOrganizzatoriConferenzaListWidget->setGeometry(QRect(510, 90, 101, 121));
        label_8 = new QLabel(conferenzeGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(520, 210, 101, 16));
        label_3 = new QLabel(conferenzeGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(420, 0, 61, 16));
        nomeConferenzaLineEdit = new QLineEdit(conferenzeGroupBox);
        nomeConferenzaLineEdit->setObjectName(QString::fromUtf8("nomeConferenzaLineEdit"));
        nomeConferenzaLineEdit->setGeometry(QRect(260, 22, 133, 20));
        acronimoConferenzaLineEdit = new QLineEdit(conferenzeGroupBox);
        acronimoConferenzaLineEdit->setObjectName(QString::fromUtf8("acronimoConferenzaLineEdit"));
        acronimoConferenzaLineEdit->setGeometry(QRect(260, 69, 133, 20));
        luogoConferenzaLineEdit = new QLineEdit(conferenzeGroupBox);
        luogoConferenzaLineEdit->setObjectName(QString::fromUtf8("luogoConferenzaLineEdit"));
        luogoConferenzaLineEdit->setGeometry(QRect(260, 116, 133, 20));
        giornoConferenzaComboBox = new QComboBox(conferenzeGroupBox);
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->addItem(QString());
        giornoConferenzaComboBox->setObjectName(QString::fromUtf8("giornoConferenzaComboBox"));
        giornoConferenzaComboBox->setGeometry(QRect(260, 163, 49, 20));
        meseConferenzaComboBox = new QComboBox(conferenzeGroupBox);
        meseConferenzaComboBox->addItem(QString());
        meseConferenzaComboBox->addItem(QString());
        meseConferenzaComboBox->addItem(QString());
        meseConferenzaComboBox->addItem(QString());
        meseConferenzaComboBox->addItem(QString());
        meseConferenzaComboBox->addItem(QString());
        meseConferenzaComboBox->addItem(QString());
        meseConferenzaComboBox->addItem(QString());
        meseConferenzaComboBox->addItem(QString());
        meseConferenzaComboBox->addItem(QString());
        meseConferenzaComboBox->addItem(QString());
        meseConferenzaComboBox->addItem(QString());
        meseConferenzaComboBox->setObjectName(QString::fromUtf8("meseConferenzaComboBox"));
        meseConferenzaComboBox->setGeometry(QRect(315, 163, 49, 20));
        annoConferenzaComboBox = new QComboBox(conferenzeGroupBox);
        annoConferenzaComboBox->addItem(QString());
        annoConferenzaComboBox->addItem(QString());
        annoConferenzaComboBox->addItem(QString());
        annoConferenzaComboBox->addItem(QString());
        annoConferenzaComboBox->addItem(QString());
        annoConferenzaComboBox->addItem(QString());
        annoConferenzaComboBox->addItem(QString());
        annoConferenzaComboBox->addItem(QString());
        annoConferenzaComboBox->addItem(QString());
        annoConferenzaComboBox->addItem(QString());
        annoConferenzaComboBox->setObjectName(QString::fromUtf8("annoConferenzaComboBox"));
        annoConferenzaComboBox->setGeometry(QRect(370, 163, 49, 20));
        label_9 = new QLabel(conferenzeGroupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(260, 1, 27, 16));
        label_10 = new QLabel(conferenzeGroupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(260, 48, 44, 16));
        label_11 = new QLabel(conferenzeGroupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(260, 95, 29, 16));
        label_12 = new QLabel(conferenzeGroupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(260, 142, 31, 16));
        label_13 = new QLabel(conferenzeGroupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(315, 142, 25, 16));
        label_14 = new QLabel(conferenzeGroupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(370, 142, 25, 16));
        label_15 = new QLabel(conferenzeGroupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(260, 189, 97, 16));
        aggiungiConferenzaButton = new QPushButton(conferenzeGroupBox);
        aggiungiConferenzaButton->setObjectName(QString::fromUtf8("aggiungiConferenzaButton"));
        aggiungiConferenzaButton->setGeometry(QRect(390, 250, 111, 23));
        aggiungiOrganizzatoreButton = new QPushButton(conferenzeGroupBox);
        aggiungiOrganizzatoreButton->setObjectName(QString::fromUtf8("aggiungiOrganizzatoreButton"));
        aggiungiOrganizzatoreButton->setGeometry(QRect(490, 60, 120, 23));
        nomeOrganizzatoreLineEdit = new QLineEdit(conferenzeGroupBox);
        nomeOrganizzatoreLineEdit->setObjectName(QString::fromUtf8("nomeOrganizzatoreLineEdit"));
        nomeOrganizzatoreLineEdit->setGeometry(QRect(490, 44, 120, 20));
        label_16 = new QLabel(conferenzeGroupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(490, 20, 101, 20));
        numeroPartecipantiConferenzaSpinBox = new QSpinBox(conferenzeGroupBox);
        numeroPartecipantiConferenzaSpinBox->setObjectName(QString::fromUtf8("numeroPartecipantiConferenzaSpinBox"));
        numeroPartecipantiConferenzaSpinBox->setGeometry(QRect(260, 210, 42, 22));
        b1c12 = new QGroupBox(centralwidget);
        b1c12->setObjectName(QString::fromUtf8("b1c12"));
        b1c12->setGeometry(QRect(0, 310, 841, 231));
        b1ListWidget = new QListWidget(b1c12);
        b1ListWidget->setObjectName(QString::fromUtf8("b1ListWidget"));
        b1ListWidget->setGeometry(QRect(10, 10, 256, 211));
        b45ListWidget = new QListWidget(b1c12);
        b45ListWidget->setObjectName(QString::fromUtf8("b45ListWidget"));
        b45ListWidget->setGeometry(QRect(437, 10, 222, 211));
        label_34 = new QLabel(b1c12);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(300, 10, 57, 26));
        label_34->setWordWrap(true);
        label_35 = new QLabel(b1c12);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(700, 20, 61, 41));
        b5RadioButton = new QRadioButton(b1c12);
        b5RadioButton->setObjectName(QString::fromUtf8("b5RadioButton"));
        b5RadioButton->setGeometry(QRect(660, 90, 126, 17));
        b4RadioButton = new QRadioButton(b1c12);
        b4RadioButton->setObjectName(QString::fromUtf8("b4RadioButton"));
        b4RadioButton->setGeometry(QRect(660, 70, 151, 17));
        layoutWidget = new QWidget(b1c12);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(270, 79, 151, 131));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox2 = new QGroupBox(layoutWidget);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        cNoneRadioButton = new QRadioButton(groupBox2);
        cNoneRadioButton->setObjectName(QString::fromUtf8("cNoneRadioButton"));
        cNoneRadioButton->setGeometry(QRect(1, 3, 48, 17));
        cNoneRadioButton->setChecked(true);
        c2AltoRadioButton = new QRadioButton(groupBox2);
        c2AltoRadioButton->setObjectName(QString::fromUtf8("c2AltoRadioButton"));
        c2AltoRadioButton->setGeometry(QRect(1, 49, 93, 17));
        c1BassoRadioButton = new QRadioButton(groupBox2);
        c1BassoRadioButton->setObjectName(QString::fromUtf8("c1BassoRadioButton"));
        c1BassoRadioButton->setGeometry(QRect(1, 26, 103, 17));

        gridLayout->addWidget(groupBox2, 0, 0, 1, 1);

        b1c12ComboBox = new QComboBox(layoutWidget);
        b1c12ComboBox->setObjectName(QString::fromUtf8("b1c12ComboBox"));

        gridLayout->addWidget(b1c12ComboBox, 1, 0, 1, 1);

        b1c12Button = new QPushButton(layoutWidget);
        b1c12Button->setObjectName(QString::fromUtf8("b1c12Button"));

        gridLayout->addWidget(b1c12Button, 2, 0, 1, 1);

        layoutWidget1 = new QWidget(b1c12);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(662, 160, 171, 51));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        b5ComboBox = new QComboBox(layoutWidget1);
        b5ComboBox->setObjectName(QString::fromUtf8("b5ComboBox"));
        b5ComboBox->setEnabled(false);

        gridLayout_2->addWidget(b5ComboBox, 0, 1, 1, 1);

        b45Button = new QPushButton(layoutWidget1);
        b45Button->setObjectName(QString::fromUtf8("b45Button"));

        gridLayout_2->addWidget(b45Button, 1, 0, 1, 2);

        b4ComboBox = new QComboBox(layoutWidget1);
        b4ComboBox->setObjectName(QString::fromUtf8("b4ComboBox"));
        b4ComboBox->setEnabled(false);

        gridLayout_2->addWidget(b4ComboBox, 0, 0, 1, 1);

        label_37 = new QLabel(b1c12);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(750, 140, 32, 16));
        label_36 = new QLabel(b1c12);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(661, 141, 56, 16));
        c6 = new QGroupBox(centralwidget);
        c6->setObjectName(QString::fromUtf8("c6"));
        c6->setGeometry(QRect(871, 311, 457, 231));
        gridLayout_3 = new QGridLayout(c6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        c6ListWidget = new QListWidget(c6);
        c6ListWidget->setObjectName(QString::fromUtf8("c6ListWidget"));

        gridLayout_3->addWidget(c6ListWidget, 0, 0, 3, 1);

        label_39 = new QLabel(c6);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout_3->addWidget(label_39, 0, 1, 1, 1);

        label_38 = new QLabel(c6);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setWordWrap(true);

        gridLayout_3->addWidget(label_38, 1, 1, 1, 1);

        c6Button = new QPushButton(c6);
        c6Button->setObjectName(QString::fromUtf8("c6Button"));

        gridLayout_3->addWidget(c6Button, 2, 1, 1, 1);

        d26 = new QGroupBox(centralwidget);
        d26->setObjectName(QString::fromUtf8("d26"));
        d26->setGeometry(QRect(11, 603, 560, 251));
        dListWidget = new QListWidget(d26);
        dListWidget->setObjectName(QString::fromUtf8("dListWidget"));
        dListWidget->setGeometry(QRect(2, 2, 254, 247));
        d6RadioButton = new QRadioButton(d26);
        d6RadioButton->setObjectName(QString::fromUtf8("d6RadioButton"));
        d6RadioButton->setGeometry(QRect(260, 130, 261, 17));
        d2RadioButton = new QRadioButton(d26);
        d2RadioButton->setObjectName(QString::fromUtf8("d2RadioButton"));
        d2RadioButton->setGeometry(QRect(260, 107, 161, 17));
        label_41 = new QLabel(d26);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(267, 160, 47, 16));
        label_40 = new QLabel(d26);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(262, 2, 57, 16));
        dButton = new QPushButton(d26);
        dButton->setObjectName(QString::fromUtf8("dButton"));
        dButton->setGeometry(QRect(261, 207, 87, 23));
        dComboBox = new QComboBox(d26);
        dComboBox->setObjectName(QString::fromUtf8("dComboBox"));
        dComboBox->setEnabled(true);
        dComboBox->setGeometry(QRect(261, 181, 81, 20));
        e6 = new QGroupBox(centralwidget);
        e6->setObjectName(QString::fromUtf8("e6"));
        e6->setGeometry(QRect(690, 601, 351, 251));
        gridLayout_4 = new QGridLayout(e6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        e6ListWidget = new QListWidget(e6);
        e6ListWidget->setObjectName(QString::fromUtf8("e6ListWidget"));

        gridLayout_4->addWidget(e6ListWidget, 0, 0, 3, 1);

        label_42 = new QLabel(e6);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        gridLayout_4->addWidget(label_42, 0, 1, 1, 1);

        label_43 = new QLabel(e6);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        gridLayout_4->addWidget(label_43, 1, 1, 1, 1);

        e6Button = new QPushButton(e6);
        e6Button->setObjectName(QString::fromUtf8("e6Button"));

        gridLayout_4->addWidget(e6Button, 2, 1, 1, 1);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(1121, 601, 551, 251));
        gridLayout_5 = new QGridLayout(layoutWidget2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        autoriDaFileRadioButton = new QRadioButton(layoutWidget2);
        autoriDaFileRadioButton->setObjectName(QString::fromUtf8("autoriDaFileRadioButton"));

        gridLayout_5->addWidget(autoriDaFileRadioButton, 2, 1, 1, 1);

        rivisteDaFileRadioButton = new QRadioButton(layoutWidget2);
        rivisteDaFileRadioButton->setObjectName(QString::fromUtf8("rivisteDaFileRadioButton"));

        gridLayout_5->addWidget(rivisteDaFileRadioButton, 4, 1, 1, 1);

        f4Button = new QPushButton(layoutWidget2);
        f4Button->setObjectName(QString::fromUtf8("f4Button"));

        gridLayout_5->addWidget(f4Button, 6, 1, 1, 1);

        articoliDaFileRadioButton = new QRadioButton(layoutWidget2);
        articoliDaFileRadioButton->setObjectName(QString::fromUtf8("articoliDaFileRadioButton"));

        gridLayout_5->addWidget(articoliDaFileRadioButton, 5, 1, 1, 1);

        label_44 = new QLabel(layoutWidget2);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        gridLayout_5->addWidget(label_44, 1, 1, 1, 1);

        conferenzeDaFileRadioButton = new QRadioButton(layoutWidget2);
        conferenzeDaFileRadioButton->setObjectName(QString::fromUtf8("conferenzeDaFileRadioButton"));

        gridLayout_5->addWidget(conferenzeDaFileRadioButton, 3, 1, 1, 1);

        label_45 = new QLabel(layoutWidget2);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        gridLayout_5->addWidget(label_45, 0, 1, 1, 1);

        f4ListWidget = new QListWidget(layoutWidget2);
        f4ListWidget->setObjectName(QString::fromUtf8("f4ListWidget"));

        gridLayout_5->addWidget(f4ListWidget, 0, 0, 7, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Acronimo", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Editore", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Volume", nullptr));
        aggiungiRivistaButton->setText(QCoreApplication::translate("MainWindow", "Aggiungi rivista", nullptr));
        annoRivistaComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "2021", nullptr));
        annoRivistaComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "2022", nullptr));
        annoRivistaComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "2023", nullptr));
        annoRivistaComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "2024", nullptr));
        annoRivistaComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "2025", nullptr));
        annoRivistaComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "2026", nullptr));
        annoRivistaComboBox->setItemText(6, QCoreApplication::translate("MainWindow", "2027", nullptr));
        annoRivistaComboBox->setItemText(7, QCoreApplication::translate("MainWindow", "2028", nullptr));
        annoRivistaComboBox->setItemText(8, QCoreApplication::translate("MainWindow", "2029", nullptr));
        annoRivistaComboBox->setItemText(9, QCoreApplication::translate("MainWindow", "2030", nullptr));

        label_24->setText(QCoreApplication::translate("MainWindow", "Anno", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Mese", nullptr));
        giornoRivistaComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        giornoRivistaComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        giornoRivistaComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        giornoRivistaComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        giornoRivistaComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));
        giornoRivistaComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "6", nullptr));
        giornoRivistaComboBox->setItemText(6, QCoreApplication::translate("MainWindow", "7", nullptr));
        giornoRivistaComboBox->setItemText(7, QCoreApplication::translate("MainWindow", "8", nullptr));
        giornoRivistaComboBox->setItemText(8, QCoreApplication::translate("MainWindow", "9", nullptr));
        giornoRivistaComboBox->setItemText(9, QCoreApplication::translate("MainWindow", "10", nullptr));
        giornoRivistaComboBox->setItemText(10, QCoreApplication::translate("MainWindow", "11", nullptr));
        giornoRivistaComboBox->setItemText(11, QCoreApplication::translate("MainWindow", "12", nullptr));
        giornoRivistaComboBox->setItemText(12, QCoreApplication::translate("MainWindow", "13", nullptr));
        giornoRivistaComboBox->setItemText(13, QCoreApplication::translate("MainWindow", "14", nullptr));
        giornoRivistaComboBox->setItemText(14, QCoreApplication::translate("MainWindow", "15", nullptr));
        giornoRivistaComboBox->setItemText(15, QCoreApplication::translate("MainWindow", "16", nullptr));
        giornoRivistaComboBox->setItemText(16, QCoreApplication::translate("MainWindow", "17", nullptr));
        giornoRivistaComboBox->setItemText(17, QCoreApplication::translate("MainWindow", "18", nullptr));
        giornoRivistaComboBox->setItemText(18, QCoreApplication::translate("MainWindow", "19", nullptr));
        giornoRivistaComboBox->setItemText(19, QCoreApplication::translate("MainWindow", "20", nullptr));
        giornoRivistaComboBox->setItemText(20, QCoreApplication::translate("MainWindow", "21", nullptr));
        giornoRivistaComboBox->setItemText(21, QCoreApplication::translate("MainWindow", "22", nullptr));
        giornoRivistaComboBox->setItemText(22, QCoreApplication::translate("MainWindow", "23", nullptr));
        giornoRivistaComboBox->setItemText(23, QCoreApplication::translate("MainWindow", "24", nullptr));
        giornoRivistaComboBox->setItemText(24, QCoreApplication::translate("MainWindow", "25", nullptr));
        giornoRivistaComboBox->setItemText(25, QCoreApplication::translate("MainWindow", "26", nullptr));
        giornoRivistaComboBox->setItemText(26, QCoreApplication::translate("MainWindow", "27", nullptr));
        giornoRivistaComboBox->setItemText(27, QCoreApplication::translate("MainWindow", "28", nullptr));
        giornoRivistaComboBox->setItemText(28, QCoreApplication::translate("MainWindow", "29", nullptr));
        giornoRivistaComboBox->setItemText(29, QCoreApplication::translate("MainWindow", "30", nullptr));
        giornoRivistaComboBox->setItemText(30, QCoreApplication::translate("MainWindow", "31", nullptr));

        label_25->setText(QCoreApplication::translate("MainWindow", "Giorno", nullptr));
        meseRivistaComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        meseRivistaComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        meseRivistaComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        meseRivistaComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        meseRivistaComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));
        meseRivistaComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "6", nullptr));
        meseRivistaComboBox->setItemText(6, QCoreApplication::translate("MainWindow", "7", nullptr));
        meseRivistaComboBox->setItemText(7, QCoreApplication::translate("MainWindow", "8", nullptr));
        meseRivistaComboBox->setItemText(8, QCoreApplication::translate("MainWindow", "9", nullptr));
        meseRivistaComboBox->setItemText(9, QCoreApplication::translate("MainWindow", "10", nullptr));
        meseRivistaComboBox->setItemText(10, QCoreApplication::translate("MainWindow", "11", nullptr));
        meseRivistaComboBox->setItemText(11, QCoreApplication::translate("MainWindow", "12", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "Riviste", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Autori", nullptr));
        aggiungiAutoreButton->setText(QCoreApplication::translate("MainWindow", "Aggiungi autore", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Cognome", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Afferenza", nullptr));
        afferenzaAutoreComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Altro", nullptr));
        afferenzaAutoreComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "UNICAL", nullptr));
        afferenzaAutoreComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "UMG", nullptr));
        afferenzaAutoreComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "UNICUSANO", nullptr));
        afferenzaAutoreComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "UNIPEGASO", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Articoli", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Titolo", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Numero pagine", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Prezzo", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Autori", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Articoli", nullptr));
        aggiungiKeywordButton->setText(QCoreApplication::translate("MainWindow", "Aggiungi keyword", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Keyword", nullptr));
        aggiungiArticoloButton->setText(QCoreApplication::translate("MainWindow", "Aggiungi articolo", nullptr));
        pubblicatoPerConferenzaRadioButton->setText(QCoreApplication::translate("MainWindow", "Pubblicato per conferenza", nullptr));
        pubblicatoPerRivistaRadioButton->setText(QCoreApplication::translate("MainWindow", "Pubblicato per rivista", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Conferenza", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Rivista", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Autori selezionati", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "Articoli selezionati", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Lista Organizzatori", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Conferenze", nullptr));
        giornoConferenzaComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        giornoConferenzaComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        giornoConferenzaComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        giornoConferenzaComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        giornoConferenzaComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));
        giornoConferenzaComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "6", nullptr));
        giornoConferenzaComboBox->setItemText(6, QCoreApplication::translate("MainWindow", "7", nullptr));
        giornoConferenzaComboBox->setItemText(7, QCoreApplication::translate("MainWindow", "8", nullptr));
        giornoConferenzaComboBox->setItemText(8, QCoreApplication::translate("MainWindow", "9", nullptr));
        giornoConferenzaComboBox->setItemText(9, QCoreApplication::translate("MainWindow", "10", nullptr));
        giornoConferenzaComboBox->setItemText(10, QCoreApplication::translate("MainWindow", "11", nullptr));
        giornoConferenzaComboBox->setItemText(11, QCoreApplication::translate("MainWindow", "12", nullptr));
        giornoConferenzaComboBox->setItemText(12, QCoreApplication::translate("MainWindow", "13", nullptr));
        giornoConferenzaComboBox->setItemText(13, QCoreApplication::translate("MainWindow", "14", nullptr));
        giornoConferenzaComboBox->setItemText(14, QCoreApplication::translate("MainWindow", "15", nullptr));
        giornoConferenzaComboBox->setItemText(15, QCoreApplication::translate("MainWindow", "16", nullptr));
        giornoConferenzaComboBox->setItemText(16, QCoreApplication::translate("MainWindow", "17", nullptr));
        giornoConferenzaComboBox->setItemText(17, QCoreApplication::translate("MainWindow", "18", nullptr));
        giornoConferenzaComboBox->setItemText(18, QCoreApplication::translate("MainWindow", "19", nullptr));
        giornoConferenzaComboBox->setItemText(19, QCoreApplication::translate("MainWindow", "20", nullptr));
        giornoConferenzaComboBox->setItemText(20, QCoreApplication::translate("MainWindow", "21", nullptr));
        giornoConferenzaComboBox->setItemText(21, QCoreApplication::translate("MainWindow", "22", nullptr));
        giornoConferenzaComboBox->setItemText(22, QCoreApplication::translate("MainWindow", "23", nullptr));
        giornoConferenzaComboBox->setItemText(23, QCoreApplication::translate("MainWindow", "24", nullptr));
        giornoConferenzaComboBox->setItemText(24, QCoreApplication::translate("MainWindow", "25", nullptr));
        giornoConferenzaComboBox->setItemText(25, QCoreApplication::translate("MainWindow", "26", nullptr));
        giornoConferenzaComboBox->setItemText(26, QCoreApplication::translate("MainWindow", "27", nullptr));
        giornoConferenzaComboBox->setItemText(27, QCoreApplication::translate("MainWindow", "28", nullptr));
        giornoConferenzaComboBox->setItemText(28, QCoreApplication::translate("MainWindow", "29", nullptr));
        giornoConferenzaComboBox->setItemText(29, QCoreApplication::translate("MainWindow", "30", nullptr));
        giornoConferenzaComboBox->setItemText(30, QCoreApplication::translate("MainWindow", "31", nullptr));

        meseConferenzaComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        meseConferenzaComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        meseConferenzaComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));
        meseConferenzaComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "4", nullptr));
        meseConferenzaComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "5", nullptr));
        meseConferenzaComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "6", nullptr));
        meseConferenzaComboBox->setItemText(6, QCoreApplication::translate("MainWindow", "7", nullptr));
        meseConferenzaComboBox->setItemText(7, QCoreApplication::translate("MainWindow", "8", nullptr));
        meseConferenzaComboBox->setItemText(8, QCoreApplication::translate("MainWindow", "9", nullptr));
        meseConferenzaComboBox->setItemText(9, QCoreApplication::translate("MainWindow", "10", nullptr));
        meseConferenzaComboBox->setItemText(10, QCoreApplication::translate("MainWindow", "11", nullptr));
        meseConferenzaComboBox->setItemText(11, QCoreApplication::translate("MainWindow", "12", nullptr));

        annoConferenzaComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "2021", nullptr));
        annoConferenzaComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "2022", nullptr));
        annoConferenzaComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "2023", nullptr));
        annoConferenzaComboBox->setItemText(3, QCoreApplication::translate("MainWindow", "2024", nullptr));
        annoConferenzaComboBox->setItemText(4, QCoreApplication::translate("MainWindow", "2025", nullptr));
        annoConferenzaComboBox->setItemText(5, QCoreApplication::translate("MainWindow", "2026", nullptr));
        annoConferenzaComboBox->setItemText(6, QCoreApplication::translate("MainWindow", "2027", nullptr));
        annoConferenzaComboBox->setItemText(7, QCoreApplication::translate("MainWindow", "2028", nullptr));
        annoConferenzaComboBox->setItemText(8, QCoreApplication::translate("MainWindow", "2029", nullptr));
        annoConferenzaComboBox->setItemText(9, QCoreApplication::translate("MainWindow", "2030", nullptr));

        label_9->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Acronimo", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Luogo", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Giorno", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Mese", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Anno", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Numero partecipanti", nullptr));
        aggiungiConferenzaButton->setText(QCoreApplication::translate("MainWindow", "Aggiungi conferenza", nullptr));
        aggiungiOrganizzatoreButton->setText(QCoreApplication::translate("MainWindow", "Aggiungi Organizzatore", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Nome Organizzatore", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "B punto 1                        C punto 1-2", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "B punto 4-5", nullptr));
        b5RadioButton->setText(QCoreApplication::translate("MainWindow", "Relativi ad una rivista", nullptr));
        b4RadioButton->setText(QCoreApplication::translate("MainWindow", "Relativi ad una conferenza", nullptr));
        cNoneRadioButton->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        c2AltoRadioButton->setText(QCoreApplication::translate("MainWindow", "Prezzo pi\303\271 alto", nullptr));
        c1BassoRadioButton->setText(QCoreApplication::translate("MainWindow", "Prezzo pi\303\271 basso", nullptr));
        b1c12Button->setText(QCoreApplication::translate("MainWindow", "Visualizza articoli autore", nullptr));
        b45Button->setText(QCoreApplication::translate("MainWindow", "Visualizza articoli", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "Rivista", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "Conferenza", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "                        C punto 6", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "Keyword la cui somma degli articoli porta al guadagno pi\303\271 alto", nullptr));
        c6Button->setText(QCoreApplication::translate("MainWindow", "Visualizza keyword", nullptr));
        d6RadioButton->setText(QCoreApplication::translate("MainWindow", "Ordinati per anno, prezzo decrescente, keyword", nullptr));
        d2RadioButton->setText(QCoreApplication::translate("MainWindow", "Ordinati per prezzo crescente", nullptr));
        label_41->setText(QCoreApplication::translate("MainWindow", "Autore", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "D punto 2-6", nullptr));
        dButton->setText(QCoreApplication::translate("MainWindow", "Visualizza articoli", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "      E punto 6", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "Riviste specialistiche", nullptr));
        e6Button->setText(QCoreApplication::translate("MainWindow", "Visualizza riviste", nullptr));
        autoriDaFileRadioButton->setText(QCoreApplication::translate("MainWindow", "Autori", nullptr));
        rivisteDaFileRadioButton->setText(QCoreApplication::translate("MainWindow", "Riviste", nullptr));
        f4Button->setText(QCoreApplication::translate("MainWindow", "Visualizza", nullptr));
        articoliDaFileRadioButton->setText(QCoreApplication::translate("MainWindow", "Articoli", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "Visualizza da file", nullptr));
        conferenzeDaFileRadioButton->setText(QCoreApplication::translate("MainWindow", "Conferenze", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "     F punto 4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
