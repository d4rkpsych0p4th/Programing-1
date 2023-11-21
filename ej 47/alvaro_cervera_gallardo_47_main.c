	#include <stdio.h>
	#include <stdlib.h>

	struct fecha{
    
		int dia;
		int mes;
		int ano;
	};
	struct asignatura{
    
		char nombreasignatura[50];
		int creditos;
		float nota;
	};
	struct alumno{
    
		char DNI[10];
		char nombre[50];
		char primerapellido[50];
		char segundoapellido[50];
		struct fecha fechanacimiento;
		int numasignaturas;
		struct asignatura *asignaturasalumno;
	};

	struct fecha rellenar(struct fecha f){
    
		do{
        
			scanf("%d/%d/%d", &(f.dia), &(f.mes), &(f.ano));
			getchar();
        
			if(f.dia <= 0 || f.dia > 30 ||
			   f.mes <= 0 || f.mes > 12 ||
			   f.ano <= 0){
				printf("ERROR \n");
			}
        
		}while(f.dia <= 0 || f.dia > 30 ||
			   f.mes <= 0 || f.mes > 12 ||
			   f.ano <= 0);
    
		return f;
	}

	void cargarDatos(struct alumno *a){
    
		int i;
    
		scanf("%s", a->DNI);
		getchar();
		scanf("%s", a->nombre);
		getchar();
		scanf("%s", a->primerapellido);
		getchar();
		scanf("%s", a->segundoapellido);
		getchar();
		a->fechanacimiento = rellenar(a->fechanacimiento);
		scanf("%d", &(a->numasignaturas));
		getchar();
    
		a->asignaturasalumno = (struct asignatura *) malloc(a->numasignaturas*sizeof(struct asignatura));
    
		for(i = 0; i < a->numasignaturas; i++){
			scanf("%s", a->asignaturasalumno[i].nombreasignatura);
			getchar();
			scanf("%d", &(a->asignaturasalumno[i].creditos));
			getchar();
			scanf("%f", &(a->asignaturasalumno[i].nota));
			getchar();
		}
	}

	void obtenerDatos(struct alumno a){
   
		int i;
		float suma = 0;
  
	  printf("%s %s %s %02d/%02d/%02d\n", a.nombre, a.primerapellido, a.segundoapellido, a.fechanacimiento.dia, a.fechanacimiento.mes, a.fechanacimiento.ano);
    
		for(i = 0; i < a.numasignaturas; i++){
			printf("%s %d %.2f\n", a.asignaturasalumno[i].nombreasignatura, a.asignaturasalumno[i].creditos, a.asignaturasalumno[i].nota);
			suma += a.asignaturasalumno[i].nota;
		}
    
		printf("Media: %.2f \n", suma/a.numasignaturas);
	}

	int main(){
    
		struct alumno aprinci[100];
		char opcion, DNIprinci[10];
		int i = 0, j, numalum = 0, DNItrue = 0;
    
		do{
        
			cargarDatos(&(aprinci[i]));
			i++;
        
			numalum++;
        
			printf("desea continuar (Si/No)? \n");
        
			scanf("%c", &opcion);
			getchar();
        
		}while(opcion == 'S');
    
		printf("DNI? \n");
    
		do{
        
			DNItrue = 0;
        
			scanf("%s", DNIprinci);
			getchar();
        
			for(i = 0; i < numalum; i++){
				for(j = 0; DNIprinci[j] != '\0'; j++){
					if(DNIprinci[j] == aprinci[i].DNI[j]){
						DNItrue = 1;
					}else{
						DNItrue = 0;
						break;
					}
				}
            
				if(DNItrue == 1){
					obtenerDatos(aprinci[i]);
					break;
				}
			}
        
			if(DNItrue == 0) printf("ERROR - DNI no encontrado. \n");
        
			printf("Mas (S/N)? \n");
        
			scanf("%c", &opcion);
			getchar();
        
		}while(opcion == 'S');
    
		return 0;
	}

