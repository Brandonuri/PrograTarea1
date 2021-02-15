//Cliente
#include "Persona.cpp"
#include <iostream>
using namespace std;
class Cliente : persona{
	// atributos
	private : string nit;
	// constructorn
	public : 
				Cliente(){
				}
				Cliente(string nom,string ape,string dir, string pue ,int tel, int sueld,string n) : persona(nom,ape,dir,pue,tel,sueld) {
					nit = n;
				}
				//set (modificar)
	void setNit(string n){nit = n;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setPuesto(string pue){puesto = pue;}
	void setTelefono(int tel){telefono = tel;}
	void setSueldo(int sueld){sueldo = sueld;}
	//get (mostrar)
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getPuesto(){return puesto;}
	int getTelefono(){return telefono;}
	int getSueldo(){return sueldo;}
	//metodos
	void mostrar(){
		cout<<"__________________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<puesto<<","<<telefono<<","<<sueldo<<endl;
	}
};
