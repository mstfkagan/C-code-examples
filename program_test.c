#include <stdio.h>
#include <stdlib.h>

int main() {

    int bolum, kalan, sum, myNumber;
    
    sum = 0;

    printf("4 Basamakli sayi giriniz:");
    scanf("%d", &myNumber);

    //4.Basamak
    bolum = myNumber /1000;
    sum += bolum;
    kalan = myNumber % 1000;

    //3.Basamak
    bolum = kalan /100;
    sum+= bolum;
    kalan = kalan % 100;

    //2.Basamak
    bolum = kalan / 10;
    sum+= bolum;
    kalan = kalan % 10;

    sum+= kalan; //BURADA KALANI 1 E BÖLDüK FAKAT KENDİSİ OLDUĞU İÇİN EKSTRA YAZMADIM
    printf("Rakamlarin toplami = %d", sum);


    return 0;
}