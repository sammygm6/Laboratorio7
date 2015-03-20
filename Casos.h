#ifndef CASOS_H
#define CASOS_H
#include <vector>
#include "Evidencia.h"
#include "Persona.h"
#include "Investigador.h"

using namespace std;

class GestionCasos{
	int num;
	vector<Investigador> Investigadores;
	vector<Evidencia> evidence;
	string hora;
	string fecha;
	bool cerrado;

public:
	int getNum()const;
	vector<Investigador> getInvestigadores()const;
	vector<Evidencia> getEvidence()const;
	string getHora()const;
	string getFecha()const;
	bool isCerrado()const;

public:
	Casos (int, vector<Investigador>, vector<Evidencia>, string, string, bool);
	Casos (const Casos)const;
	virtual string toString()const;	
	};

#endif /*CASOS_H*/
