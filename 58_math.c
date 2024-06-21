#include <stdio.h>
#include <stdlib.h>
#include "mymath.h"//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//oluşturduğun kütüphane bulunduğun klasörde olmalı
int main () {
    int x,y,choose;

    menu();

    printf("Choose a number between |1 - 5|: ");
    scanf("%d",&choose);

    switch(choose){
        case 1:printf("Enter two numbers:");
               scanf("%d %d",&x,&y);
               printf("Minimum value is %d\n",min(x,y));
        break;

        case 2:printf("Enter two numbers:");
               scanf("%d %d",&x,&y);
               printf("Maximum value is %d",max(x,y));
               break;

        case 3:printf("Enter a number:");
               scanf("%d",&x);
               printf("Square of %d is %d",x,square(x));
               break;

        case 4:printf("Enter a number:");
               scanf("%d",&x);
               printf("Cube of %d is %d",x,cube(x));
               break;

        case 5:printf("Enter a number:");
               scanf("%d",&x);
               printf("Absolute value of %d is %d",x,absolute(x));
               break;

        default:printf("\nYou must enter a number between |1 - 5| ! \n%d is not in the interval.",choose);

    }
    return 0;
}

void menu(){
    printf("\n");
    printf("************\n");
    printf("*   MENU   *\n");
    printf("************\n");
    printf("1-Minimum\n");
    printf("2-Maximum\n");
    printf("3-Square\n");
    printf("4-Cube\n");
    printf("5-Absolute\n\n");

}

int min(int x, int y){
    if(x<y){
        return x;
    }
    else{
        return y;
    }
}   

int max(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}   

int square(int x){
    return x*x;
}

int cube (int x){
    return x*x*x;
}

int absolute(int x){
    if(x<0){
        return x*(-1);
    }
    else{
        return x;
    }
}
