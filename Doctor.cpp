#include<string>
#include <sstream>
#include"Doctor.h"


using namespace std;


Doctor::Doctor(const string &nombre, const string &especialidad, arregloPaciente *pPaciente) : nombre(nombre),
                                                                                               especialidad(
                                                                                                       especialidad),
                                                                                               pPaciente(pPaciente) {

    pPaciente = new arregloPaciente();
}

Doctor::~Doctor() {
}

const string &Doctor::getNombre() const {
    return nombre;
}

void Doctor::setNombre(const string &nombre) {
    Doctor::nombre = nombre;
}

const string &Doctor::getEspecialidad() const {
    return especialidad;
}

void Doctor::setEspecialidad(const string &especialidad) {
    Doctor::especialidad = especialidad;
}

arregloPaciente *Doctor::getPPaciente() const {
    return pPaciente;
}

void Doctor::setPPaciente(arregloPaciente *pPaciente) {
    Doctor::pPaciente = pPaciente;
}

string Doctor::tostring() {

    stringstream p;
    p << "Doctor: " << nombre << "\n";
    p << "Especialidad: " << especialidad << "\n";
    p << "Pacientes asignados: " << "\n";
    p << pPaciente->toString();
    return p.str();
}

void Doctor::modificarArray(string nombreDoc) {
    Paciente *otroPaciente = NULL;
    otroPaciente = new Paciente();
    otroPaciente->setNombre(nombreDoc);
    pPaciente->agregaPacientes(otroPaciente);

}

