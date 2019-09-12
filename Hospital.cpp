//
// Created by Lady Asura III on 29/8/2019.
//

#include "Hospital.h"
#include <iostream>
using namespace std;

std::string Hospital::getPabellon(){
    for (int i = 0; i < pab.getCantidad(); i++) {
        std::cout << i << ": Género = " << pPabellon[i].getGenero();
    }
}

void Hospital::setPabellon(){

}

void Hospital::addPabellon(char genero){
    if (pab.getCantidad() >= 10) {
        //ERROR
    } else {
        int cantidad = pab.getCantidad();
        pPabellon[cantidad] = Pabellon(genero);
        
        pab.setCantidad(cantidad+1);
    }
    

}

void Hospital::eliminarPabellon(){

}


Hospital::Hospital() {

}

Hospital::Hospital(int id, const string &pruebas, float masPruebas) : id(id), pruebas(pruebas),
                                                                      masPruebas(masPruebas) {}

int Hospital::getId() const {
    return id;
}

void Hospital::setId(int id) {
    Hospital::id = id;
}

const string &Hospital::getPruebas() const {
    return pruebas;
}

void Hospital::setPruebas(const string &pruebas) {
    Hospital::pruebas = pruebas;
}

float Hospital::getMasPruebas() const {
    return masPruebas;
}

void Hospital::setMasPruebas(float masPruebas) {
    Hospital::masPruebas = masPruebas;
}
