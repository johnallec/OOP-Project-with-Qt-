#include "Articolo.h"

//SET
void Articolo::setTitolo(string nuovoTitolo){ titolo=nuovoTitolo; }
void Articolo::setNumeroPagine(int n){ numeroPagine=n; }
void Articolo::setPrezzo(double n){ prezzo=n; }
void Articolo::setListaAutori(list<Autore*> lista){ listaAutori=lista; }
void Articolo::setListaKeyword(list<string> lista){ listaKeyword=lista; }
void Articolo::setListaArticoliCorrelati(list<Articolo*> lista){ listaArticoliCorrelati=lista; }
void Articolo::setRivista(Rivista* nuovaRivista){ rivista=nuovaRivista; }
void Articolo::setConferenza(Conferenza *nuovaConferenza){ conferenza=nuovaConferenza; }

//GET
int Articolo::getId() const{ return id; }
string Articolo::getTitolo() const{ return titolo; }
int Articolo::getNumeroPagine() const{ return numeroPagine; }
double Articolo::getPrezzo() const{ return prezzo; }
list<Autore*> Articolo::getAutori() const{ return listaAutori; }
list<string> Articolo::getKeyword() const{ return listaKeyword; }
list<Articolo*> Articolo::getArticoliCorrelati() const { return listaArticoliCorrelati; }
Rivista* Articolo::getRivista() const { return rivista; }
Conferenza* Articolo::getConferenza() const { return conferenza; }

//COSTRUTTORI
int Articolo::lastId=0;
Articolo::Articolo(){
    titolo="NONE";
    numeroPagine=-1;
    prezzo=-1.0;
    rivista=nullptr;
    conferenza=nullptr;
}
Articolo::Articolo(string nuovoTitolo, int nuovoNumeroPagine, double nuovoPrezzo){
    titolo=nuovoTitolo;
    numeroPagine=nuovoNumeroPagine;
    prezzo=nuovoPrezzo;
}
Articolo::Articolo(string nuovoTitolo, int nuovoNumeroPagine, double nuovoPrezzo, Rivista* nuovaRivista) {
    titolo=nuovoTitolo;
    numeroPagine=nuovoNumeroPagine;
    prezzo=nuovoPrezzo;
    rivista=nuovaRivista;
    conferenza=nullptr;
}
Articolo::Articolo(string nuovoTitolo, int nuovoNumeroPagine, double nuovoPrezzo, Conferenza* nuovaConferenza) {
    titolo=nuovoTitolo;
    numeroPagine=nuovoNumeroPagine;
    prezzo=nuovoPrezzo;
    conferenza=nuovaConferenza;
    rivista=nullptr;
}
Articolo::~Articolo(){
    delete conferenza;
    delete rivista;
}

void Articolo::aggiungiAutore(Autore* autore){
    bool found=false;
    for(Autore* other : listaAutori)
        if(other->getId()==autore->getId())
            found=true;
    if(!found)
        listaAutori.push_back(autore);
}

void Articolo::aggiungiKeyword(string k){
    bool found=false;
    for(string s : listaKeyword){
        if(s.compare(k)==0)
            found=true;
    }
    if(!found)
        listaKeyword.push_back(k);
}

void Articolo::aggiungiArticoloCorrelato(Articolo* articolo){
    bool found=false;
    for(Articolo* other : listaArticoliCorrelati){
        if(other->getId()==articolo->getId())
            found=true;
    }
    if(!found)
        listaArticoliCorrelati.push_back(articolo);
}

void Articolo::aggiungiRivista(Rivista* nuovaRivista){ rivista= nuovaRivista; }
void Articolo::aggiungiConferenza(Conferenza* nuovaConferenza){ conferenza= nuovaConferenza; }

string Articolo::daListaDiStringheAStringa(list<string> lista) const{
    string tmp;
    for(string s:lista)
        tmp+= s + ", ";
    tmp+="FINE LISTA";
    return tmp;
}

string Articolo::getStringListaAutori() const{
    string tmp;
    for(Autore* autore: listaAutori)
        tmp+= autore->getNome() + " " + autore->getCognome() + ", ";
    tmp+="FINE LISTA";
    return tmp;
}

string Articolo::getStringListaArticoliCorrelati() const{
    string tmp;
    for(Articolo* articolo: listaArticoliCorrelati)
        tmp+= articolo->getTitolo() + ", ";
    tmp+="FINE LISTA";
    return tmp;
}

bool Articolo::contieneKeyword(string keyword){
    for(string keywordArticolo: listaKeyword){
        if(keywordArticolo.compare(keyword)==0)
            return true;
    }
    return false;
}

string Articolo::ritornaStringArticolo() const{
    if(conferenza!=nullptr)
        return to_string(id) + " - " + titolo + " - " + to_string(numeroPagine) + " - " + to_string(prezzo) + " - Conferenza: " + conferenza->getAcronimo() + " in data: " + conferenza->getData()->ritornaStringData();
    else if(rivista!=nullptr)
        return to_string(id) + " - " + titolo + " - " + to_string(numeroPagine) + " - " + to_string(prezzo) + " - Rivista: " + rivista->getAcronimo() + " in data: " + rivista->getData()->ritornaStringData();
    else
        return to_string(id) + " - " + titolo + " - " + to_string(numeroPagine) + " - " + to_string(prezzo);
}

string Articolo::ritornaStringArticoloConListe() const{ return ritornaStringArticolo() + " - Lista autori: " + getStringListaAutori() + " - Lista articoli correlati: " + getStringListaArticoliCorrelati() + " - Lista keyword: " + daListaDiStringheAStringa(listaKeyword); }
