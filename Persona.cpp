#include <string>
#include <sstream>
#include "Persona.h"

using std::string;
using std::stringstream;

Persona::Persona(string nombrereal,string nombreusuario,string contrasena,int edad,string cedula,string fechanacimiento)
:nombrereal(nombrereal), nombreusuario(nombreusuario), contrasena(contrasena), edad(edad), cedula(cedula), fechanacimiento(fechanacimiento){

}
Persona::~Persona(){
	delete Persona;
}
string Persona::getNombreReal()const{
	return nombrereal;
}
string Persona::getNombreUsuario()const{
	return nombreusuario;
}
string Persona::getContrasena()const{
	return contrasena;
}
int Persona::getEdad()const{
	return edad;
}
string Persona::getCedula()const{
	return cedula;
}
string Persona::getFechaNac()const{
	return fechanacimiento;
}
string Persona::toString()const{
	stringstream ss;
	ss << "Nombre Real: " << nombrereal;
	return ss.str();
}
int Persona::getTipo()const{
	return tipo;
}
void Persona::setNombreReal(string nombrereal){
	this->nombrereal = nombrereal;
}
void Persona::setNombreUsuario(string nombreusuario){
	this->nombreusuario = nombreusuario;
}
void Persona::setContrasena(string contrasena){
	this->contrasena = contrasena;
}
void Persona::setEdad(int edad){
	this->edad = edad;
}
void Persona::setCedula(string cedula){
	this->cedula = cedula;
}
void Persona::setFechaNac(string fechanacimiento){
	this->fechanacimiento = fechanacimiento;
}