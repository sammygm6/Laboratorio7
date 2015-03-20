#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H
#include <string>
#include "Persona.h"

using std::string;

class Administrativo : public Persona
{
	string clave;
	string puesto;
	int tipo;
public:
	Administrativo(string,string,string,int,string,string,string,string);
	Administrativo(const Administrativo&);
	virtual ~Administrativo();
	virtual string toString()const;
	string getClave()const;
	string getPuesto()const;
	void setClave(string);
	void setPuesto(string);	
	virtual int getTipo()const;
};
#endif