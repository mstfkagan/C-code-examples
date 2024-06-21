#include <stdio.h>
#include <stdlib.h>

int sumNumber(int i);


int main (){

    int result=sumNumber(5);
    printf("%d\n",result);


    return 0;
}


int sumNumber(int i){

    if(i>0){
        return i + sumNumber(i-1);//5 + sn(4) + 4 + sn(3) + 3 + sn(2) + 2 + sn(1) + 1 + sn (o)
    }//kısaca [n(n+1)]/2
    else{
        return 0;
    }
}