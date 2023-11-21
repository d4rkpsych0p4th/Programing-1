#include <iostream>
#include <string.h>
using namespace std;

class autor{
    
    char *nombre;
    int nacimiento;
    
public:
    
    autor();
    autor(char *nombreDado, int nacimientoDado);
    autor(autor const &autorDado);
    ~autor();
    
    void mostrarautor();
    
    void setnombre(char *nombredado);
    void setnacimiento(int nacimientodado);
};

