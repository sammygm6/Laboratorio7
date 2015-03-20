#include <string>
#include <sstream>
#include "Persona.h"
#include "Administrativo.h"

using std::string;
using std::stringstream;

Administrativo::Administrativo(string nombrereal,string nombreusuario,string contrasena,int edad,string cedula,string fechanacimiento
								,string clave,string puesto)
:Persona(nombrereal,nombreusuario,contrasena,edad,cedula,fechanacimiento),clave(clave),puesto(puesto){

	}
Administrativo::Administrativo(const Administrativo& other) : Persona(other), clave(other.clave), puesto(other.puesto){

}
Administrativo::~Administrativo(){
	delete this;
}
string Administrativo::toString()const{
	stringstream ss;
	ss << Persona::toString() << " Clave: " << clave << " Puesto: " << puesto;
	return ss.str();
}
string Administrativo::getClave()const{
	return clave;
}
string Administrativo::getPuesto()const{
	return puesto;
}
void Administrativo::setClave(string clave){
	this->clave = clave;
}
void Administrativo::setPuesto(string puesto){
	this->puesto = puesto;
}