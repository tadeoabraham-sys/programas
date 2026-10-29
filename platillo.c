/*La langosta ahumada es una empresa dedicada a ofrecer banquetes, sus tarifas son las 
siguientes, el costo de platillo por persona es de $95,pero si el numero de personas es mayor a
200 pero menor a o igual a 300 el costo del platiloo es de $85, para mas de 300 personas el costo por platillo es de
$75*/
#include <stdio.h>
int  main(void){
    int tarifas;

    printf("[1]platillos para 1 a 199 personas\n");
    printf("[2]platillos para 200 a 300 personas\n");
    printf("[3]platillos para mas de 300 personas\n");
    printf("eliga la opcion con el rango de personas que dispongan a un platillo\n");
    scanf("%d",&tarifas);

    switch (tarifas){
        case 1:
          printf("el costo del platillo es de $95 por persona\n");
          break;
        case 2:
            printf("el costo del platillo es de $85 por persona\n");
        break;
    
    default:
        printf("el costo del platillo es de $75 por persona\n");
    }    
 return 0;
}