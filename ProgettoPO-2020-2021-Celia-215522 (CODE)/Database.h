#ifndef DATABASE_H
#define DATABASE_H

#include <list>
#include <vector>
#include <fstream>

#include "Autore.h"
#include "Articolo.h"
#include "Conferenza.h"
#include "Rivista.h"


class Database{
    private:
        static Database *instance;
        list<Autore*> listaAutori;
        list<Articolo*> listaArticoli;
        list<Conferenza*> listaConferenze;
        list<Rivista*> listaRiviste;
        vector<string> vectorKeyword;
        Database(){};


    public:
        void resetDatabase(){ delete instance; }
        static Database *getInstance();

        bool containStringVector(vector<string> vettore, string stringa); // data una lista l e una stringa s restituisco true se l contiene s, false altrimenti
        bool containStringList(list<string> vettore, string stringa);// dato un vettore v e una stringa s restituisco true se v contiene s, false altrimenti
        bool containAcronimoConferenzaListaConferenze(string acronimo);// dato un acronimo restituisco true se è contenuto nella lista delle conferenze
        bool containAcronimoRivistaListaRiviste(string acronimo);// dato un acronimo restituisco true se è contenuto nella lista delle riviste

        void aggiungiAutore(Autore* autore);
        void aggiungiConferenza(Conferenza* conferenza);
        void aggiungiRivista(Rivista* rivista);
        void aggiungiArticolo(Articolo* articolo);

        list<Autore*> getListaAutori() const;
        list<Conferenza*> getListaConferenze() const;
        list<Rivista*> getListaRiviste() const;
        list<Articolo*> getListaArticoli() const;
        vector<string> getVectorKeyword() const;

        Autore* getAutorePerId(int id) const;// restituisce un autore confrontandolo per id

        Articolo* getArticoloPerId(int id) const;// restituisce un articolo confrontandolo per id

        Conferenza* getConferenzaPerAcronimo(string acronimo) const;// restituisce una conferenza confrontandola per acronimo

        Rivista* getRivistaPerAcronimo(string acronimo) const;// restituisce una rivista confrontandola per acronimo

        list<Articolo*> getArticoliRelativiA(int scelta) const;// restituisce una lista di articoli relativi ad una conferenza(scelta=0)
                                                               // o ad una rivista (scelta!=0)

        list<Articolo*> getArticoliPerIdAutore(int id) const;// restituisce gli articoli scritti da un autore, ricercando per id

        list<Articolo*> getArticoliPerAcronimoConferenza(string acronimo) const;// restituisce gli articoli relativi ad una conferenza, ricercando per acronimo

        list<Articolo*> getArticoliPerAcronimoRivista(string acronimo) const;// restituisce gli articoli relativi ad una rivista, ricercando per acronimo

        Articolo* getArticoloPrezzoMinoreDiAutore(int idAutore) const;// restituisce l'articolo con il prezzo minore scritto da un autore ricercando per id

        Articolo* getArticoloPrezzoMaggioreDiAutore(int idAutore) const;// restituisce l'articolo con il prezzo maggiorescritto da un autore ricercando per id

        vector<double> getVectorCostiKeyword() const;// restituisce il vettore dei prezzo delle keyword

        static bool comparaArticoliPerPrezzoCrescente(Articolo* a1, Articolo* a2);

        static bool comparaArticoliPerPrezzoDecrescente(Articolo* a1, Articolo* a2);

        static bool comparaArticoliPerAnnoPrezzoKeyword(Articolo* a1, Articolo* a2);// compara gli articoli per anno, a parità di anno per prezzo decrescente
                                                                                    // a parità di prezzo in ordine alfabetico per la prima keyword

        bool insiemeProprio(Rivista* r1, Rivista* r2);// restituisce true se una rivista r1 è insieme proprio di una rivista r2, false altrimenti
                                                      // insieme proprio=(l'insieme delle keyword di r1 sono contenute nell'insieme delle keyword di r2)

        bool specialistica(Rivista* rivista);// restituisce true se una rivista è specialistica, false altrimenti

        void scriviSuFile(string nomeFile);// scrive su determinati file le informazioni di autori, conferenze, riviste ed articoli
};

#endif // DATABASE_H
