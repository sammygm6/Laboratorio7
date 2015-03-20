#ifndef EVIDENCIA_H
#define EVIDENCIA_H

#include <string>

using std::string;

class Evidencia{

	int tipo
	string nombre,lugar;
	bool huella,procesada;
public:
	Evidencia(string,int,string,bool,bool);
	Evidencia(const Evidencia&);
	virtual ~Evidencia();
	string toString()const;
	string GetNombre()const;
	int GetTipo()const;
	string GetLugar()const;
	bool GetHuella()const;
	bool GetProcesada()const;
	void SetNombre(string);
	void SetTipo(int);
	void SetLugar(string);
	void SetHuella(bool);
	void SetProcesada(bool);
};
#endif