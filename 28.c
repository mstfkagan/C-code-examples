#include <stdio.h>
#include <stdlib.h>


int main() {
    int number;
    printf("Enter a number:");
    scanf("%d",&number);


    switch(number%2){
        case 1: printf("%d tek sayidir.",number); break;
        case 0: printf("%d cift sayidir.",number); break; //break koymasan da olur
        //default:printf("Lutfen tam sayi giriniz.");
    }

    return 0;
}