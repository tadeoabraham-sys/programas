#include <stdio.h>

int main (void){
    int pizzas;
    
    printf("[1].-pizza sencillla\n");
    printf("[2].-pizza mediana\n");
    printf("[3].-pizza familiar\n");
    printf("[4].-pizza jumbo\n");
    printf("ingreza una opcion:");
    scanf("%d",&pizzas);

    switch(pizzas){
        case 1:
            printf("elegiste pizza sencilla\n");
            break;
        case 2:
            printf("elegiste la pizza mediana\n");
            break;
        case 3:
            printf("elegiste la pizza familiar\n");
            break;
        case 4:
            printf("elegiste la pizza jumbo\n");
            break;

    default:
        printf("no mereces pizza :( \n");
        }

       
 return 0;

}