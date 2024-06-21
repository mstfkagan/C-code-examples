#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {

    int t=7;

    printf("x adresi %x\n",&t);//& İŞARETİ KOYARAK ADRESİ ALIYORSUN


//hexadecimal sayı alacakken %x kullanılır!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    printf("int: %d byte yer kaplar.\n",sizeof(int));
    printf("float: %d byte yer kaplar.\n",sizeof(float));
    printf("double: %d byte yer kaplar.\n",sizeof(double));
    printf("char: %d byte yer kaplar.\n",sizeof(char));
    printf("long double: %d byte yer kaplar.\n",sizeof(long double));


    int x=7;
    float y=3.14;
    double z=4.23445;
    char name='F';

    printf("x variable: %d\n",x);
    printf("y variable: %f\n",y);
    printf("z variable: %lf\n",z);
    printf("name variable: %c\n\n",name);

    printf("x variable address: %x\n",&x);
    printf("y variable address: %x\n",&y);
    printf("z variable address: %x\n",&z);
    printf("name variable address: %x\n\n",&name);

    printf("x variable address: %p\n",&x);
    printf("y variable address: %p\n",&y);
    printf("z variable address: %p\n",&z);
    printf("name variable address: %p\n",&name);
    return 0;
}