#include "Homicidio.h"
#include "Casos.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Homicidio::Homicidio(int num, vector<Investigador> Investigadores, vector<Evidencia> evidence, string hora, string fecha,bool cerrado, vector<Sospechoso> sospechosos, string sospechoso_principal, string nombre_victima)
:Casos(num,Investigadores,evidence,hora,fecha,cerrado), sospechosos(sospechosos), sospechoso_principal(sospechoso_principal), nombre_victima(nombre_victima){

}
string Homicidio::toString()const{
	stringstream ss;
	ss << "Numero de Caso: " << num;
	return ss.str();
}
vector<Sospechoso> Homicidio::getSospechosos()const{
	return this;
}
Sospechoso Homicidio::getSospechoso(int i)const{
	return sospechosos.at(i);
}
Sospechoso Homicidio::addSospechoso(Sospechoso sospechoso){
	sospechosos.push_back(sospechoso);
}
void Homicidio::setSospechosos(vector<Sospechoso> sospechosos){
	this->sospechosos = sospechosos;
}

string Homicidio::getNombreSospechosoPrincipal()const{
	return sospechoso_principal;
}
void Homicidio::setNombreSospechosoPrincipal(string sospechoso_principal){
	this->sospechoso_principal = sospechoso_principal;
}
string getNombreVictima()const{
	return nombre_victima;
}
void setNombreVictima(string nombre_victima){
	this->nombre_victima = nombre_victima;
}

