#ifndef HOMICIDIO_H
#define HOMICIDIO_H
#include "Casos.h"
#include "Sospechoso.h"
#include <string>
#include <vector>
using std::string;

class Homicidio : public Casos
{
<<<<<<< HEAD
	vector<Sospechoso> sospechosos;
	string nombre_sospechoso_principal;
	string nombre_victima;
=======
	vector<string> sospechosos;
>>>>>>> 8f5458609b214dc918cd4102963e42ed86f607e0
public:
	Homicidio(int, vector<Investigador>, vector<Evidencia>, string, string, bool, vector<Sospechoso>);
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
