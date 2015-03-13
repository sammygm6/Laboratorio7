#include "Evidencia.h"
#include <string>
#include <sstream>
#include "Persona.h"

using std::string;
using std::streamstring;

Evidencia::Evidencia(string,string,string,bool,bool):nombre(nombre),tipo(tipo),lugar(lugar),huella(huella),procesada(procesada){
	
}
Evidencia(const Evidencia& other):nombre(other.nombre),tipo(other.tipo),lugar(other.lugar),huella(other.huella),procesada(other.procesada){

}
Evidencia::~Evidencia(){

}
string Evidencia::toString()const{
	stringstream ss;
	ss<<"Evidencia: "<<nombre;
	return ss.str();
}
string Evidencia::GetNombre()const{
	return nombre;
}
string Evidencia::GetTipo()const{
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
void Evidencia::SetTipo(string tipo){
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