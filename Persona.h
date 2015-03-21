#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using std::string;

class Persona
{
	int Tipo;
	string nombrereal;
	string nombreusuario;
	string contrasena;
	int edad;
	string cedula;
	string fechanacimiento;
public:
	Persona(string,string,string,int,string,string);
	Persona(const Persona&);
	virtual ~Persona();
	string getNombreReal()const;
	string getNombreUsuario()const;
	string getContrasena()const;
	int getEdad()const;
	string getCedula()const;
	string getFechaNac()const;
	virtual int getTipo()const;
	virtual string toString()const;
	void setNombreReal(string);
	void setNombreUsuario(string);
	void setContrasena(string);
	void setEdad(int);
	void setCedula(string);
	void setFechaNac(string);
	
};
#endif