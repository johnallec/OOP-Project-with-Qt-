#ifndef RIVISTA_H
#define RIVISTA_H

#include <iostream>
#include <string>
#include "Data.h"

using namespace std;

class Rivista{
    private:
        string nome;
        string acronimo;
        string editore;
        Data* data;
        int volume;

        ostream& print(ostream& o) const {
            o <<  nome  << " " << acronimo << " " << editore << " " << *data << " " << volume;
            return o;
        }

    public:
        //SET
        void setNome(string nuovoNome);
        void setAcronimo(string nuovoAcronimo);
        void setEditore(string nuovoEditore);
        void setData(Data* nuovaData);
        void setVolume(int nuovoVolume);

        //GET
        string getNome();
        string getAcronimo();
        string getEditore();
        Data* getData();
        int getVolume();

        //COSTRUTTORI
        Rivista();
        Rivista(string nuovoNome, string nuovoAcronimo, string nuovoEditore, Data* nuovaData, int nuovoVolume);
        ~Rivista();

        friend ostream& operator<<(ostream& o, const Rivista& rivista) { return rivista.print(o); }

        string ritornaStringRivista() const;

};

#endif
