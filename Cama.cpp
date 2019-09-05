#include<iostream>
#include<string>
#include<sstream>
#include"Cama.h"
using::std::string;
Cama::Cama() {
	setCodigo(" ");
	setEstado();
}

Cama::Cama(std::string codigo, bool estado) : codigo(codigo), estado(estado) {}

Cama::~Cama() {}

void Cama::setCodigo(std::string codigo) {
	Cama::codigo = codigo;
}
void Cama::setEstado(bool estado) {
	Cama::estado = estado;
}

std::string Cama::getCodigo() {
	return codigo;
}

bool Cama::getEstado() {
	return estado;
}