#ifndef SECUESTRO_H
#define SECUESTRO_H

class Secuestro : public Casos
{
	string nombre_victima;
	string lugar;
	string motivo;
	bool rescate;
	bool vivo;
	int cant_dinero;

public:
	Secuestro(string, string, string, bool, bool, int);
	string toString()const;
	string getNombreVictima()const;
	void setNombreVictima(string);
	string getLugar()const;
	void setLugar(string);
	string getMotivo()const;
	void setMotivo(string);
	bool isRescate()const;
	void setRescate(bool);
	bool isVivo()const;
	void setVivo(bool);
	int getCantDinero()const;
	void setCantDinero(int);
};

#endif /*SECUESTRO_H*/
