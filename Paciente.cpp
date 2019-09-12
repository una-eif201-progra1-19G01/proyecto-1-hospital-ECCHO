#include<string>
#include <sstream>
#include"Paciente.h"

using namespace std;


Paciente::Paciente() {}

Paciente::Paciente(const string &cedula, const string &nombre, const string &apellido, char sexo,
                   const string &direccion, const string &patologia, const string &tipoCirugia, const string &estado,
                   const string &prioridad, int fechaCirugia, Cama *pCama, Doctor *pDoctor) :
        cedula(cedula), nombre(nombre), apellido(apellido), sexo(sexo), direccion(direccion), patologia(patologia),
        tipoCirugia(tipoCirugia), estado(estado), prioridad(prioridad), fechaCirugia(fechaCirugia),
        pCama(pCama), pDoctor(pDoctor) {}


Paciente::Paciente(Paciente **pPaciente, int cantidad, int tamano) : pPaciente(pPaciente), cantidad(cantidad),
                                                                     tamano(tamano) {

    tamano = MAXPACIENTE;
    pPaciente = new Paciente *[tamano];
    cantidad = 0;
    for (int i = 0; i < tamano; i++) {

        pPaciente[i] = NULL;

    }


}

Paciente::~Paciente() {

    for (int i = 0; i < tamano; i++) {

        delete pPaciente[i];
    }
    delete[]pPaciente;
}


//PACIENTE

Paciente **Paciente::getPPaciente() const {
    return pPaciente;
}

void Paciente::setPPaciente(Paciente **pPaciente) {
    Paciente::pPaciente = pPaciente;
}

//CANTIDAD
int Paciente::getCantidad() const {
    return cantidad;
}

void Paciente::setCantidad(int cantidad) {
    Paciente::cantidad = cantidad;
}

//TAMANO

int Paciente::getTamano() const {
    return tamano;
}

void Paciente::setTamano(int tamano) {
    Paciente::tamano = tamano;
}

//CEDULA

const string &Paciente::getCedula() const {
    return cedula;
}

void Paciente::setCedula(const string &cedula) {
    Paciente::cedula = cedula;
}

//NOMBRE

const string &Paciente::getNombre() const {
    return nombre;
}

void Paciente::setNombre(const string &nombre) {
    Paciente::nombre = nombre;
}

//APELLIDO

const string &Paciente::getApellido() const {
    return apellido;
}

void Paciente::setApellido(const string &apellido) {
    Paciente::apellido = apellido;
}

//SEXO  ( ͡° ͜ʖ ͡°)

char Paciente::getSexo() const {
    return sexo;
}

void Paciente::setSexo(char sexo) {
    Paciente::sexo = sexo;
}

//DIRECCION

const string &Paciente::getDireccion() const {
    return direccion;
}

void Paciente::setDireccion(const string &direccion) {
    Paciente::direccion = direccion;
}

//PATOLOGIA

const string &Paciente::getPatologia() const {
    return patologia;
}

void Paciente::setPatologia(const string &patologia) {
    Paciente::patologia = patologia;
}

//TIPO DE CIRUGIA

const string &Paciente::getTipoCirugia() const {
    return tipoCirugia;
}

void Paciente::setTipoCirugia(const string &tipoCirugia) {
    Paciente::tipoCirugia = tipoCirugia;
}

//ESTADO DEL PACIENTE

const string &Paciente::getEstado() const {
    return estado;
}

void Paciente::setEstado(const string &estado) {
    Paciente::estado = estado;
}


//PRIORIDAD
const string &Paciente::getPrioridad() const {
    return prioridad;
}

void Paciente::setPrioridad(const string &prioridad) {
    Paciente::prioridad = prioridad;
}

//FECHA DE LA CIRUGIA

int Paciente::getFechaCirugia() const {
    return fechaCirugia;
}

void Paciente::setFechaCirugia(int fechaCirugia) {
    Paciente::fechaCirugia = fechaCirugia;
}

//VECTOR DE CAMAS

Cama *Paciente::getPCama() const {
    return pCama;
}

void Paciente::setPCama(Cama *pCama) {
    Paciente::pCama = pCama;
}

//VECTOR DE DOCTOR

Doctor *Paciente::getPDoctor() const {
    return pDoctor;
}

void Paciente::setPDoctor(Doctor *pDoctor) {
    Paciente::pDoctor = pDoctor;
}


string Paciente::tostring(){
	stringstream p;
	p<<"paciente: "<<nombre<<"\n";
	p<<"cedula: "<<cedula<<"\n";
	p<<"cama: "<<getPCama()<<"\n";
	p<<"doctor: "<<getNombre()<<" "<<getApellido()<<"\n";
	return p.str();
}







