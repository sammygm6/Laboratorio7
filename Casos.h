#ifndef CASOS_H
#define CASOS_H
#include <vector>
#include "Evidencia.h"
#include "Persona.h"
#include "Investigador.h"

using namespace std;

class Casos{
	
	vector<Investigador> Investigadores;
	vector<Evidencia> evidence;
	string hora;
	string fecha;
	bool cerrado;

public:
	int num;
	Casos (int, vector<Investigador>, vector<Evidencia>, string, string, bool);
	Casos (const Casos&);
	int getNum()const;
	void setNum(int);
	vector<Investigador> getInvestigadores()const;
	void setInvestigadores(vector<Investigador>);
	vector<Evidencia> getEvidence()const;
	void setEvidence(vector<Evidencia>);
	string getHora()const;
	void setHora(string);
	string getFecha()const;
	void setFecha(string);
	bool isCerrado()const;
	void setCerrado(bool);
	virtual ~Casos();
	virtual string toString()const;	
	};

#endif /*CASOS_H*/
