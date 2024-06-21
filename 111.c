#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void printReverse(char*);//geri dönüt olmadğı için void kullandık

int main() {

    char message[100];

    puts("Enter a sentence:");
    gets(message);

    printReverse(message);

    return 0;
}
void printReverse(char* ptr){
    int i=0,length=0;

    length=strlen(ptr);
    for(i=length-1;i>=0;i--){//-1 olma sebebi dizinin 0. indeksten başlaması
        putchar(*(ptr+i));
    }
}