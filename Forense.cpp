#include "Forense.h"
#include "Persona.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Forense::Forense(string nombrereal,string nombreusuario,string contrasena,int edad,string cedula,string fechanacimiento,
				string fecha_de_ingreso,string horario)
:Persona(nombrereal,nombreusuario,contrasena,edad,cedula,fechanacimiento),
			fecha_de_ingreso(fecha_de_ingreso),horario(horario){

}
Forense::Forense(const Forense& other):Persona(other),fecha_de_ingreso(other.fecha_de_ingreso),horario(other.horario){

}
Forense::~Forense(){
	delete this;
}
string Forense::toString(){
	stringstream ss;
	ss << Persona::toString() << " Fecha de Ingreso: " << fecha_de_ingreso << " Horario: " << horario;
	return ss.str();
}
string Forense::getFecha_de_ingreso()const{
	return fecha_de_ingreso;
}
string Forense::getHorario()const{
	return horario;
}
void Forense::setFecha_de_ingreso(string fecha_de_ingreso){
	this->fecha_de_ingreso = fecha_de_ingreso;
}
void Forense::setHorario(string horario){
	this->horario = horario;
}