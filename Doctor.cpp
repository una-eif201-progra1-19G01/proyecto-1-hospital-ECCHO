#include<iostream>
#include<string>
#include<sstream>
#include"Doctor.h"
using::std::string;

Doctor::Doctor() {
	setNombre(" ");
	setEspecialidad(" ");

}

Doctor::Doctor(std::string nombre, std::string especialidad) : nombre(nombre), especialidad(especialidad) {}

Doctor::~Doctor() {}

void Doctor::setNombre(std::string nombre) {
	Doctor::nombre = nombre;
}
void Doctor::setEspecialidad(std::string especialidad) {
	Doctor::especialidad = especialidad;
}

std::string Doctor::getNombre() {
	return nombre;
}

std::string Doctor::getEspecialidad() {
	return especialidad;
}