
	#include "alvaro_cervera_gallardo_header.hpp"

	int main(){
    
		autor lista[5];
    
		char *nombredado = NULL, continuar = '\0';
		int contador = 0, nacimientodado;

		nombredado = new char [100];
    
		do{
        
			cout << "nombre?" << endl;
			cin >> nombredado;
        
			cout << "nacimiento?" << endl;
			cin >> nacimientodado;
        
			lista[contador].setnombre(nombredado);
			lista[contador].setnacimiento(nacimientodado);
        
			contador++;
        
			if(contador < 5){
				cout << "desea continuar (Si/No)?" << endl;
				cin >> continuar;
			}
        
		}while(contador < 5 && continuar != 'N');
    
		delete [] nombredado;
    
		for(int i = 0; i < 5; i++)
			lista[i].mostrarautor();
    
    
		return 0;
	}
