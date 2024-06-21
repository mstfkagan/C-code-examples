#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

char* messagePtr="What an interesting language";
char myArray[30]="Hello C!";
char message[100];

    puts(messagePtr);//sondaki \0 karakterlerini \n'e çeviriyor
    puts(myArray);//sondaki \0 karakterlerini \n'e çeviriyor

    puts("Please, enter a sentence:");
    gets(message);//gets komutu dizide ne kadarlık boş alan var hesaplayamaz ona göre dikkatli kullan

    puts("\n Your sentence:");
    puts(message);

    int size=sizeof(message)/sizeof(message[0]);

    for(int i=0;i<size;i++){
        printf("%c",myArray[i]);
    }


    return 0;
}