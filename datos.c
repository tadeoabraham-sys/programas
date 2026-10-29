#include <stdio.h>

int main(void){
    int entero;
    float decimal;
    char caracter;
     
    printf("ingrese un numero entero:\n",entero);
    scanf("%d",&entero);
 
         printf("ingrese un numero decimal:\n",decimal);
         scanf("%f",&decimal);

            printf("ingrese un caracter:\n",caracter);
            scanf(" %c",&caracter);
 
    printf("-----------------\n");
    printf("DATOS INGRESADOS\n");
    printf("-----------------\n");
    printf("N.entero: %d\n",entero);
    printf("N.decimal: %f\n",decimal);
    printf("caracter: %c\n",caracter);
 
    return 0;  

}