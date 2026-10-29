#include <stdio.h>
int main(void){
    int a,b=0;
    a=1;
    a+=5;
    b+=3;
    printf("%d\n",a!=b+1);
    printf("%d\n",1-a<b);
    printf("%d\n",a==b+2);
    printf("%d\n",a>=b);
    printf("%d\n",a+2<=b);
    return 0;
}