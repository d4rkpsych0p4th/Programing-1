#include "alvaro_cervera_gallardo_header.hpp"

int main(){
    
	autor a("Rigoberto", 1993);
	autor b = a;
    autor c;  
    autor *d = new autor("Alan", 2018);  
    a.setnombre("Roberto");
    a.setnacimiento(2000);
    a.mostrarautor(); 
    b.mostrarautor(); 
    c.mostrarautor();  
    d->mostrarautor();  
    delete d;
}  
