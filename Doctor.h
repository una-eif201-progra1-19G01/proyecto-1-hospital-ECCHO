#ifndef DOCTOR_H
#define DOCTOR_H
#include <string>

class Doctor {
private:
	std::string nombre;
	std::string especialidad;
	int doctor[20];

public:
	Doctor();
	Doctor(std::string, std::string);

    virtual ~Doctor();

    void setNombre(std::string);
	void setEspecialidad(std::string);

	std::string getNombre();
	std::string getEspecialidad();







};
#endif //DOCTOR_H

