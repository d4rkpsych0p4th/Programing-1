#include "alvaro_cervera_gallardo_header.hpp"

using namespace std;
autor::autor(){
    
    this->nombre = NULL;
    this->nacimiento = -1;
}

autor::autor(autor const &autordado) {

	this->nombre = new char[strlen(autordado.nombre) + 1];

	strcpy(nombre, autordado.nombre);

	this->nacimiento = autordado.nacimiento;
}


autor::autor(char *nombredado, int nacimientodado){
    
    this->nombre = new char [strlen(nombredado) + 1];
    
    strcpy(nombre, nombredado);
    
    this->nacimiento = nacimientodado;
}


autor::~autor(){
    
    if(nombre != NULL) delete [] nombre;
}

void autor::setnombre(char *nombredado) {

	if (nombre != NULL) delete[] nombre;

	this->nombre = new char[strlen(nombredado) + 1];

	strcpy(nombre, nombreDado);
}

void autor::mostrarautor(){
    
    if(nombre == NULL && nacimiento == -1) cout << "no hay datos" << endl;
    
    else cout << "nombre: " << nombre << " nacimiento: " << nacimiento << endl;
}


void autor::setnacimiento(int nacimientodado){
    
    this->nacimiento = nacimientodado;
}

