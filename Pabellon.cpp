#include <sstream>
#include"Pabellon.h"
#include<sstream>

using namespace std;

Pabellon::Pabellon() {}

Pabellon::Pabellon(char iD, const string &genero, int numCamas, Cama *pCama) : iD(iD), genero(genero),
                                                                               numCamas(numCamas), pCama(pCama) {}

Pabellon::Pabellon(int cantidad, int tamano, Pabellon **pPabellon) : cantidad(cantidad), tamano(tamano),
                                                                     pPabellon(pPabellon) {

    tamano = MAXIMOPABE;
    pPabellon = new Pabellon *[tamano];
    cantidad = 0;
    for (int i = 0; i < tamano; i++) {

        pPabellon[i] = NULL;
    }
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

int Pabellon::getCantidad() const {
    return cantidad;
}

void Pabellon::setCantidad(int cantidad) {
    Pabellon::cantidad = cantidad;
}

int Pabellon::getTamano() const {
    return tamano;
}

void Pabellon::setTamano(int tamano) {
    Pabellon::tamano = tamano;
}

Pabellon **Pabellon::getPPabellon() const {
    return pPabellon;
}

void Pabellon::setPPabellon(Pabellon **pPabellon) {
    Pabellon::pPabellon = pPabellon;
}

Pabellon::~Pabellon() {
    delete[] pPabellon;
}

void Pabellon::agregar(Pabellon *pPa) {
	pPabellon[cantidad++] = pPa;
}

void Pabellon::eliminar(int indice) {
    pPabellon[indice] = nullptr;
}

Pabellon *Pabellon::buscarPabellon(char iDENTIFICAR, string generos) {

    for (int i = 0; i < cantidad; i++) {
        if (pPabellon[i]->getId() == iDENTIFICAR && pPabellon[i]->getGenero() == generos)
            return pPabellon[i];
    }
}

string Pabellon::verCamasPorEstado() {

    stringstream c;
    c << "Datos de cada pabellon clasificado por genero:    " << endl;
    c << "Pabellones de mujeres:  ";
    for (int i = 0; i < cantidad; i++) {
        if (pPabellon[i]->getGenero() == "Femenino") {

            c << pPabellon[i]->getPCama()->disponibilidad();
        }
    }
    c << "Pabellones de hombres:   ";
    for (int i = 0; i < cantidad; i++)
        if (pPabellon[i]->getGenero() == "Masculino") {
            c << pPabellon[i]->getPCama()->disponibilidad();
        }


    return c.str();
}

string Pabellon::datosPabellon() {

    stringstream j;
    j << "Letra del pabellon: " << iD << "\n";
    j << "Género dek pabellon: " << genero << "\n";
    j << "Numero de camas en el pabellon: " << numCamas << "\n\n";
    j << pCama->toStringCama();
    return j.str();
}

string Pabellon::toString() {

    stringstream s;
    s << "Datos del pabellon por genero:" << "\n";
    s << "Pabellones Femeninos: " << "\n";
    for (int i = 0; i < cantidad; i++) {
        if (pPabellon[i]->getGenero() == "femenino") {
            s << pPabellon[i]->toString();
        }
    }
    s << "Pabellones Masculinos: " << "\n";
    for (int i = 0; i < cantidad; i++) {
        if (pPabellon[i]->getGenero() == "masculino") {
            s << pPabellon[i]->toString();
        }
    }
    return s.str();
}

string Pabellon::imprimeDisponiblidadDeCamas() {

    stringstream n;
    n<<"Letra asociada al pabellon: "<<iD<<"\n";
    n<<"Género asociado al pabellon: "<<genero<<"\n";
    n<<pCama->disponibilidad();
    return n.str();

    //return std::__cxx11::string();
}





