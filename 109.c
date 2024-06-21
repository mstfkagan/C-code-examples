#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void upperToLower(char*);
void lowerToUpper(char*);

int main() {
    char message[100];
    int choice;
    puts("       Bir secim yapiniz");
    puts("1-Buyuk harften kucuk harfe cevir"); 
    puts("2-Kucuk harften buyuk harfe cevir");
    scanf("%d",&choice);//scanf'ten sonra gets kullanılmaz
///////////////////////////////////////////////////
    getchar();//bunu yazmazsan aşağıdaki gets kodu çalışmaz scanf'ten sonra gets kullanmak için
///////////////////////////////////////////////////
    switch(choice){
        case 1:puts("Buyuk harflerden olusan cumle gir");
        gets(message);
        upperToLower(message); break;

        case 2:puts("Buyuk harflerden olusan cumle gir");
        gets(message);
        lowerToUpper(message); break;

        default: puts("Yanlis secim");
    }   


    return 0;
}

void upperToLower(char* ptr){

    for(;*ptr!='\0';ptr++){
        if(*ptr<='Z' && *ptr>='A'){
            putchar(*ptr+32);//ASCII kodundan dolayı
        }
        else putchar(*ptr);
    }
}
void lowerToUpper(char* ptr){

    for(;*ptr!='\0';ptr++){
        if(*ptr<='z' && *ptr>='a'){
            putchar(*ptr-32);
        }
        else putchar(*ptr);
    }
}