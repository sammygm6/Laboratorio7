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
#include "Sospechoso.h"
#include "Secuestro.h"

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int MenuPrincipal();
int MenuGestionPersona();
int MenuGestionCaso();
int MenuGestionEvidencia();
int MenuAgregarPersona();
int MenuAgregarCaso();
int MenuAdmin();
int MenuInvestigador();
int MenuForense(){;

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
			{//gestion Persona
				int opcionm_gestionPersona=MenuGestionPersona();
				while(opcionm_gestionPersona<3){
					switch(opcionm_gestionPersona){
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
								cout<<i+1<<". "<<personas[i]->toString()<<endl;
							}
							cout<<endl;
							int posicionelimin;
							cout<<"Elija la posicion persona que desea eliminar: ";
							cin>>posicionelimin;
							while(posicionelimin<0||posicionelimin>personas.size(){
								cout<<"No existe esta posicion\nElija la posicion persona que desea eliminar: ";
								cin>>posicionelimin;
							}
							posicionelimin--;
							personas.erase(personas.begin()+posicionelimin-1);
							break;
						}//fin case Eliminar Persona
					}
					opcionm_gestionPersona=MenuGestionPersona();
				}
				break;
			}//fin gestion Persona 
			case 2:
			{//gestion CASOS
				int opcionm_gestionCasos=MenuGestionCaso();
				while(opcionm_gestionCasos<3){
					int num;
					vector<Investigador> Investigadores;
					vector<Evidencia> evidence;
					string hora,fecha;
					bool cerrado;
					switch(opcionm_gestionCasos){
						case 1:
						{//agregar Caso
							int contadorInvestigador=0;	
							for (int i = 0; i < personas.size(); ++i)
							{
								if(personas[i]->getTipo==2){
									contadorInvestigador++;
								}
							}	
							if(contadorInvestigador>0&&evidencias.size()>0){
								int opcionm_agregarcaso=MenuAgregarCaso();
								while(opcionm_agregarcaso<3){
									switch(opcionm_agregarcaso){
										case 1:
										{//agregar homicidio
											cout<<"Cuantos casos Existen? Ingrese el numero de casos: ";
											cin>>num;
											cout<<"Investigadores: "<<endl;
											char respcaso_inv,respcaso_evi;
											for (int i = 0; i < personas.size(); ++i)
											{
												if(personas[i]->getTipo==2){
													cout<<personas[i].toString()<<endl;
													cout<<"Desea ingresar este investigador al caso?(S/N): ";
													cin>>respcaso_inv;
													if (respcaso_inv=='S'||respcaso_inv=='s')
													{
														Investigadores.push_back(personas[i]);
													}
												}
											}
											for (int i = 0; i < evidence.size(); ++i)
											{
												if(evidence[i]->getTipo==2){
													cout<<evidence[i].toString()<<endl;
													cout<<"Desea ingresar esta evidencia al caso?(S/N): ";
													cin>>respcaso_evi;
													if (respcaso_evi=='S'||respcaso_evi=='s')
													{
														evidence.push_back(evidence[i]);
													}
												}
											}
											cout<<"Ingrese la fecha en la que se dio el incidente: ";
											cin>>fecha;
											cout<<"Ingrese la hora a la que se dio el incidente: ";
											cin>>hora;
											char respcerr=false;
											cout<<"El caso esta cerrado o no?(S/N): ";
											cin<<respcerr;
											if (respcerr=='S'||respcerr=='s')
											{
												cerrado=true;
											}
											cout<<"Ingrese la lista de nombres de los"
											break;
										}//fin agregar homicidio
										case 2:
										{//agregar secuestro
											break;
										}//fin agregar secuestro
									}
									opcionm_agregarcaso=MenuAgregarCaso();
								}
							}else{
								cout<<"No Hay Invesitgadores o no hay evidencias"
							}
							break;
						}//fin agregar caso
						case 2:
						{//Case Eliminar caso
							for (int i = 0; i < casos.size(); ++i)
							{
								cout<<i+1<<". "<<casos[i]->toString()<<endl;
							}
							cout<<endl;
							int posicionelimin;
							cout<<"Elija la posicion persona que desea eliminar: ";
							cin>>posicionelimin;
							while(posicionelimin<0||posicionelimin>casos.size(){
								cout<<"No existe esta posicion\nElija la posicion persona que desea eliminar: ";
								cin>>posicionelimin;
							}
							posicionelimin--;
							casos.erase(casos.begin()+posicionelimin-1);
							break;
						}//fin case Eliminar Caso
					}
					opcionm_gestionCasos=MenuGestionCaso();
				}
				break;
			}//fin gestion CASOS
			case 3:
			{//gestion Evidencia
				int opcionm_gestionEvidencia=MenuGestionEvidencia();
				while(opcionm_gestionEvidencia<3){
					string nombre,lugar;
					int tipo;
					bool huella,procesada;
					char boolhuella,boolprocesada;
					switch(opcionm_gestionEvidencia){
						case 1:
						{//agregar evidencia
							cout<<"Ingrese nombre del caso: ";
							cin>>nombre;
							cout<<"Ingrese el lugar donde se dio el incidente: ";
							cin>>lugar;
							cout<<"Ingrese el Tipo\n1. Arma Blanca\n2. Arma de Fuego\n3. Evidencia Circunstancial\n Elija una opcion: ";
							cin>>tipo;
							while(tipo<0||tipo>3){
								cout<<"Error no existe ese tipo\nIngrese el Tipo\n1. Arma Blanca\n2. Arma de Fuego\n3. Evidencia Circunstancial\n Elija una opcion: ";
								cin>>tipo;
							}
							cout<<"Se encontraron Huellas en el objeto?(S/N): ";
							cin>>boolhuella;
							if (boolhuella=='s'||boolhuella=='S')
							{
								huella=true;
							}else{
								huella=false;
							}
							cout<<"Esta Evidencia ya fue procesada?(S/N): ";
							cin>>boolprocesada;
							if (boolprocesada=='s'||boolprocesada=='S')
							{
								procesada=true;
							}else{
								procesada=false;
							}

							Evidencia* evidencia=new Evidencia(tipo,nombre,lugar,huella,procesada);
							evidencias.push_back(evidencia);
						}//fin agregar evidencia
						case 2:
						{//caso eliminar evidencia
							for (int i = 0; i < evidecias.size(); ++i)
							{
								cout<<i+1<<". "<<evidencias[i]->toString()<<endl;
							}
							cout<<endl;
							int posicionelimin;
							cout<<"Elija la posicion persona que desea eliminar: ";
							cin>>posicionelimin;
							while(posicionelimin<0||posicionelimin>evidecias.size(){
								cout<<"No existe esta posicion\nElija la posicion persona que desea eliminar: ";
								cin>>posicionelimin;
							}
							posicionelimin--;
							evidecias.erase(evidecias.begin()+posicionelimin-1);
							break;
						}//fin caso eliminar evidencia
					}
					opcionm_gestionEvidencia=MenuGestionEvidencia();
				}
			}//Fin gestion Evidencia
			case 4:
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
							Persona user(personas[i]);
							login=true;
							break;
						}
					}
					char resp='s';
					while(login==true){

						switch(user.getTipo()){//switch tipo de usuario
							case 1:
							{//case 1 Administrativo
								break;
							}//fin case 1 Administrativo
						}//fin switch tipo de Usuario
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
int Menu Principal(){
	int opcion;
	cout<<"Menu Principal\n1. Gestion Persona\n2. Gestion Casos\n3. Gestion Evidencia\n4. Log in\n5. Salir\nElija una Opcion: ";
	cin>>opcion;
	while(opcion<1||opcion>5){
		cout<<"Error! Vuelva a Ingresar la Opcion\nMenu Principal\n1. Gestion Persona\n2. Gestion Casos\n3. Gestion Evidencia\n4. Log in\n5. Salir\nElija una Opcion: ";
		cin>>opcion;
	}
	return opcion;
}
int MenuGestionPersona(){//Menu Principal
	int opcion;
	cout<<"Menu Principal\n1. Agregar Persona\n2. Eliminar Persona\n3. Salir\nElija una Opcion: ";
	cin>>opcion;
	while(opcion<1||opcion>5){
		cout<<"Error! Vuelva a Ingresar la Opcion\nMenu Principal\n1. Agregar Persona\n2. Eliminar Persona\n3. Salir\nElija una Opcion: ";
		cin>>opcion;
	}
	return opcion;
}//fin menu principal
int MenuGestionCaso(){//Menu Principal
	int opcion;
	cout<<"Menu Principal\n1. Agregar Caso\n2. Eliminar Caso\n3. Salir\nElija una Opcion: ";
	cin>>opcion;
	while(opcion<1||opcion>5){
		cout<<"Error! Vuelva a Ingresar la Opcion\nMenu Principal\n1. Agregar Caso\n2. Eliminar Caso\n3. Salir\nElija una Opcion: ";
		cin>>opcion;
	}
	return opcion;
}//fin menu principal
int MenuGestionEvidencia(){//Menu Principal
	int opcion;
	cout<<"Menu Principal\n1. Agregar Evidencia\n2. Eliminar Evidencia\n3. Salir\nElija una Opcion: ";
	cin>>opcion;
	while(opcion<1||opcion>5){
		cout<<"Error! Vuelva a Ingresar la Opcion\nMenu Principal\n1. Agregar Evidencia\n2. Eliminar Evidencia\n3. Salir\nElija una Opcion: ";
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
int MenuAgregarCaso(){//Menu Principal
	int opcion;
	cout<<"Menu Agregar Caso\n1. Agregar Homicidio\n2. Agregar Secuestro\n3. Salir\nElija una Opcion: ";
	cin>>opcion;
	while(opcion<1||opcion>4){
		cout<<"Error! Vuelva a Ingresar la Opcion\nMenu Agregar Caso\n1. Agregar Homicidio\n2. Agregar Secuestro\n3. Salir\nElija una Opcion: ";
		cin>>opcion;
	}
	return opcion;
}//fin menu principal
//Menus de cada usuario
int MenuAdmin(){
	int opcion;
	cout<<"Menu Administrador\n1. Ver Secuestros\n2. Salir\nElija una Opcion: ";
	cin>>opcion;
	while(opcion<1||opcion>4){
		cout<<"Error! Vuelva a Ingresar la Opcion\nMenu Administrador\n1. Ver Secuestros\n2. Salir\nElija una Opcion: ";
		cin>>opcion;
	}
	return opcion;
}
int MenuInvestigador(){
	int opcion;
	cout<<"Menu Administrador\n1. Ver Secuestros\n2. Salir\nElija una Opcion: ";
	cin>>opcion;
	while(opcion<1||opcion>4){
		cout<<"Error! Vuelva a Ingresar la Opcion\nMenu Administrador\n1. Ver Secuestros\n2. Salir\nElija una Opcion: ";
		cin>>opcion;
	}
	return opcion;
}
int MenuForense(){
	int opcion;
	cout<<"Menu Forense\n1. Ver Homicidios\n2. Salir\nElija una Opcion: ";
	cin>>opcion;
	while(opcion<1||opcion>4){
		cout<<"Error! Vuelva a Ingresar la Opcion\nMenu Forense\n1. Ver Homicidios\n2. Salir\nElija una Opcion: ";
		cin>>opcion;
	}
	return opcion;
}

