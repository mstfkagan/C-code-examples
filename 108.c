#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int wordCount(char*);

int main() {
    char message[100];

    puts("Enter a sentence: ");
    gets(message);

    printf("There are %d words in the entered sentence\n",wordCount(message));


    return 0;
}

int wordCount(char* ptr){

    int i=0,myWord=0;
    while(ptr[i] != '\0'){
        if(ptr[i] == ' '){
            myWord++;
        }
        i++;
    }
    return myWord +1;//+1 olma sebebi en sondaki boşluğu saymayacağı için eksik gönderir
}