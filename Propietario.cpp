#include "Persona.cpp"
#include <iostream>
using namespace std;

class Propietario : Persona {
	// atributos
	private : string nit; 
	double cui; 
	
	
	//contructor
	public :
	Propietario (){
	}
	
	Propietario(string nom, string ape, string dir, string fech, int tel, string n, double c) : Persona(nom,ape,dir,tel,fech){
		nit = n; 
		cui = c;
	}
	// metodos
	// set (modificar)
	void setNit(string n){nit = n;}
	void setCui(double c){cui = c;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFechaNacimiento(string fech){fecha_nacimiento = fech;}
	void setTelefono(int tel){telefono = tel;}
	}
	//get (mostrar)
	 string getnit(){return nit;}
	 double getcui(){return cui;}
	 string getNombres(){return nombres;}
	 string getApellidos(){return apellidos;}
	 string getDireccion(){return direccion;}
	 string getFechaNacimiento(string fech){fecha_nacimiento = fech;}
	 int getTelefono(){return telefono;}
	 }
	// metodos
	void mostrar(){
		cout<<"___________________"<<endl;
		cout<<nit<<","<<cui<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fecha_nacimiento<<endl;
	}
};
