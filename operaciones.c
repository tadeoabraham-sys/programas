
/* 
un persona ahorra el 15 % de su salario semanal el 20% de productos
 y servicios el 50 % de comidas  y 15 % en divercion , haga un programa
 */
#include <stdio.h>
int main(void){
    float a,b,s,r,m,d;
    
    printf("ingresa un numero a:\n");
    scanf("%f" ,&a);
    printf("ingresa un numero b:\n");
    scanf("%f" ,&b);
    printf("---------------\n");
    printf("OPERACIONES\n");
    printf("---------------\n");
    s=a+b;
    r=a-b;
    m=a*b;
    d=a/b;
    printf("sumado es:%2f\n",s);
    printf("restado es:%2f\n",r);
    printf("multiplicado es:%2f\n",m);
    printf("dividido es:%2f\n",d);
    return 0; 

}