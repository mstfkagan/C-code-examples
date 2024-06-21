#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int i,mySquare[20];

    for(i=0;i<20;i++){
        mySquare[i]= i * i;
        printf("mySquare[%d]:%d\n",i,mySquare[i]);
    }


    return 0;
}