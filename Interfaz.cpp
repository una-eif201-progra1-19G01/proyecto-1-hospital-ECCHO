#include "Interfaz.h"

using namespace std;

Interfaz::Interfaz(){}

void Interfaz::correrInterfaz(){
    bool repetir = true;
    int opcion = 0;

    cout << "Bienvenido!\n\n";

    while(repetir){
        cout << "*********************************\n";
        cout << "Elija una Opción:\n";
        cout << "1. Especialidades\n";
        cout << "2. Doctores\n";
        cout << "3. Pabellones\n";
        cout << "4. Camas\n";
        cout << "5. Pacientes\n";
        cout << "6. Salir\n";
        cout << "*********************************\n\n";

        cout << "Opción: ";
        cin >> opcion;

        if (opcion == 1){
            especialidades();
        }
        else if (opcion == 2){
            doctores();
        }
        else if (opcion == 3){
            pabellones();
        }
        else if (opcion == 4){
            camas();
        }
        else if (opcion == 5){
            pacientes();
        }
        else{
            repetir = false;
        }
    }
}

void Interfaz::especialidades(){

}

void Interfaz::doctores(){
    
}

void Interfaz::pabellones(){
    int opcionPabellon = 0;

    cout << "*********************************\n";
    cout << "Elija una Opción:\n";
    cout << "1. Ver Pabellones\n";
    cout << "2. Añadir Pabellón\n";
    cout << "3. Eliminar Pabellón\n";
    cout << "4. Editar Pabellón\n";
    cout << "5. Atras\n";
    cout << "*********************************\n\n";

    cout << "Opción: ";
    cin >> opcionPabellon;

    if (opcionPabellon == 1){
        hosp.getPabellon();
    }
    else if (opcionPabellon == 2){
        hosp.addPabellon();
    }
    else if (opcionPabellon == 3){
        hosp.eliminarPabellon();
    }
    else if (opcionPabellon == 4){
        hosp.setPabellon();
    }
    else{
        
    }
}


void Interfaz::camas(){
    
}

void Interfaz::pacientes(){
    
}

