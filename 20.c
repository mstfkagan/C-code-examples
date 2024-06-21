#include <stdio.h>
#include <stdlib.h>
//ÖZEL SAYI DEMEK ABCD = (AB+CD)*(AB+CD) İSE ÖZEL SAYIDIR

int main (){
    int number,newNumber,part1,part2;

    printf("4 basamakli sayi giriniz:");
    scanf("%d",&number);

    part1 = number / 100;//ab kısmı 
    part2 = number % 100;//cd kısmı

    newNumber = (part1 + part2) * (part1 + part2);

    if (newNumber == number){
        printf("Girdiginiz sayi ozel sayidir.");
    }
    else{
        printf("Girdiginiz sayi ozel sayi degildir.\n");
    }
    //3025 özel sayıdır
    system("pause"); //CMD'NİN KAPANMASINI ENGELLER
    return 0;
    
}