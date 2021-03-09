#ifndef AUTORE_H
#define AUTORE_H

#include <iostream>

using namespace std;

class Autore {

    private:
        static int lastId;
        int id=++lastId;
        string nome;
        string cognome;
        string afferenza;

        ostream& print(ostream& o) const {
            o <<  Autore::id  << " " << nome << " " << cognome << " " << afferenza;
            return o;
        }

    public:
        // SET
        void setNome(string nuovoNome);
        void setCognome(string nuovoCognome);
        void setAfferenza(string nuovaAfferenza);

        // GET
        int getId() const;
        string getNome() const;
        string getCognome() const;
        string getAfferenza() const;

        // COSTRUTTORI
        Autore();
        Autore(string nuovoNome, string nuovoCognome, string nuovaAfferenza);

        friend ostream& operator<<(ostream& o, const Autore& autore) {
            return autore.print(o);
        }

        string ritornaStringAutore() const;

};

#endif
