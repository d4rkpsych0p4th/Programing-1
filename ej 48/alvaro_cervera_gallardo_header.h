#ifndef alvaro_cervera_gallardo_header_h
#define alvaro_cervera_gallardo_header_h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct jugador{
    
    char nombre[10];
    int vidas;
    int puntos;
    
};

struct <#struct name#> {
    <#struct fields#>
};

struct jugador inicializar_jugador(struct jugador);

struct jugador ahorcado(struct jugador, char []);

#endif 