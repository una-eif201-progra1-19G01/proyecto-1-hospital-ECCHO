#include<string>
#include"Doctor.h"




Doctor::Doctor(){
	cantidad=0;
	nombre="";
	especialidad=NULL;
	for(int i=0;i<20;i++){
		vecPacientes[i]=NULL;
	}
}

Doctor::Doctor(string nom,especialidad* espec)  {
	 nombre=nom;
	 especi=espec;
	 cantidad=0;
    for (int i = 0; i <20; i++) {
        vecPacientes[i] = NULL;
    }
}

Doctor::~Doctor() {

    for (int i = 0; i < cantidad; i++){

        delete pDoctor[i];
    }
    delete []pDoctor;
	}
    int getCantidad(){
		return cantidad;
	}
    string getNombre(){
		return nombre;
	}
    void setNombre(string nombre nuevo){
		nombre=nuevo;
	}
    especialidad* getEspecialidad(){
		return especialdad;
	}
    void setEspecialidad(especialidad* nueva){
		especi=nueva;
	}
    Paciente *buscarPaciente(string cedula){
	Paciente* retorno=NULL;
		for(int i=0; i<cantidad;i++){
			if(vecPacientes[i]->)
		}
	}
	string tostring();
	void agregarPaciente(Paciente* nuevo){
		if(cantidad>20){
			vecPacientes[cantidad]=nuevo;
			cantidad++;
		}
	}
	boolean eliminarPaciente(int numCedula){
		boolean resultado=false;
		for(int i=0; i<20; i++){
			if(vecPacientes[i]->)
{

}

		}
	
	}