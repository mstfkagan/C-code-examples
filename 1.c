#include <stdio.h>
#include <stdlib.h>
/*
int main () {
    //yorum deneme
    /* satırdan satıra yorum deneme
    
    printf("Hello world! \n");
    printf("my second c code");
    return 0;
} 
*/


/*
int main () {

    char myLetter ='C';
    int myNumber= 7;
    float myNumber2=2.56;
    double myNumber3=213.568;
    int _hacim_deneme=24; //alt çizgi veya harfle başlanabilir sayı ile başlanmaz

    printf("%c \n", myLetter); // \n önemli
    printf("My lucky number is %d \n", myNumber); // %d den önce yazı ekleme
    printf("%f \n", myNumber2);
    printf("%lf \n", myNumber3);
    printf("%d \n", _hacim_deneme);
    printf("%s\n", "Where have you been");
    return 0;
}
*/
/*
int main () {

    char myLetter ='C';
    int myNumber= sizeof(char);
    float myNumber2=2.56;
    double myNumber3=213.568;
    int _hacim_deneme=24; 

    printf("size char:%d\n",sizeof(char)); // bellekte kapladığı byte sayıları
    printf("size şnt: %d\n",sizeof(int)); 
    printf("size float:%d\n",sizeof(float));
    printf("size double:%d\n",sizeof(double));
    return 0;
}
*/

/*
int main(){
    int myNumber, myNumber2, myNumber3, sum; //aynı tür(int) olmak şartıyla virgül koy ekle
    myNumber=myNumber2=myNumber3=5;   //hepsini eşitlemek
    sum=myNumber + myNumber2 + myNumber3;
    printf("My number 1: %d\n",myNumber);
    printf("My number 1: %d\n",myNumber2);
    printf("My number 1: %d\n",myNumber3);
    printf("Sum: %d\n", sum); //en son hangisini yaptıysan onu gösterir

    return 0;
}
*/

int main(){ //aşağı satırda int yerine float yazıp ondalık değerleri hesaplama olabilirdi %d ler de%f olur
    int mySum, MyExtraction, myMultiplication;
    float myNumber, myNumber2, myDivision; // !!DİKKAT!!
    myNumber=13;
    myNumber2=28;
    mySum= myNumber + myNumber2;
    MyExtraction= myNumber - myNumber2;
    myMultiplication= myNumber * myNumber2;
    myDivision= myNumber2 / myNumber;
    printf("Toplama: %d\n", mySum);
    printf("Cikarma: %d\n", MyExtraction);
    printf("Carpma: %d\n", myMultiplication); 
    printf("Bolme: %f\n", myDivision);  // !!DİKKAT!!
    return 0;
}

// burada bölme işlemi sonucu 2 çünkü numaraları int olarak atadık
// sayıları da float olarak atayınca tam sonucu gösterir

