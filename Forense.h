#ifndef FORENSE_H
#define FORENSE_H
#include <string>
#include "Persona.h"

using std::string;

class Forense : public Persona
{
	string fecha_de_ingreso;
	string horario;
public:
	Forense(string,string,string,int,string,string,string,string);
	Forense(const Forense&);
	virtual ~Forense();
	virtual string toString();
	string getFecha_de_ingreso()const;
	string getHorario()const;
	void setFecha_de_ingreso(string);
	void setHorario(string);
};
#endif