Hospital: main.o Interfaz.o Hospital.o Cama.o Doctor.o Especialidad.o Pabellon.o Paciente.o
	g++ -g -std=c++11 -Wall main.o Interfaz.o Hospital.o Cama.o Doctor.o Especialidad.o Pabellon.o Paciente.o -o Hospital

main.o: Interfaz.h main.cpp
	g++ -g -std=c++11 -Wall -c main.cpp

Interfaz.o: Interfaz.cpp Hospital.h Hospital.cpp Cama.h Cama.cpp Doctor.h Doctor.cpp Especialidad.h Especialidad.cpp Paciente.h Paciente.cpp Pabellon.h Pabellon.cpp
	g++ -g -std=c++11 -Wall -c Interfaz.cpp

Hospital.o: Hospital.cpp Interfaz.h Interfaz.cpp Cama.h Cama.cpp Doctor.h Doctor.cpp Especialidad.h Especialidad.cpp Paciente.h Paciente.cpp Pabellon.h Pabellon.cpp
	g++ -g -std=c++11 -Wall -c Hospital.cpp

Cama.o: Cama.cpp Hospital.h Hospital.cpp
	g++ -g -std=c++11 -Wall -c Cama.cpp

Doctor.o: Doctor.cpp Hospital.h Hospital.cpp
	g++ -g -std=c++11 -Wall -c Doctor.cpp	

Especialidad.o: Especialidad.cpp Hospital.h Hospital.cpp
	g++ -g -std=c++11 -Wall -c Especialidad.cpp

Pabellon.o: Pabellon.cpp Hospital.h Hospital.cpp Cama.h Cama.cpp
	g++ -g -std=c++11 -Wall -c Pabellon.cpp

Paciente.o: Paciente.cpp Hospital.h Hospital.cpp
	g++ -g -std=c++11 -Wall -c Paciente.cpp

clean:
	rm *.o Hospital
