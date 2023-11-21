#include "alvaro_cervera_gallardo_header.hpp"
using namespace std;
	int main(){
    
		autor *lista[5];
		int nacimientodado,contador = 0 ;
		char  continuar = '\0',*nombredado = NULL;
    
		nombredado = new char [100];
    
		do{
        
			cout << "cual es tu nombre?" << endl;
			cin >> nombredado;
        
			cout << "cuando naciste?" << endl;
			cin >> nacimientodado;
        
			lista[contador] = new autor(nombredado, nacimientodado);
        
			contador++;
        
			if(contador < 5){
				cout << "desea continuar (Si/No)?" << endl;
				cin >> continuar;
			}
        
		}while(contador < 5 && continuar != 'N');
    
		delete [] nombredado;
    
		for(int i = 0; i < contador; i++)
			lista[i]->mostrarautor();
    
		return 0;
	}

