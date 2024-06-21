#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MYNUMBER 7

int main(){

    #if MYNUMBER > 10
    printf("MYNUMBER is larger than 10");
    #elif MYNUMBER == 7            //else if ile aynı
    printf("NUMARAN 7");
    #else 
    printf("MYNUMBER is smaller than 10");
    #endif


    #ifdef MYNUMBER
    printf("adsads");
    #ifndef
    #endif


    return 0;
}