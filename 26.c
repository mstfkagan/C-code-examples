#include <stdio.h>
#include <stdlib.h>


int main () {
    int day, numberOfProducts;
    char *dayName;
    numberOfProducts = 0;


    printf("Enter a number of day: ");
    scanf("%d",&day);
    if(day<8 && day>0){}
    else{
        printf("Lutfen 1-7 arasi gün sayisi giriniz.");
        return 0;
    }


    switch(day) { // eğer break kullanırsam aşağı ilerlemez 2 yazarım sadece salı günki satışı söyler
        case 7 : numberOfProducts+=25;
            if (day ==7) {dayName ="Sunday";}
        case 6 : numberOfProducts+=19;
            if (day ==6) {dayName ="Saturday";}
        case 5 :numberOfProducts+=15;
            if (day ==5) {dayName ="Friday";}
        case 4 : numberOfProducts+=10;
            if (day ==4) {dayName ="Thursday";}
        case 3 :numberOfProducts +=7;
            if (day ==3) {dayName ="Wednesday";}
        case 2 : numberOfProducts+=5;
            if (day ==2) {dayName ="Tuesday";}
        case 1 : numberOfProducts+=2;
            if (day ==1) {dayName ="Monday";}

    }
    printf("%s gunu sonunda toplam satis %d tanedir.",dayName, numberOfProducts); //metinsel ,fade çıktısı için %s

    return 0;
}