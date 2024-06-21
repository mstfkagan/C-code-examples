#include <stdio.h>
#include <stdlib.h>


void allNumbers(int myNumbers[6]){
    for(int i=0;i<6;i++){
        printf("%d\n",myNumbers[i]);
    }
}

int main (){

    int myNumbers[6]={10,20,30,40,50,60};
    allNumbers(myNumbers);


    return 0;
}