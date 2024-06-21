#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int number ,squareRoot;

    printf("Enter a positive number:");
    scanf("%d",&number);

    if(number<=0){
        printf("Don't do this\n");
    }
    else{
        squareRoot = sqrt(number);

        if(squareRoot * squareRoot == number){
            printf("Square root of %d is an integer: %d",number,squareRoot);

        }
        else{
            printf("No it is not \n");
        }
    }
    


    return 0;
}