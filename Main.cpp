#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"
#include "Administrativo.h"
#include "Investigador.h"
#include "Forense.h"
#include "Persona.h"
#include "Casos.h"
#include "Evidencia.h"

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int MenuPrincipal();
int MenuAgregarPersona();

int main(int argc,char* argv[]){
	int opcionm_principal=MenuPrincipal();//Opcion de menu principal
	vector<Persona*> personas;
	vector<Evidencia*> evidencias;
	vector<Casos*> casos;
	while(opcionm_principal<5)
	{//While Menu Principal
		switch(opcionm_principal)
		{//switch Menu Princpial
			case 1:
			{//Case Agregar Persona
				int opcionm_agregarpersona=MenuAgregarPersona();//Opcion Menu Agregar Persona 
				switch(opcionm_agregarpersona)
				{//switch Menu Agregar Persona 
					case 1:
					{//case Agregar Peronal Administrativo
						break;
					}//fin case Agregar Peronal Administrativo 
					case 2:
					{//case Agregar Investigador
						break;
					}//fin case Agregar Investigador 
					case 3:
					{//case Agregar Forense
						break;
					}//fin case Agregar Forense
				}//fin switch Menu Agregar Persona 
				break;
			}//fin case agregar Persona
			case 2:
			{//Case Modificar Persona 
				break;
			}//fin case Modificar Persona 
			case 3:
			{//Case Eliminar Persona 
				break;
			}//fin case Eliminar Persona
			case 4:
			{//Case Log In
				cout<<"Ingrese su nombre de usuario: ";
				cin>>username;
				cout<<"Ingrese su contraseña: "
				cin>>contrasena;
				
				break;
			}//fin case Log In
		}//finn switch Menu Principal
		int opcionm_principal=MenuPrincipal();
	}//fin while Menu Principal
	//Deletes
	for (int i = 0; i < personas.size(); ++i)
	{
		delete personas[i];
	}
	for (int i = 0; i < evidencias.size(); ++i)
	{
		delete evidencias[i];
	}
	for (int i = 0; i < casos.size(); ++i)
	{
		delete casos[i];
	}
	return 0;
}
int MenuPrincipal(){//Menu Principal
	int opcion;
	cout<<"Menu Principal\n1. Agregar Persona\n2. Modificar Persona\n3. Eliminar Persona\n4. Log in\n5. Salir\nElija una Opcion: ";
	cin>>opcion;
	while(opcion<1||opcion>5){
		cout<<"Error! Vuelva a Ingresar la Opcion\nMenu Principal\n1. Agregar Persona\n2. Modificar Persona\n3. Eliminar Persona\n4. Log in\n5. Salir\nElija una Opcion: ";
		cin>>opcion;
	}
	return opcion;
}//fin menu principal
int MenuAgregarPersona(){//Menu Principal
	int opcion;
	cout<<"Menu Agregar Persona\n1. Agregar Personal Administrativo\n2. Agregar Investigador\n3. Agregar Forense\n4. Salir\nElija una Opcion: ";
	cin>>opcion;
	while(opcion<1||opcion>4){
		cout<<"Error! Vuelva a Ingresar la Opcion\nMenu Agregar Persona\n1. Agregar Personal Administrativo\n2. Agregar Investigador\n3. Agregar Forense\n4. Salir\nElija una Opcion: ";
		cin>>opcion;
	}
	return opcion;
}//fin menu principal