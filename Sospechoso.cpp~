#include "Sospechosos.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Sospechosos::Sospechoso(string nombre,bool principal,bool culpable,bool victima)
:nombre(nombre),principal(principal),culpable(culpable),victima(victima){

}
Sospechoso::Sospechoso(const Sospechoso& other):Sospechoso(other){

}
Sospechoso::~Sospechoso(){
	delete this;
}
string Sospechoso::toString()const{
	stringstream ss;
	ss << "Nombre: " << nombre;
}
string Sospechoso::getNombre()const{
	return nombre;
}
bool Sospechoso::getPrincipal()const{
	return principal;
}
bool Sospechoso::getCulpable()const{
	return culpable;
}
bool Sospechoso::getVictima()const{
	return victima;
}
void Sospechoso::setNombre(string nombre){
	this->nombre = nombre;
}
void Sospechoso::setPrincipal(bool principal){
	this->principal = principal;
}
void Sospechoso::setCulpable(bool culpable){
	this->culpable = culpable;
}
void Sospechoso::setVictima(bool victima){
	this->victima = victima;
}