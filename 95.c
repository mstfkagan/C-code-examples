#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {   
    int a=7;

    int* ptr;
    ptr = &a;//ŞEKLİNDE DE KULLANILABİLİR

    printf("%d\n",a);
    printf("%x\n",&a);
    printf("%x\n",ptr);
    printf("%d\n",*ptr);

    *ptr = 10;//POİNTER ÜZERİNDEN DEĞER DEĞİŞTİRME

    printf("%d\n",*ptr);

    double x=3.14;
    double* y=&x;
    double* z=&x;

    printf("y: %lf\n",*y);
    printf("z: %lf\n",*z);

    *y= 21.19;

    printf("New z: %lf\n",*z);


    return 0;
}