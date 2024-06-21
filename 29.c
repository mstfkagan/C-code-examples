#include <stdio.h>
#include <stdlib.h>


int main () {
    char letter;

    printf("Enter a letter:");
    scanf("%c",&letter);


    switch(letter){
        case 'a':
        case 'e':
        case 'i':
        case 'o'://buralara break koymama sebebi bunlardan herhangi biri girilirse direkt hepsini çalıştıracak en sonda printf çıktısı olacak
        case 'u':printf("%c is a vowel",letter); break;
        default:printf("%c is a consonant\n",letter);
                printf("or %c is not a letter",letter);
    }


    return 0;
}