#ifndef SOSPECHOSO_H
#define SOSPECHOSO_H
#include <string>

using std::string;

class Sospechoso
{
	string nombre;
	bool principal;
	bool culpable;
	bool victima;
public:
	Sospechoso(string,bool,bool,bool);
	Sospechoso(const Sospechoso&);
	virtual string toString()const;
	string getNombre()const;
	bool getPrincipal()const;
	bool getCulpable()const;
	bool getVictima()const;
	void setNombre(string);
	void setPrincipal(bool);
	void setCulpable(bool);
	void setVictima(bool);
};
#endif