#include <stdio.h>
#include <stdlib.h>

/*
int main(){
    int myNumber, myNumber2, mySum;
    printf("Enter two number:");
    scanf("%d %d",&myNumber,&myNumber2); // my numberdaki valueble'a ata diyorum 
    printf("The number you entered is %d - %d\n", myNumber, myNumber2);

    return 0;
}
*/
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
/*
int main(){
    /*DAİRENİN ÇEVRESİNİ VE ALANINI BULMA
1- İhtiyaç olan variables bul ve tanımla
2- Variables type bul
3- Formülü tanımla
4- Kullanıcıdan verileri al
5- işlem yap
6- kullanıcıya çıktıyı göster
    
    float r, circumference, area;
    const float PI=3.1415; //C dilinde virgül NOKTA DEMEKTİR!
    //SABİT DEĞER VERME!!
    printf("Dairenin yaricapi: ");
    scanf("%f", &r); //TIRNAK İÇİNE ALMA DİKKAT ET!!
    circumference= 2*PI*r;
    area= PI*r*r;
    printf("Circumference of the circle: %f\n", circumference);
    printf("area of the circle: %f",area);    


    return 0;
}
*/
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int main(){
    /*
4 adet sayı alıp bunların karesini ve küpünü alan program
1- İhtiyaç olan variables bul ve tanımla
2- Variables type bul
3- Formülü tanımla
4- Kullanıcıdan verileri al
5- işlem yap
6- kullanıcıya çıktıyı göster
    */
    float myNumber, myNumber2, myNumber3, myNumber4;
    myNumber2=0.0;
    myNumber3=0.0;
    myNumber4=0.0;
    myNumber= 0.0; // bunlara değer tanımasan da aynı sonuç olur
    printf("Enter four numbers: ");
    scanf("%f %f %f %f", &myNumber,&myNumber2, &myNumber3, &myNumber4);
    printf("The number\t\t");
    printf("Square of numbers\t\t");
    printf("Cube of number\t\t\n");

    printf("---------- \t\t");
    printf("---------- \t\t\t");
    printf("---------- \t\t\n");

    printf("%f\t\t", myNumber);
    printf("%f\t\t\t", myNumber * myNumber);
    printf("%f\n", myNumber * myNumber * myNumber);

    printf("%f\t\t", myNumber2);
    printf("%f\t\t\t", myNumber2 * myNumber2);
    printf("%f\n", myNumber2 * myNumber2 * myNumber2);

    printf("%f\t\t", myNumber3);
    printf("%f\t\t\t", myNumber3* myNumber3);
    printf("%f\n", myNumber3 * myNumber3 * myNumber3);

    printf("%f\t\t", myNumber4);
    printf("%f\t\t\t", myNumber4 * myNumber4);
    printf("%f\n", myNumber4 * myNumber4 * myNumber4);


    return 0;
}