#include "Database.h"
#include <limits>

Database* Database::instance=0;

Database* Database::getInstance(){
    if(instance==0)
        instance = new Database();
    return instance;
}

bool Database::containStringVector(vector<string> vettore, string stringa){
    for(string stringaInLista: vettore)
        if(stringaInLista.compare(stringa)==0)
            return true;
    return false;
}
bool Database::containStringList(list<string> lista, string stringa){
    for(string stringaInLista: lista)
        if(stringaInLista.compare(stringa)==0)
            return true;
    return false;
}
bool Database::containAcronimoConferenzaListaConferenze(string acronimo){
    for(Conferenza* conferenza: listaConferenze)
        if(conferenza->getAcronimo().compare(acronimo)==0)
            return true;
    return false;
}
bool Database::containAcronimoRivistaListaRiviste(string acronimo){
    for(Rivista* rivista: listaRiviste)
        if(rivista->getAcronimo().compare(acronimo)==0)
            return true;
    return false;
}

void Database::aggiungiAutore(Autore* autore){ listaAutori.push_back(autore); }
void Database::aggiungiConferenza(Conferenza* conferenza){
    if(!containAcronimoConferenzaListaConferenze(conferenza->getAcronimo()))
        listaConferenze.push_back(conferenza);
}
void Database::aggiungiRivista(Rivista *rivista){
    if(!containAcronimoRivistaListaRiviste(rivista->getAcronimo()))
        listaRiviste.push_back(rivista);
}
void Database::aggiungiArticolo(Articolo *articolo){
    for(string keyword: articolo->getKeyword())
        if(!containStringVector(vectorKeyword, keyword))
            vectorKeyword.push_back(keyword);
    listaArticoli.push_back(articolo);
}

list<Autore*> Database::getListaAutori() const{ return listaAutori; }
list<Conferenza*> Database::getListaConferenze() const{ return listaConferenze; }
list<Rivista*> Database::getListaRiviste() const{ return listaRiviste; }
list<Articolo*> Database::getListaArticoli() const{ return listaArticoli; }
vector<string> Database::getVectorKeyword() const{ return vectorKeyword; }

Autore* Database::getAutorePerId(int id) const{
    for(Autore* autore: listaAutori)
        if(autore->getId()==id)
            return autore;
    return nullptr;
}

Articolo* Database::getArticoloPerId(int id) const{
    for(Articolo* articolo: listaArticoli)
        if(articolo->getId()==id)
            return articolo;
    return nullptr;
}

Conferenza* Database::getConferenzaPerAcronimo(string acronimo) const{
    for(Conferenza* conferenza: listaConferenze){
        if(conferenza->getAcronimo().compare(acronimo)==0)
            return conferenza;
    }
    return nullptr;
}

Rivista* Database::getRivistaPerAcronimo(string acronimo) const{
    for(Rivista* rivista: listaRiviste)
        if(rivista->getAcronimo().compare(acronimo)==0)
            return rivista;
    return nullptr;
}

list<Articolo*> Database::getArticoliRelativiA(int scelta) const{
    list<Articolo*> tmp;
    if(scelta==0){
        for(Articolo* articolo: listaArticoli){
            if(articolo->getConferenza()!=nullptr){
                tmp.push_back(articolo);
            }
        }
    }
    else{
        for(Articolo* articolo: listaArticoli){
            if(articolo->getRivista()!=nullptr){
                tmp.push_back(articolo);
            }
        }
    }
    return tmp;
}

list<Articolo*> Database::getArticoliPerIdAutore(int id) const{
    list<Articolo*> tmp;
    for(Articolo* articolo: listaArticoli)
        for(Autore* autore: articolo->getAutori())
            if(autore->getId()==id)
                tmp.push_back(articolo);
    return tmp;
}

list<Articolo*> Database::getArticoliPerAcronimoConferenza(string acronimo) const{
    list<Articolo*> tmp;

    for(Articolo* articolo: getArticoliRelativiA(0)){
        if(articolo->getConferenza()->getAcronimo().compare(acronimo)==0)
            tmp.push_back(articolo);
    }
    return tmp;
}

list<Articolo*> Database::getArticoliPerAcronimoRivista(string acronimo) const{

    list<Articolo*> tmp;
    for(Articolo* articolo: getArticoliRelativiA(1)){
        if(articolo->getRivista()->getAcronimo().compare(acronimo)==0)
            tmp.push_back(articolo);
    }
    return tmp;
}

Articolo* Database::getArticoloPrezzoMinoreDiAutore(int idAutore) const{
    double min=__DBL_MAX__;
    Articolo* tmp;
    for(Articolo* articolo: getArticoliPerIdAutore(idAutore))
        if(articolo->getPrezzo()<min){
            min=articolo->getPrezzo();
            tmp=articolo;
        }
    return tmp;
}

Articolo* Database::getArticoloPrezzoMaggioreDiAutore(int idAutore) const{
    double max=0;
    Articolo* tmp;
    for(Articolo* articolo: getArticoliPerIdAutore(idAutore))
        if(articolo->getPrezzo()>max){
            max=articolo->getPrezzo();
            tmp=articolo;
        }
    return tmp;
}

vector<double> Database::getVectorCostiKeyword() const{
    vector<double> tmp;
    for(string keyword: vectorKeyword)
        tmp.push_back(0.00);
    int sizeVectorKeyword= vectorKeyword.size();
    for(int i=0; i<sizeVectorKeyword; i++)
        for(Articolo* articolo: listaArticoli)
            if(articolo->contieneKeyword(vectorKeyword[i]))
                tmp[i]+=articolo->getPrezzo();
    return tmp;
}

bool Database::comparaArticoliPerPrezzoCrescente(Articolo *a1, Articolo *a2){
    return a1->getPrezzo() < a2->getPrezzo();
}

bool Database::comparaArticoliPerPrezzoDecrescente(Articolo *a1, Articolo *a2){
    return a1->getPrezzo() > a2->getPrezzo();
}

bool Database::comparaArticoliPerAnnoPrezzoKeyword(Articolo *a1, Articolo *a2){
    int a1Anno;
    int a2Anno;

    if(a1->getConferenza()!=nullptr)
        a1Anno= a1->getConferenza()->getData()->getAnno();
    else
        a1Anno= a1->getRivista()->getData()->getAnno();

    if(a2->getConferenza()!=nullptr)
        a2Anno= a2->getConferenza()->getData()->getAnno();
    else
        a2Anno= a2->getRivista()->getData()->getAnno();

    //confronti

    if(a1Anno == a2Anno){
        if(a1->getPrezzo()==a2->getPrezzo()){
            return a1->getKeyword().front() < a2->getKeyword().front();
        }
        else
            return a1->getPrezzo() > a2 -> getPrezzo();
    }
    else
        return a1Anno < a2Anno;

    return false;
}

bool Database::insiemeProprio(Rivista *r1, Rivista *r2){
    list<string> r1Keywords;
    list<string> r2Keywords;

    for(Articolo* articoloR1: getArticoliPerAcronimoRivista(r1->getAcronimo())){
        for(string keyword: articoloR1->getKeyword()){
            if(!containStringList(r1Keywords, keyword)){
                r1Keywords.push_back(keyword);
            }
        }
    }

    for(Articolo* articoloR2: getArticoliPerAcronimoRivista(r2->getAcronimo())){
        for(string keyword: articoloR2->getKeyword()){
            if(!containStringList(r2Keywords, keyword)){
                r2Keywords.push_back(keyword);
            }
        }
    }

    if(r1Keywords.size() >= r2Keywords.size())
        return false;

    for(string keywordR1: r1Keywords){
        if(!containStringList(r2Keywords, keywordR1))
            return false;
    }

    return true;
}

bool Database::specialistica(Rivista* rivista){
    for(Rivista* rivistaInLista: listaRiviste)
        if(rivistaInLista->getAcronimo().compare(rivista->getAcronimo())!=0)
            if(insiemeProprio(rivista, rivistaInLista))
                return true;
    return false;
}

void Database::scriviSuFile(string nomeFile){
    ofstream file(nomeFile);
    if(nomeFile.compare("autori.txt")==0){
        for(Autore* autore: listaAutori)
            file << autore->ritornaStringAutore() << "\n";
    }
    else if(nomeFile.compare("conferenze.txt")==0){
        for(Conferenza* conferenza: listaConferenze)
            file << conferenza->ritornaStringConferenzaConListe() << "\n";
    }
    else if(nomeFile.compare("riviste.txt")==0){
        for(Rivista* rivista: listaRiviste)
            file << rivista->ritornaStringRivista() << "\n";
    }
    else if(nomeFile.compare("articoli.txt")==0){
        for(Articolo* articolo: listaArticoli)
            file << articolo->ritornaStringArticoloConListe() << "\n";
    }
}
