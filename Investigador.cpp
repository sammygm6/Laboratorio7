#include "Persona.h"
#include "Investigador.h"
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Investigador::Investigador(string,string,string,int,string,string,int,int,int);
Investigador(const Investigador&);
virtual string toString();
int getCasos_atendidos()const;
int getCasos_cerrados()const;
int getCasos_sin_resolver()const;
void setCasos_atendidos(int);
void setCasos_cerrados(int);
void setCasos_sin_resolver(int);