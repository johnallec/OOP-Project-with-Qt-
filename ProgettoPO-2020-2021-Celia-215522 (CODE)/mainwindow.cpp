#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Database.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    Database::getInstance()->resetDatabase();
    delete ui;
}

//*********************************************************AGGIUNTA AUTORE*********************************************************

void MainWindow::on_aggiungiAutoreButton_clicked()
{
    QString nomeAutore=ui->nomeAutoreLineEdit->text();
    QString cognomeAutore=ui->cognomeAutoreLineEdit->text();
    if(!nomeAutore.isEmpty() && !cognomeAutore.isEmpty()){
        QString nomeAutore=ui->nomeAutoreLineEdit->text();
        QString cognomeAutore=ui->cognomeAutoreLineEdit->text();
        QString afferenzaAutore=ui->afferenzaAutoreComboBox->currentText();
        Autore* nuovoAutore= new Autore(nomeAutore.toStdString(), cognomeAutore.toStdString(), afferenzaAutore.toStdString());

        //(*)aggiungo al DB
        Database::getInstance()->aggiungiAutore(nuovoAutore);

        ui->autoriListWidget->addItem(QString::fromStdString(std::to_string(nuovoAutore->getId())) + " - " + nomeAutore+ " - " + cognomeAutore + " - " + afferenzaAutore);

        //(**)pulisco i vari widget per l'input
        ui->nomeAutoreLineEdit->clear();
        ui->cognomeAutoreLineEdit->clear();
        ui->afferenzaAutoreComboBox->setCurrentIndex(0);

        //(***)inserisco i dati in widget che li visualizzeranno
        ui->listaAutoriArticoloListWidget->addItem(QString::fromStdString(nuovoAutore->ritornaStringAutore()));
        ui->b1c12ComboBox->addItem(QString::fromStdString(nuovoAutore->ritornaStringAutore()));
        ui->dComboBox->addItem(QString::fromStdString(nuovoAutore->ritornaStringAutore()));
    }
}

//*********************************************************AGGIUNTA CONFERENZA*********************************************************

void MainWindow::on_aggiungiOrganizzatoreButton_clicked()
{
    QString nomeOrganizzatore= ui->nomeOrganizzatoreLineEdit->text();
    if(!nomeOrganizzatore.isEmpty()){
        ui->listaOrganizzatoriConferenzaListWidget->addItem(nomeOrganizzatore);
        ui->nomeOrganizzatoreLineEdit->clear();
    }
}

void MainWindow::on_aggiungiConferenzaButton_clicked()
{
    QString nomeConferenza= ui->nomeConferenzaLineEdit->text();
    QString acronimoConferenza= ui->acronimoConferenzaLineEdit->text();
    QString luogoConferenza= ui->luogoConferenzaLineEdit->text();
    QString numeroPartecipantiConferenza= ui->numeroPartecipantiConferenzaSpinBox->text();
    QString dataConferenzaString= ui->giornoConferenzaComboBox->currentText() + "/" + ui->meseConferenzaComboBox->currentText() + "/" + ui->annoConferenzaComboBox->currentText();
    if(!nomeConferenza.isEmpty() && !acronimoConferenza.isEmpty() && !luogoConferenza.isEmpty()){
        int giorno= std::stoi(ui->giornoConferenzaComboBox->currentText().toStdString());
        int mese= std::stoi(ui->meseConferenzaComboBox->currentText().toStdString());
        int anno= std::stoi(ui->annoConferenzaComboBox->currentText().toStdString());
        Data* nuovaData= new Data(giorno, mese, anno);
        Conferenza* nuovaConferenza= new Conferenza(nomeConferenza.toStdString(), acronimoConferenza.toStdString(), luogoConferenza.toStdString(), nuovaData, ui->numeroPartecipantiConferenzaSpinBox->value());
        int dimListaOrganizzatori= ui->listaOrganizzatoriConferenzaListWidget->count();
        if(dimListaOrganizzatori!=0){
            for(int i=0; i<dimListaOrganizzatori; i++){
                nuovaConferenza->aggiungiOrganizzatore(ui->listaOrganizzatoriConferenzaListWidget->item(i)->text().toStdString());
            }
            ui->listaOrganizzatoriConferenzaListWidget->clear();
        }

        //(*)
        Database::getInstance()->aggiungiConferenza(nuovaConferenza);

        //(**)
        ui->nomeConferenzaLineEdit->clear();
        ui->acronimoConferenzaLineEdit->clear();
        ui->luogoConferenzaLineEdit->clear();
        ui->numeroPartecipantiConferenzaSpinBox->setValue(0);
        ui->giornoConferenzaComboBox->setCurrentIndex(0);
        ui->meseConferenzaComboBox->setCurrentIndex(0);
        ui->annoConferenzaComboBox->setCurrentIndex(0);
        ui->nomeOrganizzatoreLineEdit->clear();

        //(***)
        ui->conferenzeListWidget->addItem(QString::fromStdString(nuovaConferenza->ritornaStringConferenza() + " - Lista organizzatori: " + nuovaConferenza->getStringListaOrganizzatori()));
        ui->pubblicatoPerConferenzaComboBox->addItem(acronimoConferenza);
        ui->b4ComboBox->addItem(QString::fromStdString(nuovaConferenza->ritornaStringConferenza()));
    }
}

//*********************************************************AGGIUNTA RIVISTA*********************************************************

void MainWindow::on_aggiungiRivistaButton_clicked()
{
    QString nomeRivista= ui->nomeRivistaLineEdit->text();
    QString acronimoRivista= ui->acronimoRivistaLineEdit->text();
    QString editoreRivista= ui->editoreRivistaLineEdit->text(); if(!nomeRivista.isEmpty() && !acronimoRivista.isEmpty() && !editoreRivista.isEmpty()){
        int giorno= std::stoi(ui->giornoRivistaComboBox->currentText().toStdString());
        int mese= std::stoi(ui->meseRivistaComboBox->currentText().toStdString());
        int anno= std::stoi(ui->annoRivistaComboBox->currentText().toStdString());
        Data* nuovaData= new Data(giorno, mese, anno);
        Rivista* nuovaRivista= new Rivista(nomeRivista.toStdString(), acronimoRivista.toStdString(), editoreRivista.toStdString(), nuovaData, ui->volumeRivistaSpinBox->value());

        //(*)
        Database::getInstance()->aggiungiRivista(nuovaRivista);

        //(**)
        ui->nomeRivistaLineEdit->clear();
        ui->acronimoRivistaLineEdit->clear();
        ui->editoreRivistaLineEdit->clear();
        ui->volumeRivistaSpinBox->clear();
        ui->giornoRivistaComboBox->setCurrentIndex(0);
        ui->meseRivistaComboBox->setCurrentIndex(0);
        ui->annoRivistaComboBox->setCurrentIndex(0);
        ui->volumeRivistaSpinBox->setValue(0);

        //(***)
        ui->pubblicatoPerRivistaComboBox->addItem(acronimoRivista);
        ui->rivisteListWidget->addItem(QString::fromStdString(nuovaRivista->ritornaStringRivista()));
        ui->b5ComboBox->addItem(QString::fromStdString(nuovaRivista->ritornaStringRivista()));
    }
}

//*********************************************************AGGIUNTA ARTICOLO*********************************************************

void MainWindow::on_pubblicatoPerConferenzaRadioButton_clicked()
{
    ui->pubblicatoPerRivistaComboBox->setEnabled(false);
    ui->pubblicatoPerConferenzaComboBox->setEnabled(true);
}

void MainWindow::on_pubblicatoPerRivistaRadioButton_clicked()
{
    ui->pubblicatoPerConferenzaComboBox->setEnabled(false);
    ui->pubblicatoPerRivistaComboBox->setEnabled(true);
}

void MainWindow::on_aggiungiKeywordButton_clicked()
{
    QString keywordArticolo= ui->keywordArticoloLineEdit->text();
    if(!keywordArticolo.isEmpty()){
        ui->listaKeywordArticoloListWidget->addItem(keywordArticolo);
        ui->keywordArticoloLineEdit->clear();
    }
}

void MainWindow::on_listaAutoriArticoloListWidget_itemDoubleClicked(QListWidgetItem *item)
{
    ui->listaAutoriSelezionatiArticoloListWidget->addItem(item->text());
}

void MainWindow::on_listaArticoliCorrelatiArticoloListWidget_itemDoubleClicked(QListWidgetItem *item)
{
    ui->listaArticoliCorrelatiSelezionatiArticoloListWidget->addItem(item->text());
}

void MainWindow::on_aggiungiArticoloButton_clicked()
{
    QString titoloArticolo= ui->titoloArticoloLineEdit->text();
    QString numeroPagineArticolo= ui->numeroPagineArticoloSpinBox->text();
    if(!titoloArticolo.isEmpty() && ui->listaAutoriSelezionatiArticoloListWidget->count()!=0 && ui->listaKeywordArticoloListWidget->count()!=0 && (ui->pubblicatoPerConferenzaRadioButton->isChecked() || ui->pubblicatoPerRivistaRadioButton->isChecked())){
        Articolo* nuovoArticolo= new Articolo(titoloArticolo.toStdString(), ui->numeroPagineArticoloSpinBox->value(), ui->prezzoArticoloDoubleSpinBox->value());

        //Differenzio per articolo pubblicato per una conferenza rispetto ad uno pubblicato per rivista
        if(ui->pubblicatoPerConferenzaRadioButton->isChecked()){
            if(!ui->pubblicatoPerConferenzaComboBox->currentText().isEmpty()){
                Conferenza* nuovaConferenza= Database::getInstance()->getConferenzaPerAcronimo(ui->pubblicatoPerConferenzaComboBox->currentText().toStdString());
                nuovoArticolo->aggiungiConferenza(nuovaConferenza);
            }
        }
        else if(ui->pubblicatoPerRivistaRadioButton->isChecked()){
            if(!ui->pubblicatoPerRivistaComboBox->currentText().isEmpty()){
                Rivista* nuovaRivista= Database::getInstance()->getRivistaPerAcronimo(ui->pubblicatoPerRivistaComboBox->currentText().toStdString());
                nuovoArticolo->aggiungiRivista(nuovaRivista);
            }
        }
        int dimListaAutoriSelezionati= ui->listaAutoriSelezionatiArticoloListWidget->count();
        for(int i=0; i<dimListaAutoriSelezionati; i++){
            string stringaAutore= ui->listaAutoriSelezionatiArticoloListWidget->item(i)->text().toStdString();
            int idAutore=std::stoi(stringaAutore.substr(0, stringaAutore.find(" ")));
            nuovoArticolo->aggiungiAutore(Database::getInstance()->getAutorePerId(idAutore));
        }
        int dimListaArticoliCorrelatiSelezionati= ui->listaArticoliCorrelatiSelezionatiArticoloListWidget->count();
        for(int i=0; i<dimListaArticoliCorrelatiSelezionati; i++){
            string stringaArticolo= ui->listaArticoliCorrelatiSelezionatiArticoloListWidget->item(i)->text().toStdString();
            int idArticolo=std::stoi(stringaArticolo.substr(0, stringaArticolo.find(" ")));
            nuovoArticolo->aggiungiArticoloCorrelato(Database::getInstance()->getArticoloPerId(idArticolo));
        }
        int dimListaKeyword= ui->listaKeywordArticoloListWidget->count();
        for(int i=0; i<dimListaKeyword; i++){
            nuovoArticolo->aggiungiKeyword(ui->listaKeywordArticoloListWidget->item(i)->text().toStdString());
        }

        //(*)
        Database::getInstance()->aggiungiArticolo(nuovoArticolo);

        //(**)
        ui->titoloArticoloLineEdit->clear();
        ui->numeroPagineArticoloSpinBox->setValue(0);
        ui->prezzoArticoloDoubleSpinBox->setValue(0.00);
        ui->listaAutoriSelezionatiArticoloListWidget->clear();
        ui->listaArticoliCorrelatiSelezionatiArticoloListWidget->clear();
        ui->keywordArticoloLineEdit->clear();
        ui->listaKeywordArticoloListWidget->clear();
        ui->pubblicatoPerConferenzaRadioButton->setChecked(false);
        ui->pubblicatoPerRivistaRadioButton->setChecked(false);
        ui->pubblicatoPerConferenzaComboBox->setCurrentIndex(0);
        ui->pubblicatoPerRivistaComboBox->setCurrentIndex(0);

        //(***)
        ui->articoliListWidget->addItem(QString::fromStdString(nuovoArticolo->ritornaStringArticolo() + " - Lista autori: " + nuovoArticolo->getStringListaAutori() + " - Lista articoli correlati: " + nuovoArticolo->getStringListaArticoliCorrelati() + " - Lista keyword: " + nuovoArticolo->daListaDiStringheAStringa(nuovoArticolo->getKeyword())));
        ui->listaArticoliCorrelatiArticoloListWidget->addItem(QString::fromStdString(nuovoArticolo->ritornaStringArticolo()));
    }
}

//-------------------------------------------------------Svolgimento Richieste-------------------------------------------------------

//B 1
//C 1-2
void MainWindow::on_b1c12Button_clicked()
{
    if(!ui->b1c12ComboBox->currentText().isEmpty()){
        ui->b1ListWidget->clear();

        //mi ricavo la lista degli articoli di un autore
        std::string autore= ui->b1c12ComboBox->currentText().toStdString();
        int idAutore= std::stoi(autore.substr(0, autore.find(" ")));
        list<Articolo*> listaArticoliAutore= Database::getInstance()->getArticoliPerIdAutore(idAutore);

        //li visualizzo in base alle specifiche
        if(ui->cNoneRadioButton->isChecked())
            for(Articolo* articolo: listaArticoliAutore)
                ui->b1ListWidget->addItem(QString::fromStdString(articolo->ritornaStringArticolo()));
        else if(ui->c1BassoRadioButton->isChecked()){
            Articolo* articoloPrezzoMinore= Database::getInstance()->getArticoloPrezzoMinoreDiAutore(idAutore);
            list<Articolo*> listaArticoliPrezzoBasso;
            for(Articolo* articolo: listaArticoliAutore)
                if(articolo->getPrezzo()==articoloPrezzoMinore->getPrezzo())
                    listaArticoliPrezzoBasso.push_back(articolo);
            for(Articolo* articolo: listaArticoliPrezzoBasso)
                ui->b1ListWidget->addItem(QString::fromStdString(articolo->ritornaStringArticolo()));
        }
        else if(ui->c2AltoRadioButton->isChecked()){
            Articolo* articoloPrezzoMaggiore= Database::getInstance()->getArticoloPrezzoMaggioreDiAutore(idAutore);
            list<Articolo*> listaArticoliPrezzoAlto;
            for(Articolo* articolo: listaArticoliAutore)
                if(articolo->getPrezzo()==articoloPrezzoMaggiore->getPrezzo())
                    listaArticoliPrezzoAlto.push_back(articolo);
            for(Articolo* articolo: listaArticoliPrezzoAlto)
                ui->b1ListWidget->addItem(QString::fromStdString(articolo->ritornaStringArticolo()));
        }
    }
}

//B 4-5
void MainWindow::on_b4RadioButton_clicked()
{
    ui->b5ComboBox->setEnabled(false);
    ui->b4ComboBox->setEnabled(true);
}

void MainWindow::on_b5RadioButton_clicked()
{
    ui->b4ComboBox->setEnabled(false);
    ui->b5ComboBox->setEnabled(true);
}

void MainWindow::on_b45Button_clicked()
{
    //prendo i dati della conferenza/rivista nella comboBox, mi ricavo l'acronimo (in alternativa avrei potuto inserire direttamente l'acronimo nella
    //comboBox), poi vado a ricavarmi gli articoli facenti riferimento ad una conferenza/rivista
    if(ui->b4RadioButton->isChecked()){
        if(!ui->b4ComboBox->currentText().isEmpty()){
            ui->b45ListWidget->clear();
            std::string conferenza= ui->b4ComboBox->currentText().toStdString();
            std::string acronimoConferenza= conferenza.substr(0, conferenza.find(" "));
            for(Articolo* articolo: Database::getInstance()->getArticoliPerAcronimoConferenza(acronimoConferenza)){
                ui->b45ListWidget->addItem(QString::fromStdString(articolo->ritornaStringArticolo()));
            }
        }
    }
    else if(ui->b5RadioButton->isChecked()){
        if(!ui->b5ComboBox->currentText().isEmpty()){
            ui->b45ListWidget->clear();
            std::string rivista= ui->b5ComboBox->currentText().toStdString();
            std::string acronimoRivista= rivista.substr(0, rivista.find(" "));
            for(Articolo* articolo: Database::getInstance()->getArticoliPerAcronimoRivista(acronimoRivista)){
                ui->b45ListWidget->addItem(QString::fromStdString(articolo->ritornaStringArticolo()));
            }
        }
    }
}

//C 6*
void MainWindow::on_c6Button_clicked()
{
    ui->c6ListWidget->clear();
    double max=0.00;

    //ricavo il vettore dei prezzi per ogni keyword, ogni posizione i corrisponde alla posizione j sul vettore delle keyword nel DB
    vector<double> tmp= Database::getInstance()->getVectorCostiKeyword();

    //trovo il massimo e vedo se altri hanno il prezzo più alto
    int sizeVector= tmp.size();
    for(int i=0; i<sizeVector; i++)
        if(max < tmp[i])
            max= tmp[i];
    for(int i=0; i< sizeVector; i++)
        if(max==tmp[i])
            ui->c6ListWidget->addItem(QString::fromStdString(Database::getInstance()->getVectorKeyword()[i]));
}

//D 2-6*
void MainWindow::on_dButton_clicked()
{
    if(!ui->dComboBox->currentText().isEmpty()){
        ui->dListWidget->clear();

        //ottengo l'id dell'autore, mi ricavo gli articoli scritti da lui e ordino in base alle specifiche
        std::string autore= ui->dComboBox->currentText().toStdString();
        int id= std::stoi(autore.substr(0, autore.find(" ")));
        list<Articolo*> tmp= Database::getInstance()->getArticoliPerIdAutore(id);
        if(ui->d2RadioButton->isChecked()){
            tmp.sort(Database::getInstance()->comparaArticoliPerPrezzoCrescente);
            for(Articolo* articolo: tmp)
                ui->dListWidget->addItem(QString::fromStdString(articolo->ritornaStringArticolo()));
        }
        else if(ui->d6RadioButton->isChecked()){
            tmp.sort(Database::getInstance()->comparaArticoliPerAnnoPrezzoKeyword);
            for(Articolo* articolo: tmp){
                ui->dListWidget->addItem(QString::fromStdString(articolo->ritornaStringArticolo()));
            }
        }
    }
}

//E 6*
void MainWindow::on_e6Button_clicked()
{
    ui->e6ListWidget->clear();

    //Per ogni rivista nella lista delle riviste se questa è specialistica la visualizzo
    for(Rivista* rivista: Database::getInstance()->getListaRiviste())
        if(Database::getInstance()->specialistica(rivista))
            ui->e6ListWidget->addItem(QString::fromStdString(rivista->ritornaStringRivista()));
}

//F 4**
void MainWindow::on_f4Button_clicked()
{
    if(ui->autoriDaFileRadioButton->isChecked()){
        ui->f4ListWidget->clear();
        Database::getInstance()->scriviSuFile("autori.txt");
        ifstream file("autori.txt");
        string autore;
        while(getline(file, autore))
            ui->f4ListWidget->addItem(QString::fromStdString(autore));
    }
    else if(ui->conferenzeDaFileRadioButton->isChecked()){
        ui->f4ListWidget->clear();
        Database::getInstance()->scriviSuFile("conferenze.txt");
        ifstream file("conferenze.txt");
        string conferenza;
        while(getline(file, conferenza))
            ui->f4ListWidget->addItem(QString::fromStdString(conferenza));
    }
    else if(ui->rivisteDaFileRadioButton->isChecked()){
        ui->f4ListWidget->clear();
        Database::getInstance()->scriviSuFile("riviste.txt");
        ifstream file("riviste.txt");
        string rivista;
        while(getline(file, rivista))
            ui->f4ListWidget->addItem(QString::fromStdString(rivista));
    }
    else if(ui->articoliDaFileRadioButton->isChecked()){
        ui->f4ListWidget->clear();
        Database::getInstance()->scriviSuFile("articoli.txt");
        ifstream file("articoli.txt");
        string articolo;
        while(getline(file, articolo))
            ui->f4ListWidget->addItem(QString::fromStdString(articolo));
    }
}
