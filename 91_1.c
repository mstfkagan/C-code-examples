#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MYNUMBER 7

//TANIMLI OLUP OLMADIĞINI KONTROL ETMEK

int main() {

    #ifdef MYNUMBER
        printf("\nMYNUMBER tanimli ve degeri:%d\n\n",MYNUMBER);
    #else
        printf("\nMYNUMBER tanimli degil\n\n");
    #endif

    #undef MYNUMBER//////////////////////////////////////////////////////////////////////
    
    #ifdef MYNUMBER
        printf("MYNUMBER tanimli ve degeri:%d\n",MYNUMBER);
    #else
        printf("MYNUMBER tanimli degil\n\n");
    #endif


    #ifndef MYNUMBER //MYNUMBER tanımsız ise bu koşul gerçekleşir ifnotdef//yerde undef yaptın //EĞER TANIMSIZ İSE
        #define MYNUMBER 19
    #endif

    printf("MYNUMBER tanimli ve degeri:%d",MYNUMBER);


    return 0;
}