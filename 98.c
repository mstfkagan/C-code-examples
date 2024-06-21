#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float* squareRoot(float* ptr);//ilk floattan sonra * var pointer fonksiyonu olduğunu söyledin

int main() {
    
    float number;
    float* ptr;

    printf("Enter a number:");
    scanf("%f",&number);

    printf("%x\n",&number);

    ptr=squareRoot(&number);

    printf("Square root of number:%.2f\n\n",*ptr);//ADRESİN İÇİNDEKİ DEĞERİ ALDIM

    return 0;
}

float* squareRoot(float* ptr){
    *ptr=sqrt(*ptr);
    return ptr;//BURADA ADRESİ GÖNDERİYORUM

}