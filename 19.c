#include <stdio.h>
#include <stdlib.h>


int main() {
    int a,b,c;

    char longestSide;

    printf("Enter the side lenngths of the triangle:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c){
        longestSide = 'a';
    }
    else if (b>a && b>c){
        longestSide = 'b';
    }
    else{
        longestSide = 'c';
    }


    if(longestSide =='a'){
        if(a*a == b*b + c*c){
            printf("Dik acili ucgen");
        }
       else if(a*a > b*b + c*c){
            printf("Genis acili ucgen");
        }
        else if(a*a < b*b + c*c){
            printf("Dar acili ucgen");
        }
        else{
            printf("Girilen kenarlar bir ucgen olusturmaz!");
        }
    }    
    
    else if (longestSide == 'b'){
        if(b*b == a*a + c*c){
            printf("Dik acili ucgen");
        }
       else if(b*b > a*a + c*c){
            printf("Genis acili ucgen");
        }
        else if(b*b < a*a + c*c){
            printf("Dar acili ucgen");
        }
        else{
            printf("Girilen kenarlar bir ucgen olusturmaz!");
        }
    }

    else{
        if(c*c == b*b + a*a){
            printf("Dik acili ucgen");
        }
       else if(c*c > b*b + a*a){
            printf("Genis acili ucgen");
        }
        else if(c*c < b*b + a*a){
            printf("Dar acili ucgen");
        }
        else{
            printf("Girilen kenarlar bir ucgen olusturmaz!");
        }
    }



    return 0;
}