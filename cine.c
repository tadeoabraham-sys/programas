/* realiza un programa en c que evalue si un usuario puede acceder a la sala de cine
con basse en su edadcalsisficacion R: 13años*/
#include <stdio.h>
int main(void){
    int a;
    printf("ingresa tu edad\n");
    scanf("%d",&a);
    if(a>=13){
        printf("puedes ver la pelicula\n");
        }
    else{ 
        printf("no eres apto para ver este contenido\n");
        }
return 0;
}