#include "Conferenza.h"

//SET
void Conferenza::setNome(string nuovoNome){ nome=nuovoNome; }
void Conferenza::setAcronimo(string nuovoAcronimo){ acronimo=nuovoAcronimo; }
void Conferenza::setLuogo(string nuovoLuogo){ luogo=nuovoLuogo; }
void Conferenza::setData(Data* nuovaData){ data=nuovaData; }
void Conferenza::setNumeroPartecipanti(int n){ numeroPartecipanti=n; }
void Conferenza::setListaOrganizzatori(list<string> nuovaListaOrganizzatori){ listaOrganizzatori=nuovaListaOrganizzatori; }

//GET
string Conferenza::getNome() const { return nome; }
string Conferenza::getAcronimo() const { return acronimo; }
string Conferenza::getLuogo() const { return luogo; }
Data* Conferenza::getData() const { return data; }
int Conferenza::getNumeroPartecipanti() const { return numeroPartecipanti; }
list<string> Conferenza::getListaOrganizzatori() const { return listaOrganizzatori; }

//COSTRUTTORI
Conferenza::Conferenza(){
    nome="NONE";
    acronimo="NONE";
    luogo="NONE";
    data=new Data();
}
Conferenza::Conferenza(string nuovoNome, string nuovoAcronimo, string nuovoLuogo, Data* nuovaData, int nuovoNumeroPartecipanti){
    nome=nuovoNome;
    acronimo=nuovoAcronimo;
    luogo=nuovoLuogo;
    data=nuovaData;
    numeroPartecipanti=nuovoNumeroPartecipanti;
}
Conferenza::Conferenza(string nuovoNome, string nuovoAcronimo, string nuovoLuogo, Data* nuovaData, int nuovoNumeroPartecipanti, list<string> nuovaListaOrganizzatori) {
    nome=nuovoNome;
    acronimo=nuovoAcronimo;
    luogo=nuovoLuogo;
    data=nuovaData;
    numeroPartecipanti=nuovoNumeroPartecipanti;
    listaOrganizzatori=nuovaListaOrganizzatori;
}
Conferenza::~Conferenza(){ delete data; }

void Conferenza::aggiungiOrganizzatore(string organizzatore){
    bool found=false;
    for(string s : listaOrganizzatori)
        if(s.compare(organizzatore)==0)
            found=true;
    if(!found)
        listaOrganizzatori.push_back(organizzatore);
}

string Conferenza::getStringListaOrganizzatori() const{
    string tmp;
    for(string s: listaOrganizzatori)
        tmp+= s + ", ";
    tmp+="FINE LISTA";
    return tmp;
}

string Conferenza::ritornaStringConferenza() const{ return acronimo + " - " + nome + " - " + luogo + " - " + data->ritornaStringData() + " - " + to_string(numeroPartecipanti); }

string Conferenza::ritornaStringConferenzaConListe() const{ return ritornaStringConferenza() + " - Lista organizzatori: " + getStringListaOrganizzatori(); }

/*
creaAcronimo(){
    int start;
    int end = 0;
    vector<string> out;
    while ((start = nome.find_first_not_of(" ", end)) != string::npos){
        end = nome.find(" ", start);
        out.push_back(nome.substr(start, end - start));
    }
    for(string s:out)
        acronimo+=toupper(s[0]);
}
*/
