#include "Persona.h"
#include "Investigador.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Investigador::Investigador(string nombrereal,string nombreusuario,string contrasena,int edad,string cedula,string fechanacimiento,
							int casos_atendidos,int casos_cerrados,int casos_sin_resolver)
:Persona(nombrereal,nombreusuario,contrasena,edad,cedula,fechanacimiento), casos_atendidos(casos_atendidos),
casos_cerrados(casos_cerrados), casos_sin_resolver(casos_sin_resolver) {

}
Investigador::Investigador(const Investigador& other):Persona(other), casos_atendidos(other.casos_atendidos),
casos_cerrados(other.casos_cerrados), casos_sin_resolver(other.casos_sin_resolver){
	tipo = 2;
}
Investigador::~Investigador(){
	delete this;
}
string Investigador::toString(){
	stringstream ss;
	ss << Persona::toString() << " Casos Atendidos: " << casos_atendidos << " Casos Cerrados: " << casos_cerrados << " Casos Sin Resolver: " << casos_sin_resolver;
	return ss.str();
}
int Investigador::getCasos_atendidos()const{
	return casos_atendidos;
}
int Investigador::getCasos_cerrados()const{
	return casos_cerrados;
}
int Investigador::getCasos_sin_resolver()const{
	return casos_sin_resolver;
}
int Investigador::getTipo()const{
	return tipo;
}
void Investigador::setCasos_atendidos(int casos_atendidos){
	this->casos_atendidos = casos_atendidos;
}
void Investigador::setCasos_cerrados(int casos_cerrados){
	this->casos_cerrados = casos_cerrados;
}
void Investigador::setCasos_sin_resolver(int casos_sin_resolver){
	this->casos_sin_resolver = casos_sin_resolver;
}