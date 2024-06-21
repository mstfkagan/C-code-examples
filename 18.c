#include <stdio.h>
#include <stdlib.h>


int main(){
    int number1,number2,number3,max,min,mid;

    printf("3 sayi giriniz");
    scanf("%d%d%d",&number1,&number2,&number3);

    if (number1>number2 && number3<number1){
        max = number1;
    }
    else if (number2>number1 && number2>number3){
        max = number2;
    }
    else{
        max = number3;

    }

    if (number1<number2 && number3>number1){
        min = number1;
    }
    else if (number2<number1 && number2<number3){
        min = number2;
    }
    else{
        min = number3;

    }

    if((number3>number1)&&(number1>number2) || (number2>number1 && number1>number3)){
        mid = number1;
    }
    else if ((number1 > number2 && number2>number3) || (number3 > number2 && number2>number1)){
        mid = number2;
    }
    else{
        mid = number3;
    }
    printf("max sayi: %d",max);
    printf("\nmid sayi: %d",mid);
    printf("\nmin sayi: %d",min);
    return 0;
}