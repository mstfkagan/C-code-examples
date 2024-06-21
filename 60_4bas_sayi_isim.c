#include <stdio.h>
#include <stdlib.h>

void BirlikCevir(int);
void OnlukCevir(int);

int main() {
    int number,d1,d2,d3,d4; //d dediğim basamak
    
    while(number != -1){
        printf("\nEnter a foru digit number:");
        scanf("%d",&number);

        if(number<1000) break;

        if(number ==-1)break;

        d1=number%10; 
        d2=(number%100)/10;
        d3=(number%1000)/100;//örnek sayı ver ve dene
        d4=number/1000;
        if(d4!=1) BirlikCevir(d4);//1 e eşit olmama nedeni bir bin diye bir şey olmaması
        printf(" Bin ");
        if(d3!=1) BirlikCevir(d3);//1524
        if(d3!=0) printf(" Yuz ");
        OnlukCevir(d2);
        printf(" ");
        BirlikCevir(d1);
        printf("\n\n");
    }



    return 0;
}

void BirlikCevir(int number){
    switch(number){
        case 1:printf("Bir");break;
        case 2:printf("Iki");break;
        case 3:printf("Uc");break;
        case 4:printf("Dort");break;
        case 5:printf("Bes");break;
        case 6:printf("Alti");break;
        case 7:printf("Yedi");break;
        case 8:printf("Sekiz");break;
        case 9:printf("Dokuz");break;
    }
}

void OnlukCevir(int number){
    switch(number){
        case 1:printf("On");break;
        case 2:printf("Yirmi");break;
        case 3:printf("Otuz");break;
        case 4:printf("Kirk");break;
        case 5:printf("Elli");break;
        case 6:printf("Atmis");break;
        case 7:printf("Yetmis");break;
        case 8:printf("Seksen");break;
        case 9:printf("Doksan");break;
    }
}