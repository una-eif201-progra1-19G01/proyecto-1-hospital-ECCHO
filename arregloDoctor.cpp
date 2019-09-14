//
// Created by Lady Asura III on 13/9/2019.
//

#include <sstream>
#include "arregloDoctor.h"

arregloDoctor::arregloDoctor() : pDoctor(new Doctor*[20]), cantidad(0),tamano(20) {
    for(int i=0;i<10;i++){
        pDoctor[i]=NULL;}
}

arregloDoctor::~arregloDoctor() {

    for (int i = 0; i < cantidad; i++) {
        delete pDoctor[i];
    }
    delete[]pDoctor;
}

bool arregloDoctor::agregarDoc(Doctor *newDoctor) {

    if (cantidad < tamano) {
        pDoctor[cantidad++] = newDoctor;
        return true;
    }

    return false;
}

void arregloDoctor::eliminarDoc(Doctor *delDoctor) {
    for (int i = 0; i < cantidad; i++) {
        if (pDoctor[i]->getNombre() == delDoctor->getNombre()) {
            pDoctor[i] = pDoctor[i + 1];
        }
        if (pDoctor[i + 1] == NULL) {
            cantidad--;
        }
    }
}

Doctor *arregloDoctor::buscarcarDoctor(string nombreDoc) {
    for (int i = 0; i < cantidad; i++) {
        if (pDoctor[i]->getNombre() == nombreDoc)
            return pDoctor[i];
    }
}

string arregloDoctor::imprimirDatosDoctor() {

    stringstream q;
    for(int i=0; i<cantidad; i++){

        q<<pDoctor[i]->tostring();
    }


    return q.str();
}





