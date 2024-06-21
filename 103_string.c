#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    char greetings[]="Hello C!";// HELLO C!\0 VAR 0 YÜZDEN 9 KARAKTER VAR
    //\0 İŞARETİ STRİNG İN BİTTİĞİNİ İFADE EDER
    char greetings2[]={'H','e','l','l','o',' ','C','!','\0'};
    int i=0,size;
    size=sizeof(greetings);
    printf("%lu\n",size);//%lu VAR DİKKAT ET

    for(i=0;i<size;i++){
        printf("%c",*(greetings+i));
    }
    
    printf("\n");
    printf("%lu\n",sizeof(greetings2));

    printf("%s\n",greetings);
    printf("%s\n",greetings2);

    while(*(greetings+i)!='\0'){
        printf("%c",*(greetings + i));
        i++;
    }


    return 0;
}