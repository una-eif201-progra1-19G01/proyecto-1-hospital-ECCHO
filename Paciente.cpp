#include<iostream>
#include<string>
#include<sstream>
#include"Paciente.h"
using::std::string;

//Constructores
Paciente::Paciente() {
	setCedula(" ");
	setNombre(" ");
	setApellido(" ");
	setSexo(' ');
	setDireccion(" ");
	setPatologia(" ");
	setTipoCirugia(" ");
	setEstado(" ");   
	setPrioridad(" ");
	setFechaCirugia(0);
	vector = new Paciente * [200];

}

Paciente::Paciente(std::string cedula, std::string nombre, std::string apellido, char sexo, std::string direccion, std::string patologia,
	std::string tipoCirugia, std::string estado, std::string prioridad, int fechaCirugia) : cedula(cedula), nombre(nombre),
	apellido(apellido), sexo(sexo), direccion(direccion), patologia(patologia), tipoCirugia(tipoCirugia), estado(estado),
	prioridad(prioridad), fechaCirugia(fechaCirugia) {}

//Destructor
Paciente::~Paciente() {}

//Metodos SET
void Paciente::setCedula(std::string cedula) {
	Paciente::cedula = cedula;
}
void Paciente::setNombre(std::string nombre) {
	Paciente::nombre = nombre;
}
void Paciente::setApellido(std::string apellido) {
	Paciente::apellido = apellido;
}
void Paciente::setSexo(char sexo) {
	Paciente::sexo = sexo;
}
void Paciente::setDireccion(std::string direccion) {
	Paciente::direccion = direccion;
}
void Paciente::setPatologia(std::string patologia) {
	Paciente::patologia = patologia;
}
void Paciente::setTipoCirugia(std::string tipoCirugia) {
	Paciente::tipoCirugia = tipoCirugia;
}
void Paciente::setEstado(std::string estado) {
	Paciente::estado = estado;
}
void Paciente::setPrioridad(std::string prioridad) {
	Paciente::prioridad = prioridad;
}
void Paciente::setFechaCirugia(int fechaCirugia) {
	Paciente::fechaCirugia = fechaCirugia;
}

//Metodos GET
std::string Paciente::getCedula() {
	return cedula;
}
std::string Paciente::getNombre() {
	return nombre;
}
std::string Paciente::getApellido() {
	return apellido;
}
std::string Paciente::getDireccion() {
	return direccion;
}
char Paciente::getSexo() {
	return sexo;
}

std::string Paciente::getPatologia() {
	return patologia;
}
std::string Paciente::getTipoCirugia() {
	return tipoCirugia;
}
std::string Paciente::getEstado() {
	return estado;
}
std::string Paciente::getPrioridad() {
	return prioridad;
}
int Paciente::getFechaCirugia() {
	return fechaCirugia;
}

void Paciente::anadirVector() {
	for (int i = 0; i < tam; i++) {
		vector[i] = NULL;

	}
}

void Paciente::agregar(Paciente* x) {
	vector[cantidad++] = x;
}