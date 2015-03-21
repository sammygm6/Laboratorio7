#include "Casos.h"
#include "Secuestro.h"
#include <string>
#include <iostream>
#include <sstream>

using std::string;
using std::stringstream;

Secuestro::Secuestro(int num, vector<Investigador> Investigadores, vector<Evidencia> evidence, string hora, string fecha, bool cerrado, string nombre_victima, string place, string motive, bool rescue, bool alive, int money)
:Casos(num, Investigadores, evidence, hora, fecha, cerrado), nombre_victima(nombre_victima), place(place), motive(motive), rescue(rescue), alive(alive), money(money){

}

string Secuestro::toString()const{
	stringstream ss;
	ss<<"Numero de Caso"<<num;
	return ss.str();
}

/*string getNombreVictima()const;
        string getLugar()const;
        string getMotivo()const;
        bool isRescate()const;
        bool isVivo()const;
        int getCantDinero()const;
*/

string Secuestro::getNombreVictima()const{
	return nombre_victima;
}

void setNombreVictima(string nombre_victima){
	this->nombre_victima = nombre_victima;
}

string Secuestro::getLugar()const{
	return place;
}

void Secuestro::setLugar(string place){
	this->place = place;
}

string Secuestro::getMotivo()const{
	return motive;
}

void Secuestro::setMotivo(string motive){
	this->motive = motive;
}

bool Secuestro::isRescate()const{
	return rescue;
}

void Secuestro::setRescate(bool rescue){
	this->rescue = rescue;
}

bool Secuestro::isVivo()const{
	return alive;
}

void Secuestro::setVivo(bool alive){
	this->alive = alive;
}

int Secuestro::getCantDinero()const{
	return money;
}

void Secuestro::setCantDinero(int money){
	this->money = money;
}
