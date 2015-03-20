#ifndef HOMICIDIO_H
#define HOMICIDIO_H
#include "Casos.h"
#include "Sospechoso.h"
#include <string>
#include <vector>
using std::string;

class Homicidio : public Casos
{
	string nombre_sospechoso_principal;
	string nombre_victima;
	vector<string> sospechosos;
public:
	Homicidio(int, vector<Investigador>, vector<Evidencia>, string, string, bool, vector<string>);
	Homicidio(const Homicidio&);
	string toString()const;
	vector<Sospechoso> getSospechosos()const;
	Sospechoso getSospechoso(int)const;
	Sospechoso addSospechoso(Sospechoso);
	void setSospechosos(vector<Sospechoso>);
	string getNombreSospechosoPrincipal()const;
	void setNombreSospechosoPrincipal(string);
	string getNombreVictima()const;
	void setNombreVictima(string);
	

};
#endif
