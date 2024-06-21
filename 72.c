#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {

    char name[]="Kagan",isim[30],soyAdi[30];

    printf("%s\n",name);
    printf("%c\n",name[4]);//          %c OLACAK DİKKAT ET
    printf("%c\n",name[1]);

    //printf("Enter your name:");
    //scanf("%s",&isim);//scanf ile TEK KELİME ALABİLİRSİN BOŞLUKTAN SONRASINI OKUMAZ

    //printf("Isminiz: %s",isim);

    printf("Enter your surname:");
    gets(soyAdi);//gets KOMUTU BOŞLUK DA DAHİL HEPSİNİ ALABİLİR

    printf("%s\n",soyAdi);




    return 0;
}