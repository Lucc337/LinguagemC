#include<stdio.h>

main(){

    int a = 10, b = 20, c ;
     c = a;
     b = c;
     a = b;

    printf("resultado final: %d, %d, %d", a , b, c);


}