//persona
#include <iostream>
using namespace std;
class persona{
	// atributos
	protected : string nombres,apellidos,direccion,puesto;
				int telefono,sueldo;
	// contructor
	protected :
				persona () {
				
				}
	
				persona(string nom,string ape,string dir,string pue,int tel, int sueld){
					nombres = nom;
					apellidos = ape;
					direccion = dir;
					telefono = tel;
					sueldo = sueld;
					puesto = pue;
				}
				void mostrar();
				
};
