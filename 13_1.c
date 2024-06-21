#include <stdio.h>
#include <stdlib.h>

//  GİRİLEN SAYILARIN ARİTMETİK ORTALAMASI

int main () {
    float a, b, c, d, average;

    printf("4 adet pozitif tam sayi giriniz:");
    scanf("%f%f%f%f",&a,&b,&c,&d);

    average= (a+b+c+d)/4;
    printf("Ortalama: %f",average);


    return 0;
}