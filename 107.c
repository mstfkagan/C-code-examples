#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int findLength(char*);
int shortFindLength(char*);
int findLength1(char[]);

int main() {
    char message[100];

    puts("Enter a sentence:");
    gets(message);//scanf komutu boşluğu okumaz,gets okur

    printf("Length: %d\n\n",findLength(message));
    printf("Length: %d\n\n",shortFindLength(message));
    printf("Length: %d\n",findLength1(message));

    return 0;
}
int findLength(char* ptr){
    int i=0;
    while(ptr[i] !='\0'){
        i++;
    }
    return i;//DİKKAT ET!!!!!!!!!!!!!!!!
}
int shortFindLength(char* ptr){
    return strlen(ptr);
}
int findLength1(char message[]){
    return strlen(message);
}