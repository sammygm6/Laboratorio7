#ifndef HOMICIDIO_H
#define HOMICIDIO_H
#include "Casos.h"
#include "Sospechoso.h"
#include <string>
#include <vector>
using std::string;

class Homicidio : public Casos
{
	vector<string> sospechosos;
public:
	Homicidio(int, vector<Investigador>, vector<Evidencia>, string, string, bool, vector<Sospechoso>);
	string toString()const;
	vector<Sospechoso> getSospechosos()const;
	Sospechoso getSospechoso(int)const;
	Sospechoso addSospechoso(Sospechoso);
	void setSospechosos(vector<Sospechoso>);

};
#endif