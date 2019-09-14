#include <sstream>
#include"Pabellon.h"
#include<sstream>

using namespace std;

Pabellon::Pabellon() {}

Pabellon::Pabellon(char iD, const string &genero, int numCamas, arregloCama *pCama) : iD(iD), genero(genero),
                                                                               numCamas(numCamas), pCama(pCama) {}

char Pabellon::getId() const {
    return iD;
}

const string &Pabellon::getGenero() const {
    return genero;
}

int Pabellon::getNumCamas() const {
    return numCamas;
}

arregloCama *Pabellon::getPCama() const {
    return pCama;
}

void Pabellon::setId(char iD) {
    Pabellon::iD = iD;
}

void Pabellon::setGenero(const string &genero) {
    Pabellon::genero = genero;
}

void Pabellon::setNumCamas(int numCamas) {
    Pabellon::numCamas = numCamas;
}

void Pabellon::setPCama(arregloCama *pCama) {
    Pabellon::pCama = pCama;
}

string Pabellon::toString() {

    stringstream j;
    j << "Letra del pabellon: " << iD << "\n";
    j << "Género dek pabellon: " << genero << "\n";
    j << "Numero de camas en el pabellon: " << numCamas << "\n\n";
    j << pCama->toString();
    return j.str();
}


string Pabellon::imprimeDisponiblidadDeCamas() {

    stringstream n;
    n << "Letra asociada al pabellon: " << iD << "\n";
    n << "Género asociado al pabellon: " << genero << "\n";
    n << pCama->disponibilidad();
    return n.str();

    //return std::__cxx11::string();
}

void Pabellon::cambiarCamas(string cambio) {
    pCama->cambiarCama(cambio);
}

void Pabellon::modificarCama(char iD, int numero) {

    Cama *otraCama = NULL;
    for(int i=0; i<numero; i++){
        otraCama = new Cama();
        string x;
        stringstream z;
        z<<i+1;
        x = iD + z.str();
       // pCama.(x);
        //pCama->agregar(otraCama);
    }


}









