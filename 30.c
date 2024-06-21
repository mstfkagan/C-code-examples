#include <stdio.h>
#include <stdlib.h>

int main () {
    int monthNumber;

    printf("Enter a month:");
    scanf("%d",&monthNumber);

    if(monthNumber<13 && monthNumber>0){}
    else{printf("Lutfen 1-12 arasi sayi giriniz."); return 0;}


    switch(monthNumber){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:printf("%d. ayda toplam 31 gun vardir.",monthNumber); break;
        case 2:printf("%d. ayda 28 veya 29 gun vardir.",monthNumber);break;
        default:printf("%d. ayda 30 gun vardir.",monthNumber);
    }


    return 0;
}