#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>
#include "Paciente.h"
#include "Especialidad.h"
#include <sstream>
using namespace std;

class Doctor{

    int const MAXDOCTORES = 20;


private:
    int cantidad;
    string nombre;
    Especialidad *especi;
    Paciente **vecPacientes;
		

public:

    Doctor();

    Doctor(string ,especialidad*);

    virtual ~Doctor();
    int getCantidad();
    string getNombre();
    void setNombre(string nombre);
    especialidad* getEspecialidad();
    void setEspecialidad(especialidad*);
    Paciente *buscarPaciente(string cedula);
	string tostring();
	void agregarPaciente(Paciente*);
	bool eliminarPaciente(int);

};

#endif //DOCTOR_H

