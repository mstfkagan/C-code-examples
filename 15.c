#include <stdio.h>
#include <stdlib.h>

int main () {

    int number1,number2;

    number1 = 0;
    number2 = 0;

    printf("Enter two number:");
    scanf("%d %d",&number1, &number2);

    if (number1 > number2){
        printf("Number 1 is greater than number2");
    }
    else if(number2>number1){
        printf("Number2 is grater than number1");
    }
    else{
        printf("These numbers are equal");
    }

    return 0;
}