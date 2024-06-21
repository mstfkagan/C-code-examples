#include <stdio.h>
#include <stdlib.h>


int main () {
    int number, i,factorial;

    factorial = 1;
    printf("Enter a positive number:");
    scanf("%d",&number);

    for(i=1;i<=number;i++){
        factorial *= i;//1*1,,1*1*2,,1*1*2*3


    }
    printf("%d! = %d",number,factorial);

    return 0;
}