#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void calculate(char*);
void calculate1(char*);

int main() {
    char message[100];

    puts("Enter a sentence:");
    gets(message);
    calculate(message);
    calculate1(message);

    return 0;
}
void calculate(char* ptr){
    int letters[26],i=0,length;
    char activeLetter;
    length=strlen(ptr);
    for(i=0;i<26;i++){
        letters[i]=0;
    }

    for(i=0;i<length;i++){
        activeLetter=tolower(*(ptr+i));//hepsini küçük harfe dönüştür
        letters[activeLetter-97]++;//küçük a ASCII kodu 97
    }//[0]'da a var[1]'de b var
    printf("Letter\tRepeat\n");
    printf("------\t------\n");

    for(i=0;i<26;i++){
        if(letters[i]!=0){
            printf("%c\t%d\n",i+97,letters[i]);
        }
    }
}
void calculate1(char* ptr){
    int letters[26],i,length;
    char activeLetter;

    length=strlen(ptr);

    for(i=0;i<26;i++){
        letters[i]=0;
    }
    for(i=0;i<length;i++){
        activeLetter=toupper(*(ptr+i));
        letters[activeLetter-65]++;
    }
    printf("Letter\tRepeat\n");
    printf("------\t------\n");

    for(i=0;i<26;i++){
        if(letters[i]!=0){
            printf("%c\t%d\n",i+65,letters[i]);
        }
    }
}