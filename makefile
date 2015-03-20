exe:	Main.o Persona.o Investigador.o Administrativo.o Sospechosos.o Forense.o Homicidio.o Casos.o Evidencia.o
	g++ Main.o Persona.o Investigador.o Administrativo.o Sospechoso.o Forense.o Homicidio.o Casos.o Evidencia.o -o exe

Main.o:	Main.cpp Persona.h Investigador.h Administrativo.h Sospechoso.h Forense.h Homicidio.h Casos.h Evidencia.h
	g++ -c Main.cpp

Evidencia.o:	Evidencia.cpp Evidencia.h
	g++ -c Evidencia.cpp

Sospechosos.o:	Sospechosos.cpp Sospechosos.h
	g++ -c Sospechosos.cpp

Homicidio.o:	Homicidio.cpp Homicidio.h Casos.h
	g++ -c Homicidio.cpp

Casos.o:	Casos.cpp Casos.h
	g++ -c Casos.cpp

Forense.o:	Forense.cpp Forense.h Persona.h
	g++ -c Forense.cpp

Investigador.o:	Investigador.cpp Investigador.h Persona.h
	g++ -c Investigador.cpp

Administrativo.o:	Administrativo.cpp Administrativo.h Persona.h
	g++ -c Administrativo.cpp

Persona.o:	Persona.cpp Persona.h
	g++ -c Persona.cpp
