#include <stdio.h>
#include <stdlib.h>

// SAYININ BİRLER VE ONLAR BASAMAĞINI ALMA

int main() {
    
    int myNumber,first,second;

    printf("Pozitif bir sayi giriniz: ");
    scanf("%d",&myNumber);

    first = myNumber % 10; //her türlü 10 a bölümden birler bas ortada kalacak

    second = (myNumber % 100) / 10;//100e bölümünden kalan 2 bas. sayı 10 a bölünürse 2. bas gçrünür


    printf("Birler basamagi: %d \nOnlar basamagi: %d",first,second);


    return 0;
}