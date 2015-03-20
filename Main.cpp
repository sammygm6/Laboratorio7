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
				string nombrereal,nombreusuario,password,cedula,fechanacimiento; 
				int edad;
				bool yaExiste=false;
				switch(opcionm_agregarpersona)
				{//switch Menu Agregar Persona 
					case 1:
					{//case Agregar Peronal Administrativo
						string clave,puesto;
						cout<<"Ingrese el nombre: ";
						cin>>nombrereal;
						cout<<"Ingrese su numero de cedula: ";
						cin>>cedula;
						cout<<"Ingrese su fecha de nacimiento (Dia/Mes/Año): ";
						cin>>fechanacimiento
						cout<<"Ingrese su edad: ";
						cin>>edad;
						cout<<"Ingrese un nombre de Usuario: ";
						cin>>nombreusuario;
						for (int i = 0; i < personas.size(); ++i)
						{
							if (personas[i].getNombreUsuario()==nombreusuario)
							{
								yaexiste=true;
								break;
							}
						}
						while(yaexiste==true){
							int contadorentradaif=0;
							cout<<"Ya existe este Nombre de Usuario\nIngrese un nombre de Usuario: ";
							cin>>nombreusuario;
							for (int i = 0; i < personas.size(); ++i)
							{
								if (personas[i].getNombreUsuario()==nombreusuario)
								{
									contadorentradaif++;
									yaexiste=true;
									break;
								}
							}
							if(contadorentradaif==0){
								yaexiste=false;
							}
						}
						cout<<"Ingrese Una contraseña (memoricela): ";
						cin>>password;
						cout<<"Ingrese su puesto: ";
						cin>>puesto;
						cout<<"Ingrese su clave de ingreso (memoricela): ";
						cin>>clave;
						personas.push_back(nombrereal,nombreusuario,password,edad,cedula,fechanacimiento,clave,puesto);
						break;
					}//fin case Agregar Peronal Administrativo 
					case 2:
					{//case Agregar Investigador
						cout<<"Ingrese el nombre: ";
						cin>>nombrereal;
						cout<<"Ingrese su numero de cedula: ";
						cin>>cedula;
						cout<<"Ingrese su fecha de nacimiento (Dia/Mes/Año): ";
						cin>>fechanacimiento
						cout<<"Ingrese su edad: ";
						cin>>edad;
						cout<<"Ingrese un nombre de Usuario: ";
						cin>>nombreusuario;
						for (int i = 0; i < personas.size(); ++i)
						{
							if (personas[i].getNombreUsuario()==nombreusuario)
							{
								yaexiste=true;
								break;
							}
						}
						while(yaexiste==true){
							int contadorentradaif=0;
							cout<<"Ya existe este Nombre de Usuario\nIngrese un nombre de Usuario: ";
							cin>>nombreusuario;
							for (int i = 0; i < personas.size(); ++i)
							{
								if (personas[i].getNombreUsuario()==nombreusuario)
								{
									contadorentradaif++;
									yaexiste=true;
									break;
								}
							}
							if(contadorentradaif==0){
								yaexiste=false;
							}
						}
						cout<<"Ingrese Una contraseña (memoricela): ";
						cin>>password;
						personas.push_back(nombrereal,nombreusuario,password,edad,cedula,fechanacimiento);
						break;
					}//fin case Agregar Investigador 
					case 3:
					{//case Agregar Forense
						string fecha_de_ingreso,horario;
						cout<<"Ingrese el nombre: ";
						cin>>nombrereal;
						cout<<"Ingrese su numero de cedula: ";
						cin>>cedula;
						cout<<"Ingrese su fecha de nacimiento (Dia/Mes/Año): ";
						cin>>fechanacimiento
						cout<<"Ingrese su edad: ";
						cin>>edad;
						cout<<"Ingrese un nombre de Usuario: ";
						cin>>nombreusuario;
						for (int i = 0; i < personas.size(); ++i)
						{
							if (personas[i].getNombreUsuario()==nombreusuario)
							{
								yaexiste=true;
								break;
							}
						}
						while(yaexiste==true){
							int contadorentradaif=0;
							cout<<"Ya existe este Nombre de Usuario\nIngrese un nombre de Usuario: ";
							cin>>nombreusuario;
							for (int i = 0; i < personas.size(); ++i)
							{
								if (personas[i].getNombreUsuario()==nombreusuario)
								{
									contadorentradaif++;
									yaexiste=true;
									break;
								}
							}
							if(contadorentradaif==0){
								yaexiste=false;
							}
						}
						cout<<"Ingrese Una contraseña (memoricela): ";
						cin>>password;
						cout<<"Ingrese su puesto: ";
						cin>>puesto;
						cout<<"Ingrese su clave de ingreso (memoricela): ";
						cin>>clave;
						personas.push_back(nombrereal,nombreusuario,password,edad,cedula,fechanacimiento,clave,puesto);
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
				if(personas.size()>0){
					string username,contrasena;
					cout<<"Ingrese su nombre de usuario: ";
					cin>>username;
					cout<<"Ingrese su contraseña: "
					cin>>contrasena;
					bool login=false;
					for (int i = 0; i < personas.size(); ++i)
					{
						if (personas[i].getNombreUsuario()==username&&personas[i].getContrasena()==contrasena)
						{
							login=true;
						}
					}
					char resp='s';
					while(login==true){
						cout<<"Desea SALIR del sistema?(s/n): ";
						cin>>resp;
						if (resp=='n'||resp=='N')
						{
							login=false;
						}
					}
				}else{
					cout<<"No Hay Usuarios";
				}
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