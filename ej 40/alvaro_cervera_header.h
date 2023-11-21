#ifndef alvaro_cervera_header
#define alvaro_cervera_header

#include <stdio.h>
#include <stdlib.h>

float *crear(int inicio, int fin, float paso);

float media(float *pasos);

void liberar(float *pasos);

void inicializar(int inicio, int fin, float paso, float *pasos);

