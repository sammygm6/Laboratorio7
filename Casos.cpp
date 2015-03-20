#include "Casos.h"
#include "Evidencia.h"
#include "Persona.h"
#include "Investigador.h"
#include <string>
#include <sstream>

using namespace std;

/*int num;
        vector<Persona> personas;
        vector<Evidencia> evidence;
        string hora;
        string fecha;
        bool cerrado;*/

Casos::Casos(int num, vector<Investigador> Investigadores, vector<Evidencia evidence, string hora, string fecha, bool cerrado)
	:num(num), Investigadores(Investigadores), evidence(evidence), hora(hora), fecha(fecha), cerrado(cerrado){

}

Casos::Casos(const Casos& pinga) 
	:num(pinga.num), Investigadores(pinga.Investigadores), evidence(pinga.evidence), hora(pinga.hora), fecha(pinga.fecha), cerrado(pinga.cerrado){

}

Casos::~Casos(){
	delete this;
}

string Casos::toString()const{
	stringstream ss;
	ss<<"Caso: ["<<num<<", "<<Investigadores<<", "<<evidence<<", "<<hora<<", "<<fecha<<", "<<cerrado<<"]";
	return ss.str();
}
