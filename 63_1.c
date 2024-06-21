#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    int number,number2;

    printf("Enter two number:");
    scanf("%d%d",&number,&number2);

    printf("%d uzeri %d = %.2f\n",number,number2,pow(number,number2));

    printf("log(3) = %.3f",log(3));//logaritma e tabanında 3 ü hesaplar


    return 0;
}