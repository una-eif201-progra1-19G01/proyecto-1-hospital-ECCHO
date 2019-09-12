#include<iostream>
#include<string>
#include<sstream>
#include"Pabellon.h"
using::std::string;

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