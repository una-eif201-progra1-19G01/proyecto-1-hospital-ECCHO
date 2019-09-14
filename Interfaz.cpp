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
    int opcionEspecialidad = 0;
    bool repetirEspecialidad = true;

    while(repetirEspecialidad) {
        cout << "*********************************\n";
        cout << "Elija una Opción:\n";
        cout << "1. Ver Especialidades\n";
        cout << "2. Añadir Especialidad\n";
        cout << "3. Atras\n";
        cout << "*********************************\n\n";

        cout << "Opción: ";
        cin >> opcionEspecialidad;

        if (opcionEspecialidad == 1){
            cout << arrEsp.toString();
        }
        else if (opcionEspecialidad == 2){
                // char iD;
                // string genero = "";

                // cout << "AGREGANDO PABELLÓN \n";
                // cout << "ID del Pabellón: ";
                // cin >> iD;

                // cout << "Género del Pabellón: ";
                // // getline(cin, genero);
                // cin >> genero;

                // Pabellon* tempPab = new Pabellon;

                // tempPab->setId(iD);
                // tempPab->setGenero(genero);

                // pab.agregar(tempPab);
                // pab.setCantidad(pab.getCantidad() + 1);
        }
        else{
            repetirEspecialidad = false;
        }
    } 
}

void Interfaz::doctores(){
    int opcionDoctor = 0;
    bool repetirDoctor = true;

    while(repetirDoctor) {
        cout << "*********************************\n";
        cout << "Elija una Opción:\n";
        cout << "1. Ver Doctores\n";
        cout << "2. Añadir Doctor\n";
        cout << "3. Atras\n";
        cout << "*********************************\n\n";

        cout << "Opción: ";
        cin >> opcionDoctor;

        if (opcionDoctor == 1){
            // std:cout << arrDoc.toString();
        }
        else if (opcionDoctor == 2){
                // char iD;
                // string genero = "";

                // cout << "AGREGANDO PABELLÓN \n";
                // cout << "ID del Pabellón: ";
                // cin >> iD;

                // cout << "Género del Pabellón: ";
                // // getline(cin, genero);
                // cin >> genero;

                // Pabellon* tempPab = new Pabellon;

                // tempPab->setId(iD);
                // tempPab->setGenero(genero);

                // pab.agregar(tempPab);
                // pab.setCantidad(pab.getCantidad() + 1);
        }
        else{
            repetirDoctor = false;
        }
    }   
}

void Interfaz::pabellones(){
    int opcionPabellon = 0;
    bool repetirPabellon = true;

    while (repetirPabellon) {
        cout << "*********************************\n";
        cout << "Elija una Opción:\n";
        cout << "1. Ver Pabellones\n";
        cout << "2. Añadir Pabellón\n";
        cout << "3. Atras\n";
        cout << "*********************************\n\n";

        cout << "Opción: ";
        cin >> opcionPabellon;
    
        if (opcionPabellon == 1){
            std::cout << arrPab.toString();
        }
        else if (opcionPabellon == 2){
            Pabellon* tempPab = new Pabellon();
            string genero;
            char id;

            cout << "Seleccione el género del Pabellón: ";
            cin >> genero;
            cout << "Seleccione el ID del Pabellón: ";
            cin >> id;

            tempPab->setGenero(genero);
            tempPab->setId(id);

            arrPab.agregarPabellones(tempPab);
        }
        else{
            repetirPabellon = false;
        }
    }
}


void Interfaz::camas(){
    int opcionCama = 0;
    bool repetirCama = true;

    while (repetirCama) {
        cout << "*********************************\n";
        cout << "Elija una Opción:\n";
        cout << "1. Ver Camas\n";
        cout << "2. Añadir Cama\n";
        cout << "3. Atras\n";
        cout << "*********************************\n\n";

        cout << "Opción: ";
        cin >> opcionCama;
    
        if (opcionCama == 1){
            arrCam.toString();
        }
        else if (opcionCama == 2){
            Cama* tempCama = new Cama();
            char cualPabellon;

            cout << "A cual Pabellón va esta cama?: ";
            cin >> cualPabellon;

            // string idCama = cualPabellon;


        }
        else{
            repetirCama = false;
        }
    }
}

void Interfaz::pacientes(){
    int opcionPaciente = 0;
    bool repetirPaciente = true;

    while (repetirPaciente) {
        cout << "*********************************\n";
        cout << "Elija una Opción:\n";
        cout << "1. Ver Pacientes\n";
        cout << "2. Añadir Paciente\n";
        cout << "3. Atras\n";
        cout << "*********************************\n\n";

        cout << "Opción: ";
        cin >> opcionPaciente;
    
    

        if (opcionPaciente == 1){
            std:cout << arrPac.toString();
        }
        else if (opcionPaciente == 2){
                // char iD;
                // string genero = "";

                // cout << "AGREGANDO PABELLÓN \n";
                // cout << "ID del Pabellón: ";
                // cin >> iD;

                // cout << "Género del Pabellón: ";
                // // getline(cin, genero);
                // cin >> genero;

                // Pabellon* tempPab = new Pabellon;

                // tempPab->setId(iD);
                // tempPab->setGenero(genero);

                // pab.agregar(tempPab);
                // pab.setCantidad(pab.getCantidad() + 1);
        }
        else{
            repetirPaciente = false;
        }
    }
}

