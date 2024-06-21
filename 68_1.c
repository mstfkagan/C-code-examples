#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>


int main () {

    printf("%c\n",toupper('a'));//%c DİKKAT ET
    printf("%d\n",toupper('a'));//%d DİKKAT ET   

    printf("Kucuk a degerleri: %d, %c\n",'a',isalnum('a'));
    // a DEĞERİNİ BÜYÜK A YAPAR ASCII DEĞERİNİ DE ARTTIRIR
    printf("\n-------------------------------------\n");

    printf("%c\n",tolower('A'));
    printf("%d\n",tolower('A'));


    printf("Buyuk A degerleri: %d, %c\n",'A',isalnum('A'));
    return 0;
}