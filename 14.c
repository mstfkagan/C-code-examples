#include <stdio.h>
#include <stdlib.h>


int main () {

    int myNumber;

    printf("Sayi giriniz::");
    scanf("%d",&myNumber);

    if (myNumber==50){
        printf("Notunuz %d, gectiniz fakat caba lazim",myNumber);
    }
    else if (myNumber==100){
        printf("Hic yanlisiniz yok");
    }
    else if (myNumber>50){
        printf("Notunuz %d, gectiniz",myNumber);
    }

    else{
        printf("Kaldiniz");
    }

    return 0;
}