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
	while(opcionm_principal<4)
	{//While Menu Principal
		switch(opcionm_principal)
		{//switch Menu Princpial
			case 1:
			{//Case Agregar Persona
				int opcionm_agregarpersona=MenuAgregarPersona();//Opcion Menu Agregar Persona
				string nombrereal,nombreusuario,password,cedula,fechanacimiento; 
				int edad;
				bool yaexiste=false;
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
						cin>>fechanacimiento;
						cout<<"Ingrese su edad: ";
						cin>>edad;
						cout<<"Ingrese un nombre de Usuario: ";
						cin>>nombreusuario;
						for (int i = 0; i < personas.size(); ++i)
						{
							if (personas[i]->getNombreUsuario()==nombreusuario)
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
								if (personas[i]->getNombreUsuario()==nombreusuario)
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
						Administrativo* admin=new Administrativo(nombrereal,nombreusuario,password,edad,cedula,fechanacimiento,clave,puesto);
						personas.push_back(admin);
						break;
					}//fin case Agregar Peronal Administrativo 
					case 2:
					{//case Agregar Investigador
						cout<<"Ingrese el nombre: ";
						cin>>nombrereal;
						cout<<"Ingrese su numero de cedula: ";
						cin>>cedula;
						cout<<"Ingrese su fecha de nacimiento (Dia/Mes/Año): ";
						cin>>fechanacimiento;
						cout<<"Ingrese su edad: ";
						cin>>edad;
						cout<<"Ingrese un nombre de Usuario: ";
						cin>>nombreusuario;
						for (int i = 0; i < personas.size(); ++i)
						{
							if (personas[i]->getNombreUsuario()==nombreusuario)
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
								if (personas[i]->getNombreUsuario()==nombreusuario)
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
						Investigador* investigador=new Investigador(nombrereal,nombreusuario,password,edad,cedula,fechanacimiento);
						personas.push_back(investigador);
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
						cin>>fechanacimiento;
						cout<<"Ingrese su edad: ";
						cin>>edad;
						cout<<"Ingrese un nombre de Usuario: ";
						cin>>nombreusuario;
						for (int i = 0; i < personas.size(); ++i)
						{
							if (personas[i]->getNombreUsuario()==nombreusuario)
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
								if (personas[i]->getNombreUsuario()==nombreusuario)
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
						cout<<"Ingrese su fecha de ingreso: ";
						cin>>fecha_de_ingreso;
						cout<<"Ingrese su Horario: ";
						cin>>horario;
						Forense* forense=new Forense(nombrereal,nombreusuario,password,edad,cedula,fechanacimiento,fecha_de_ingreso,horario);
						personas.push_back(forense);
						break;
					}//fin case Agregar Forense
				}//fin switch Menu Agregar Persona 
				break;
			}//fin case agregar Persona
			case 2:
			{//Case Eliminar Persona 
				for (int i = 0; i < personas.size(); ++i)
				{
					cout<<i+1". "<<personas[i]->toString()<<endl;
				}
				cout<<endl;
				int posicionelimin;
				cout<<"Elija la posicion persona que desea eliminar: ";
				cin>>posicionelimin;
				personas.erase(personas.begi()+posicionelimin-2);
				break;
			}//fin case Eliminar Persona 
			case 3:
			{//Case Log In
				if(personas.size()>0){
					string username,contrasena;
					cout<<"Ingrese su nombre de usuario: ";
					cin>>username;
					cout<<"Ingrese su contraseña: ";
					cin>>contrasena;
					bool login=false;
					for (int i = 0; i < personas.size(); ++i)
					{
						if (personas[i]->getNombreUsuario()==username&&personas[i]->getContrasena()==contrasena)
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
	cout<<"Menu Principal\n1. Agregar Persona\n2. Eliminar Persona\n3. Log in\n4. Salir\nElija una Opcion: ";
	cin>>opcion;
	while(opcion<1||opcion>5){
		cout<<"Error! Vuelva a Ingresar la Opcion\nMenu Principal\n1. Agregar Persona\n2. Eliminar Persona\n3. Log in\n4. Salir\nElija una Opcion: ";
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