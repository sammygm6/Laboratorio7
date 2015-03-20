#ifndef EVIDENCIA_H
#define EVIDENCIA_H

#include <string>

using std::string;

class Evidencia{
	string nombre,tipo,lugar;
	bool huella,procesada;
public:
	Evidencia(string,string,string,bool,bool);
	Evidencia(const Evidencia&);
	virtual ~Evidencia();
	string toString()const;
	string GetNombre()const;
	string GetTipo()const;
	string GetLugar()const;
	bool GetHuella()const;
	bool GetProcesada()const;
	void SetNombre(string);
	void SetTipo(string);
	void SetLugar(string);
	void SetHuella(bool);
	void SetProcesada(bool);
};
#endif