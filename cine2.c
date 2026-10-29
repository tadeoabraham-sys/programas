#include <stdio.h>
int main(void){
    int a,b;
    printf("ingresa la edad minima permitida\n");
    scanf("%d",&a);
    printf("ingresa tu edad\n");
    scanf("%d",&b);
    if(b>=a){
        printf("puedes ver la pelicula\n");
        }
    else{ 
        printf("no eres apto para ver este contenido\n");
        }
return 0;
}