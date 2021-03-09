#ifndef ARTICOLO_H
#define ARTICOLO_H

#include <list>
#include <string>
#include "Autore.h"
#include "Rivista.h"
#include "Conferenza.h"

using namespace std;

class Articolo {
    private:
        static int lastId;
        int id=++lastId;
        string titolo;
        int numeroPagine;
        list<Autore*> listaAutori;
        list<string> listaKeyword;
        double prezzo;
        list<Articolo*> listaArticoliCorrelati;
        Rivista* rivista;
        Conferenza* conferenza;

        ostream& print(ostream& o) const {
            o <<  id  << " " << titolo << " " << numeroPagine << " " << prezzo << " "
            << "\nLista autori: " << getStringListaAutori()
            << "\nLista keyword: " <<  daListaDiStringheAStringa(listaKeyword)
            << "\nLista articoli correlati: " << getStringListaArticoliCorrelati();
            return o;
        }

    public:
        // SET
        void setTitolo(string nuovoTitolo);
        void setNumeroPagine(int n);
        void setPrezzo(double n);
        void setListaAutori(list<Autore*> lista);
        void setListaKeyword(list<string> lista);
        void setListaArticoliCorrelati(list<Articolo*> lista);
        void setRivista(Rivista* nuovaRivista);
        void setConferenza(Conferenza* nuovaConferenza);

        // GET
        int getId() const;
        string getTitolo() const;
        int getNumeroPagine() const;
        double getPrezzo() const;
        list<Autore*> getAutori() const;
        list<string> getKeyword() const;
        list<Articolo*> getArticoliCorrelati() const;
        Rivista* getRivista() const;
        Conferenza* getConferenza() const;

        // COSTRUTTORI
        Articolo();
        Articolo(string nuovoTitolo, int nuovoNumeroPagine, double nuovoPrezzo);
        Articolo(string nuovoTitolo, int nuovoNumeroPagine, double nuovoPrezzo, Rivista* nuovaRivista);
        Articolo(string nuovoTitolo, int nuovoNumeroPagine, double nuovoPrezzo, Conferenza* nuovaConferenza);
        ~Articolo();

        string daListaDiStringheAStringa(list<string> lista) const;

        string getStringListaAutori() const;

        string getStringListaArticoliCorrelati() const;

        string ritornaStringArticolo() const;

        string ritornaStringArticoloConListe() const;

        void aggiungiAutore(Autore* autore);
        void aggiungiKeyword(string k);
        void aggiungiArticoloCorrelato(Articolo* articolo);
        void aggiungiRivista(Rivista* nuovaRivista);
        void aggiungiConferenza(Conferenza* nuovaConferenza);

        bool contieneKeyword(string keyword);

        friend ostream& operator<<(ostream& o, const Articolo& articolo) {
            return articolo.print(o);
        }

};

#endif
