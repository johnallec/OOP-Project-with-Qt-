#ifndef CONFERENZA_H
#define CONFERENZA_H

#include <iostream>
#include <string>
#include <list>
#include "Data.h"

using namespace std;

class Conferenza {
    private:
        string nome;
        string acronimo;
        string luogo;
        Data* data;
        int numeroPartecipanti;
        list<string> listaOrganizzatori;

        ostream& print(ostream& o) const {
            o <<  nome  << " " << acronimo << " " << luogo << " " << data << " " << numeroPartecipanti << " "
            << "\nLista organizzatori: " << getStringListaOrganizzatori();
            return o;
        }

    public:
        //SET
        void setNome(string nuovoNome);
        void setAcronimo(string nuovoAcronimo);
        void setLuogo(string nuovoLuogo);
        void setData(Data* nuovaData);
        void setNumeroPartecipanti(int n);
        void setListaOrganizzatori(list<string> nuovaListaOrganizzatori);

        //GET
        string getNome() const;
        string getAcronimo() const;
        string getLuogo() const;
        Data* getData() const;
        int getNumeroPartecipanti() const;
        list<string> getListaOrganizzatori() const;

        // COSTRUTTORI
        Conferenza();
        Conferenza(string nuovoNome, string nuovoAcronimo, string nuovoLuogo, Data* nuovaData, int nuovoNumeroPartecipanti);
        Conferenza(string nuovoNome, string nuovoAcronimo, string nuovoLuogo, Data* nuovaData, int nuovoNumeroPartecipanti, list<string> nuovaListaOrganizzatori);
        ~Conferenza();

        friend ostream& operator<<(ostream& o, const Conferenza& conferenza) { return conferenza.print(o); }

        void aggiungiOrganizzatore(string organizzatore);

        string getStringListaOrganizzatori() const;

        string ritornaStringConferenza() const;

        string ritornaStringConferenzaConListe() const;
};

#endif
