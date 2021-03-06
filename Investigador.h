#ifndef INVESTIGADOR_H
#define INVESTIGADOR_H
#include "Persona.h"
#include <string>

using std::string;

class Investigador : public Persona
{
	int casos_atendidos;
	int casos_cerrados;
	int casos_sin_resolver;
	int tipo;
public:
	Investigador(string,string,string,int,string,string,int=0,int=0,int=0);
	Investigador(const Investigador&);
	virtual ~Investigador();
	virtual string toString();
	int getCasos_atendidos()const;
	int getCasos_cerrados()const;
	int getCasos_sin_resolver()const;
	void setCasos_atendidos(int);
	void setCasos_cerrados(int);
	void setCasos_sin_resolver(int);
	virtual int getTipo()const;
};
#endif