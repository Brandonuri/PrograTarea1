//main
#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion,puesto;
	int telefono,sueldo;
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Puesto: ";
	cin>>puesto;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	cout<<"Ingrese Sueldo: ";
	cin>>sueldo;
	// instanciar
	Cliente obj = Cliente(nombres,apellidos,direccion,puesto,telefono,sueldo,nit);
	obj.mostrar();
	
}
