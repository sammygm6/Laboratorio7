#include "Evidencia.h"
#include <string>
#include <sstream>
#include "Persona.h"

using std::string;
using std::stringstream;

Evidencia::Evidencia(string,int,string,bool,bool):nombre(nombre),tipo(tipo),lugar(lugar),huella(huella),procesada(procesada){
	
}
Evidencia::~Evidencia(){
	delete this;
}
string Evidencia::toString()const{
	stringstream ss;
	ss<<"Evidencia: "<<nombre;
	return ss.str();
}
string Evidencia::GetNombre()const{
	return nombre;
}
int Evidencia::getTipo()const{
	return tipo;
}
string Evidencia::GetLugar()const{
	return lugar;
}
bool Evidencia::GetHuella()const{
	return huella;
}
bool Evidencia::GetProcesada()const{
	return procesada;
}
void Evidencia::SetNombre(string nombre){
	this->nombre=nombre;
}
void Evidencia::SetTipo(int tipo){
	this->tipo=tipo;
}
void Evidencia::SetLugar(string lugar){
	this->lugar=lugar;
}
void Evidencia::SetHuella(bool huella){
	this->huella=huella;
}
void Evidencia::SetProcesada(bool procesada){
	this->procesada=procesada;
}