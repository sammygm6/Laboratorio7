#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H
#include <string>
#include "Persona.h"

using std::string;

class Administrativo : public Persona
{
	string clave;
	string puesto;
public:
	Administrativo(string,string,string,int,string,string,string,string);
	Administrativo(const Administrativo&);
	virtual string toString()const;
	string getClave()const;
	string getPuesto()const;
	void setClave(string);
	void setPuesto(string);	
};
#endif