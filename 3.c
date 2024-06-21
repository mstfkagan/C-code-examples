#include <stdio.h>
#include <stdlib.h>

int main(){    
    
    float myNumber, myNumber2, myNumber3, myNumber4, karesi1,karesi2,karesi3,karesi4,kupu1,kupu2,kupu3,kupu4;
    myNumber2=0.0;
    myNumber3=0.0;
    myNumber4=0.0;
    myNumber= 0.0;// bunlara değer tanımasan da aynı sonuç olur
    

    printf("Enter four numbers: ");
    scanf("%f %f %f %f", &myNumber,&myNumber2, &myNumber3, &myNumber4);
    printf("The number\t\t");
    printf("Square of numbers\t\t");
    printf("Cube of number\t\t\n");

    karesi1=myNumber * myNumber;
    karesi2=myNumber2 * myNumber2;
    karesi3=myNumber3 * myNumber3;
    karesi4=myNumber4 * myNumber4;

    kupu1=myNumber * myNumber * myNumber;
    kupu2=myNumber2 * myNumber2 * myNumber2;
    kupu3=myNumber3 * myNumber3 * myNumber3;
    kupu4=myNumber4 * myNumber4 * myNumber4; //BU DEĞERLERİ SAYILARI ALMA KODUNDAN SONRA YAZ YOKSA OLMAZ


    printf("---------- \t\t");
    printf("---------- \t\t\t");
    printf("---------- \t\t\n");

    printf("%f \t\t", myNumber);
    printf("%f \t\t\t",karesi1);
    printf("%f \t\t\t\n",kupu1);

    printf("%f \t\t", myNumber2);
    printf("%f \t\t\t",karesi2);
    printf("%f \t\t\t\n",kupu2);

    printf("%f \t\t", myNumber3);
    printf("%f \t\t\t",karesi3);
    printf("%f \t\t\t\n",kupu3);

    printf("%f \t\t", myNumber4);
    printf("%f \t\t\t",karesi4);
    printf("%f \t\t\t",kupu4);


    
    


    return 0;
}