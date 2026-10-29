/*
un persona ahorra el 15 % de su salario semanal el 20% de productos
 y servicios el 50 % de comidas  y 15 % en divercion , haga un programa

*/

#include<stdio.h>
int main(void){
    float s, ss,ps,c,div;
    printf("introduce el salario semanal del trabajador:");
    scanf("%f",&s);
    ss=s*0.15*4;
    ps=s*0.20*4;
    c=s*0.50*4;
    div=s*0.15*4;
    printf("ahorro%f\n",ss);
    printf("productos y servicios%f\n",ps);
    printf("comidas%f\n",c);
    printf("diversion%f\n",div);
    
    return 0;
    
    }