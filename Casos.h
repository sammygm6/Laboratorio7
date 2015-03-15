#ifndef CASOS_H
#define CASOS_H
#include <vector>
#include "Evidencia.h"
#include "Persona.h"

using namespace std;

class GestionCasos{
	int num;
	vector<Persona> personas;
	vector<Evidencia> evidence;
	string hora;
	string fecha;
	bool cerrado;

public:
	int getNum()const;
	vector<Persona>	getPersonas()const;
	vector<Evidencia> getEvidence()const;
	string getHora()const;
	string getFecha()const;
	bool isCerrado()const;

public:
	Casos (double, vector<Persona>, vector<Evidencia>, string, string, bool);
	Casos (const Casos)const;
	virtual string toString()const;	
	};

#endif /*CASOS_H*/
