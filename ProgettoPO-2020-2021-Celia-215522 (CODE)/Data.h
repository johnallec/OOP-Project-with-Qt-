#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <string>

using namespace std;

class Data{
    private:
        int giorno;
        int mese;
        int anno;

        ostream& print(ostream& o) const{
            o << giorno << "/" << mese << "/" << anno;
            return o;
        }

    public:
        //SET
        void setGiorno(int nuovoGiorno);
        void setMese(int nuovoMese);
        void setAnno(int nuovoAnno);

        //GET
        int getGiorno() const;
        int getMese() const;
        int getAnno() const;

        //COSTRUTTORI
        Data();
        Data(int nuovoGiorno, int nuovoMese, int nuovoAnno);

        friend ostream& operator<<(ostream& o, const Data& data){ return data.print(o); }

        string ritornaStringData() const;
};

#endif
