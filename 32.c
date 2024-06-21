#include <stdio.h>
#include <stdlib.h>


int main () {
    int i=9;
    do{//while dan farkı bu önce kodu 1 kez çalıştırır while döngü koşuluna uymasa bile
        printf("%d\n",i);
        i++;
    }
    while(i<=7);


    return 0;
}