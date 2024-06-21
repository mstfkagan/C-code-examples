#include <stdio.h>
#include <stdlib.h>
// 4 basamaklı sayının rakamları toplamı


int main() {
    int myNumber, bolum, kalan, sum;
    sum = 0;

    printf("4 Basamakli sayi giriniz:");
    scanf("%d",&myNumber);

    //4.basamak
    bolum = myNumber / 1000;

    sum += bolum; //toplamın içerisine attım 

    kalan = myNumber % 1000;
    //3. basamak
    bolum = kalan / 100;
    sum+= bolum;
    kalan = kalan % 100;

    //2.basamak
    bolum = kalan / 10;
    sum+= bolum;
    kalan = kalan % 10;

    //1.basamak
    bolum = kalan / 1;
    sum+= bolum;
    
    printf("%d", sum);

    return 0;
}