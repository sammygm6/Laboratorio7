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
	:n(n), p(p), e(e), h(h), f(f), c(c){

}

Casos::Casos(const Casos& pinga) 
	:n(pinga.n), p(pinga.p), e(pinga.e), h(pinga.h), f(pinga.f), c(pinga.c){

}

string Casos::toString()const{
	stringstream ss;
	ss<<"Caso: ["<<n<<", "<<p<<", "<<e<<", "<<h<<", "<<f<<", "<<c<<"]";
	return ss.str();
}
