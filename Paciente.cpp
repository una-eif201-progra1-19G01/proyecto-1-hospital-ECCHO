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


Paciente::~Paciente() {}


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

//VECTOR DE CAMAS de paciente

Cama *Paciente::getPCama() const {
    return pCama;
}

void Paciente::setPCama(Cama *pCama) {
    Paciente::pCama = pCama;
}

//VECTOR DE DOCTOR de paciente

Doctor *Paciente::getPDoctor() const {
    return pDoctor;
}

void Paciente::setPDoctor(Doctor *pDoctor) {
    Paciente::pDoctor = pDoctor;
}


string Paciente::tostring() {
    stringstream a;
    a << "Paciente: " << nombre << " " << apellido;
    a << "Cedula: " << cedula << "\n";
    a << "Sexo: " << sexo << "\n";
    a << "Direccion: " << direccion << "\n";
    a << "Patologia: " << patologia << "\n";
    a << "Tipo de Cirugia: " << patologia << "\n";
    a << "Estado: " << estado << "\n";
    a << "Prioridad: " << prioridad << "\n";
    a << "Fecha de Cirugia" << fechaCirugia << "\n";
    if (pCama != NULL) {
        a << "Cama asignada al Paciente: " << pCama->getCodigo() << "\n";
    } else {
        a << "Cama asignada al Paciente: " << pCama << "\n";
    }
    a << "Cama asignada al Paciente: " << pCama->getCodigo() << "\n";
    a << "Doctor asignado al Paciente: " << pDoctor << "\n";

    return a.str();
}

void Paciente::cambiarCama(Cama *nuevaCama) {
    pCama->setEPaciente(NULL);
    pCama = nuevaCama;
}

string Paciente::imprimirDatosPaciente() {

    stringstream z;
    z << "Nombre :" << nombre << "\n";
    z << "Cedula :" << cedula << "\n";

    return z.str();
}

string Paciente::informes() {//TERMINAR FALTA PABELLON

    stringstream k;
    k << "Nombre del paciente: " << nombre << "\n";
    k << "Cedula del paciente: " << cedula << "\n";
    k << "Cama asignada: " << pCama->getCodigo()<< "\n";
    k << "Estado de la cama: " << pCama->isEstado() << "\n";
    k << "Pabellon asignado: " << "\n";
    k << "Patologia del paciente: " << patologia << "\n";
    k << "Especialidad asignada por patologia " << "\n";
    return k.str();

}

void Paciente::cambiarDoctor(Doctor *nuevoDoctor) {

pDoctor= nuevoDoctor;
}











