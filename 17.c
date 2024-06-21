#include <stdio.h>
#include <stdlib.h>

int main(){
    int myNumber;

    printf("Enter a number:");
    scanf("%d",&myNumber);


    if(myNumber % 2 == 0){
        printf("Numaraniz cift sayidir.");
    }
    else{
        printf("Numaraniz tek sayidir.");
    }
    return 0;
}