#include <stdio.h>
int main (void){
 float volts,tem;
 printf("ingresa el voltaje medido de -3 a 10 volts\n ");
 scanf("%.2f",&volts)
 if(volts<-3 && volts>10){
    printf("error medida invalida");
    }
    else(
        tem=volts/0.1;
        printf("la temperatura es de %.2fgrados",tem);
            
                 )

 retunr 0;    
}