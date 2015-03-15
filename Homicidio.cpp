#include "Homicidio.h"
#include "Casos.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Homicidio::Homicidio(int num, vector<Investigador> Investigadores, vector<Evidencia> evidence, string hora, string fecha,
						bool cerrado, vector<Sospechoso> sospechosos)
:Casos(num,Investigadores,evidence,hora,fecha,cerrado), sospechosos(sospechosos){

}
string Homicidio::toString()const{
	stringstream ss;
	ss << "Numero de Caso: " << num;
	return ss.str();
}
vector<Sospechoso> Homicidio::getSospechosos()const{
	return sospechosos;
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