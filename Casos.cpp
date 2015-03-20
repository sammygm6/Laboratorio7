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

Casos::Casos(int n, vector<Investigador> p, vector<Evidencia e, string h, string f, bool c)
	:num(n), Investigadores(p), evidence(e), hora(h), fecha(f), cerrado(c){

}

Casos::Casos(const Casos& pinga) 
	:num(pinga.num), Investigadores(pinga.Investigadores), evidence(pinga.evidence), hora(pinga.hora), fecha(pinga.fecha), cerrado(pinga.cerrado){

}

string Casos::toString()const{
	stringstream ss;
	ss<<"Caso: ["<<n<<", "<<p<<", "<<e<<", "<<h<<", "<<f<<", "<<c<<"]";
	return ss.str();
}
