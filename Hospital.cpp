//
// Created by Lady Asura III on 29/8/2019.
//

#include "Hospital.h"


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
