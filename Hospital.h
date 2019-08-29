//
// Created by Lady Asura III on 29/8/2019.
//

#ifndef HOSPITAL_HOSPITAL_H
#define HOSPITAL_HOSPITAL_H

#include <cstdint>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Hospital {

private:

    int id;

    string pruebas;

    float masPruebas;

public:
    Hospital();

    Hospital(int id, const string &pruebas, float masPruebas);

    int getId() const;

    void setId(int id);

    const string &getPruebas() const;

    void setPruebas(const string &pruebas);

    float getMasPruebas() const;

    void setMasPruebas(float masPruebas);

    void getPabellon();

    void setPabellon();

    void addPabellon();

    void eliminarPabellon();

};


#endif //HOSPITAL_HOSPITAL_H
