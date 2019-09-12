


#include"Pabellon.h"
using namespace std;

<<<<<<< HEAD
Pabellon::Pabellon(){
    _cantidad = 0;
    _camas = 0;
    _genero = 'M';
}

Pabellon::Pabellon(char genero){
    _cantidad = 0;
    _camas = 0;
    _genero = genero;
}

Pabellon::~Pabellon() {}

std::string Pabellon::getPabellon(){
    return "Pabellón!!!";
}

int Pabellon::getCantidad() const{
    return _cantidad;
}

void Pabellon::setCantidad(int cantidad){
    _cantidad = cantidad;
}

int Pabellon::getNumeroDeCamas(){
    return _camas;
}

void Pabellon::setNumeroDeCamas(int camas){
    _camas = camas;
}

int Pabellon::getGenero() const{
    return _genero;
}

void Pabellon::setGenero(char genero){
    _genero = genero;
}

bool Pabellon::addPabellon(char genero){
    if (_cantidad >= 10) {
        return false;
    }
    else {
        // pPabellon[cantidad] = 
    }
}
=======
Pabellon::Pabellon() {}

Pabellon::Pabellon(char iD, const string &genero, int numCamas, Cama *pCama) : iD(iD), genero(genero),
                                                                               numCamas(numCamas), pCama(pCama) {}

Pabellon::~Pabellon() {

}

char Pabellon::getId() const {
    return iD;
}

const string &Pabellon::getGenero() const {
    return genero;
}

int Pabellon::getNumCamas() const {
    return numCamas;
}

Cama *Pabellon::getPCama() const {
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

void Pabellon::setPCama(Cama *pCama) {
    Pabellon::pCama = pCama;
}


>>>>>>> 0bc6962a387566443391c828bbbbe42171d6d423
