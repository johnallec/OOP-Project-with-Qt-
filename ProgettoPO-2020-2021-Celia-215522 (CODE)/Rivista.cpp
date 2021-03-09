#include "Rivista.h"

//SET
void Rivista::setNome(string nuovoNome){ nome=nuovoNome; }
void Rivista::setAcronimo(string nuovoAcronimo){ acronimo=nuovoAcronimo; }
void Rivista::setEditore(string nuovoEditore){ editore=nuovoEditore; }
void Rivista::setData(Data* nuovaData){ data=nuovaData; }
void Rivista::setVolume(int nuovoVolume){ volume=nuovoVolume; }

//GET
string Rivista::getNome(){ return nome; }
string Rivista::getAcronimo(){ return acronimo; }
string Rivista::getEditore(){ return editore; }
Data* Rivista::getData(){ return data; }
int Rivista::getVolume(){ return volume; }

//COSTRUTTORI
Rivista::Rivista(){
    nome="NONE";
    acronimo="NONE";
    editore="NONE";
    data=new Data();
    volume=-1;
}
Rivista::Rivista(string nuovoNome, string nuovoAcronimo, string nuovoEditore, Data* nuovaData, int nuovoVolume){
    nome=nuovoNome;
    acronimo=nuovoAcronimo;
    editore=nuovoEditore;
    data=nuovaData;
    volume=nuovoVolume;
}
Rivista::~Rivista(){ delete data; }

string Rivista::ritornaStringRivista() const{ return acronimo + " - " + nome + " - " + editore + " - " + data->ritornaStringData() + " - " + to_string(volume); }
