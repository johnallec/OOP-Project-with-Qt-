#include "Data.h"

//SET
void Data::setGiorno(int nuovoGiorno){ giorno=nuovoGiorno; }
void Data::setMese(int nuovoMese){ mese=nuovoMese; }
void Data::setAnno(int nuovoAnno){ anno=nuovoAnno; }

//GET
int Data::getGiorno() const{ return giorno; }
int Data::getMese() const{ return mese; }
int Data::getAnno() const{ return anno; }

//COSTRUTTORI
Data::Data(){
    giorno=0;
    mese=0;
    anno=0;
}
Data::Data(int nuovoGiorno, int nuovoMese, int nuovoAnno){
    giorno=nuovoGiorno;
    mese=nuovoMese;
    anno=nuovoAnno;
}

string Data::ritornaStringData() const{ return to_string(giorno) + "/" + to_string(mese) + "/" + to_string(anno); }
