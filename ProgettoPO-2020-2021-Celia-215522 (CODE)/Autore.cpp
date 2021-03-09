#include "Autore.h"

// SET
void Autore::setNome(string nuovoNome){ nome=nuovoNome; }
void Autore::setCognome(string nuovoCognome){ cognome=nuovoCognome; }
void Autore::setAfferenza(string nuovaAfferenza){ afferenza=nuovaAfferenza; }

// GET
int Autore::getId() const{ return Autore::id; }
string Autore::getNome() const{ return nome; }
string Autore::getCognome() const{ return cognome; }
string Autore::getAfferenza() const{ return afferenza; }

//COSTRUTTORI
int Autore::lastId=0;
Autore::Autore(){
    nome="NONE";
    cognome="NONE";
    afferenza="NONE";
}
Autore::Autore(string nuovoNome, string nuovoCognome, string nuovaAfferenza){
    nome=nuovoNome;
    cognome=nuovoCognome;
    afferenza=nuovaAfferenza;
}

string Autore::ritornaStringAutore() const{ return to_string(Autore::id)  + " - " + nome + " - " + cognome + " - " + afferenza; }
