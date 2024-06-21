#include <stdio.h>
#include <stdlib.h>
#include <math.h>//          !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


int main () {
    int i;

    for(i=0; i<=5; i++){
        printf("e uzeri %d: %f\n",i,exp(i));//exp fonksiyonu e değerinin üslerini almaya yarar
    }

    printf("%f\n",exp2(5));//ÇIKTISI FLOAT DİKKAT ET

    for(i=0; i<=5; i++){
        printf("2 uzeri %d: %.f\n",i,exp2(i));
    }


    for(i=0;i<=20;i++){
        printf("Karekok %d = %.3f\n",i,sqrt(i));//KAREKÖKÜNÜ ALMAYI SAĞLAR
    }

    return 0;
}