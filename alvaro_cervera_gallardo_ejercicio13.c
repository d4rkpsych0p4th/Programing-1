#include <stdio.h>
#include <stdlib.h>

int main()
{
   float peso,altura,imc;
    printf("\n Peso en Kg: ");
    scanf("%f",&peso);
    printf("\n Altura en m: ");
    scanf("%f", &altura);
    imc= peso/(altura*altura);

    if(imc<=0)
    printf("\nERROR 404 fisica not found");
    if(imc > 0)
    {

    if(imc<18.50)
    printf("\nIMC: %.2f (Delgado)\n",imc);
    if((imc>=18.50) && (imc<25))
    printf("\nIMC: %.2f (Normal)\n",imc);
    if((imc>=25) && (imc<30))
    printf("\nIMC: %.2f (Sobrepeso)\n",imc);
    if((imc>=30) && (imc<30))
    printf("\nIMC: %.2f (Obesidad)\n",imc);

}





    return 0;
}

