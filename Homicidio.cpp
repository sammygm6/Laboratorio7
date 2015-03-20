#include "Homicidio.h"
#include "Casos.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Homicidio::Homicidio(int num, vector<Investigador> Investigadores, vector<Evidencia> evidence,
	string hora, string fecha, bool cerrado, vector<string> sospechosos, string nombre_sospechoso_principal, string nombre_victima)
:Casos(num,Investigadores,evidence,hora,fecha,cerrado),sospechosos(sospechosos),nombre_sospechoso_principal(nombre_sospechoso_principal),
		nombre_victima(nombre_victima){

}
Homicidio::Homicidio(const Homicidio& other)
:Casos(other),nombre_sospechoso_principal(other.nombre_sospechoso_principal),nombre_victima(other.nombre_victima){

}
string Homicidio::toString()const{
	stringstream ss;
	ss << Casos::toString();
	return ss.str();
}
string Homicidio::getNombreSospechosoPrincipal()const{
	return nombre_sospechoso_principal;
}
string Homicidio::getNombreVictima()const{
	return nombre_victima;
}
vector<string> Homicidio::getSospechosos()const{
	return sospechosos;
}
string Homicidio::getSospechoso(int i)const{
	return sospechosos.at(i);
}
void Homicidio::setNombreSospechosoPrincipal(string nombre_sospechoso_principal){
	this->nombre_sospechoso_principal = nombre_sospechoso_principal;
}
void Homicidio::setNombreVictima(string){
	this->nombre_victima = nombre_victima;
}
void Homicidio::setSospechosos(vector<string> sospechosos){
	this->sospechosos = sospechosos;
}
void Homicidio::addSospechoso(string sospechoso){
	sospechosos.push_back(sospechoso);
}