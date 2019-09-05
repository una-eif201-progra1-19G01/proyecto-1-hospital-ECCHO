#ifndef PACIENTE_H
#define PACIENTE_H
#include <string>
const int tam = 200;

class Paciente {
private:
	std::string cedula;
	std::string nombre;
	std::string apellido;
	char sexo;
	std::string direccion;
	std::string patologia;
	std::string tipoCirugia;
	std::string estado;
	std::string prioridad;
	int fechaCirugia;

	Paciente** vector;

public:
	//Constructores
	Paciente();
	Paciente(std::string, std::string, std::string, char, std::string, std::string, std::string, std::string, std::string, int);

	~Paciente() {};


	void setCedula(std::string cedula);
	void setNombre(std::string nombre);
	void setApellido(std::string apellido);
	void setSexo(char);
	void setDireccion(std::string direccion);
	void setPatologia(std::string patologia);
	void setTipoCirugia(std::string tipoCirugia);
	void setEstado(std::string estado);
	void setPrioridad(std::string prioridad);
	void setFechaCirugia(int fechaCirugia);
	virtual void anadirVector();
	virtual void agregar();
	std::string getCedula();
	std::string getNombre();
	std::string getApellido();
	char getSexo();
	std::string getDireccion();
	std::string getPatologia();
	std::string getTipoCirugia();
	std::string getEstado();
	std::string getPrioridad();
	int getFechaCirugia();

};


#endif //PACIENTE_H

