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
	Homicidio(int, vector<Investigador>, vector<Evidencia>, string, string, bool, vector<string>, string, string);
	Homicidio(const Homicidio&);
	virtual string toString()const;
	string getNombreSospechosoPrincipal()const;
	string getNombreVictima()const;
	vector<string> getSospechosos()const;
	string getSospechoso(int)const;
	void setNombreSospechosoPrincipal(string);
	void setNombreVictima(string);
	void setSospechosos(vector<string>);
	void addSospechoso(string);

};
#endif
