#include <stdio.h>
#include <stdlib.h>
/*
int main(){
    float myNumber, myNumber2, myNumber3, myNumber4, square1,square2,square3,square4, kupu1,kupu2,kupu3,kupu4;
    
    myNumber=0.0;
    myNumber2=0.0;
    myNumber3=0.0;
    myNumber4=0.0;

    printf("Dort adet sayi giriniz: ");
    scanf("%f %f %f %f", &myNumber, &myNumber2, &myNumber3, &myNumber4);

    square1= myNumber * myNumber;
    square2= myNumber2 * myNumber2;
    square3= myNumber3 * myNumber3;
    square4= myNumber4 * myNumber4;

    kupu1= myNumber * myNumber * myNumber;
    kupu2= myNumber2 * myNumber2 * myNumber2;
    kupu3= myNumber3 * myNumber3 * myNumber3;
    kupu4= myNumber4 * myNumber4 * myNumber4;

    printf("The number \t\t");
    printf("Square of number \t\t");
    printf("Cube of number \n");

    printf("---------- \t\t");
    printf("---------- \t\t\t");
    printf("---------- \n");

    printf("%f \t\t", myNumber);
    printf("%f \t\t\t", square1);
    printf("%f \t\t\n", kupu1);

    printf("%f \t\t", myNumber2);
    printf("%f \t\t\t", square2);
    printf("%f \n", kupu2);

    printf("%f \t\t", myNumber3);
    printf("%f \t\t\t", square3);
    printf("%f\n", kupu3);

    printf("%f \t\t", myNumber4);
    printf("%f \t\t\t", square4);
    printf("%f \n", kupu4);

    return 0;
}
*/

int main(){
    const float PI=3.1415;
    float r, circumference, area;

    printf("Yaricap giriniz:");
    scanf("%f", &r);
    
    circumference = 2 * PI * r;
    area= PI * r * r;

    printf("Radius \t\t\t");
    printf("Circumference \t\t");
    printf("Area \n");

    printf("---------- \t\t");
    printf("---------- \t\t");
    printf("---------- \n");
    
    printf("%f \t\t", r);
    printf("%f \t\t", circumference);
    printf("%f \n", area);

    return 0;
}

