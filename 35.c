#include <stdio.h>
#include <stdlib.h>

int main () {
    int number,i;

    number = 0;
    i = 2;

    printf("Enter a number:");
    scanf("%d",&number);

    if(number<=0){
        printf("Please enter a POSITIVE number!");
        return 0;
    }

    while(i<number/2){ //bir sayı kendisinin yarısına kadar olan sayılara bölünmüyorsa asal sayıdır.
        if(number%i == 0){//if bloğu çalışmazsa i++ direkt çalışır başa döner
            printf("%d sayisi %d sayisina tam bolunur, asal sayi degildir.",number, i);
            return 0;
            }      
        i++;
    }
    printf("%d sayisi asal sayidir.",number);



    return 0;
}