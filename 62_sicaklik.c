#include <stdio.h>
#include <stdlib.h>

void menu();
int FahToCel(int);
int CelToFah(int);

int main() {

    char choose;
    int number;

    menu();

    scanf("%c",&choose);

    switch(choose){
        case 'c': printf("Fahrenheit degerini giriniz: ");
                scanf("%d",&number); 
                printf("Celsius degeri: %d",FahToCel(number)); break;

        case 'f': printf("Celsius degerini giriniz: ");
                scanf("%d",&number);
                printf("Fahrenheit degeri: %d",CelToFah(number)); break;

        default:printf("Yanlis deger girdiniz!");
    }



    return 0;
}


void menu(){
    printf("For F to C press C\n");
    printf("For C to F press F\n");
    printf("--------------------\n");
    printf("Choose one of them!\n");

}

int CelToFah(int c){//c olmak zorunda değil x veya y de olabilir
    return (c*9/5 + 32);
}

int FahToCel(int f){
    return (f-32)*5/9;
}