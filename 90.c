#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX(number1,number2) (number1>number2)? number1:number2 
//? ise anlamı : değilse anlamı
#define MIN(num1,num2) (num1<num2)? num1:num2

#define AREA_OF_RECTANGLER(x,y) ((x)*(y))

#define MYNUMBER 7

int main() {

    printf("MAX(2,7):%d\n",MAX(2,7));
    printf("MAX(19,45):%d\n",MAX(19,45));

    printf("MIN(23,45):%d\n",MIN(45,23));

    printf("Area: %d",AREA_OF_RECTANGLER(2,5));

    printf("MYNUMBER:%d",MYNUMBER);
    #undef MYNUMBER//DEFINE KALDIRMA KOMUTU
    printf("MYNUMBER1:%d",MYNUMBER);


    return 0;
}