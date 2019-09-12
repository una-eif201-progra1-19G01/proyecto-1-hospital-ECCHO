cmake_minimum_required(VERSION 3.14)
project(Hospital)

set(CMAKE_CXX_STANDARD 11)

add_executable(Hospital main.cpp Hospital.cpp Hospital.h Cama.cpp Cama.h Paciente.cpp Paciente.h Interfaz.cpp Interfaz.h Doctor.cpp Doctor.h
        Especialidad.cpp Especialidad.h Pabellon.cpp Pabellon.h)