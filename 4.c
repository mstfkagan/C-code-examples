#include <stdio.h>
#include <stdlib.h>
/*
int main(){
    char myCity[8]; // BURADAKİ SAYI KAÇ TANE HAR VAR EN AZ ONA GÖRE YAZ 6(KARAKTER) OLMAZ
    
    printf("Enter your city: ");
    scanf("%s", &myCity);  // EĞER İKİ KELİMEYSE BOŞLUKTRAN SONRASINI OKUMAZ 
    printf("Your city is: %s", myCity);
    printf("\n\n");


    return 0;
}
*/
/*
int main(){
    int myNumber, myNumber2, myNumber3;

    myNumber = 7 + 12;
    myNumber2 = myNumber +12;
    myNumber3= myNumber + myNumber2;

    printf("My number is %d\n", myNumber);
    printf("My number2 is %d \n",myNumber2);
    printf("My number 3 is %d\n", myNumber3);



    return 0;
}
*/
/*
int main(){
    int x, y, sum,sub,multi,div,mod;// eğer int alırsan bölme işlemi 0 çıkar
    // float alsan bile x ve y yi eklemen lazım aksi halde yine tam bölünmez

    x=6;
    y=4;

    sum= x + y;
    sub= x - y;
    multi= x * y;
    div= x / y;
    mod= x % y;

    printf("Sum: %d\n", sum);
    printf("Sub: %d \n",sub);
    printf("Multi: %d\n",multi);
    printf("Div: %d\n", div);
    printf("Mod: %d",mod);



    return 0;
}
*/

int main(){
    int myNumber, myNumber2;

    myNumber = 4;

    printf("My number: %d\n", myNumber); // numaramı yazdır == 4
    printf("My number2: %d\n",++myNumber); // önce numarama 1 ekle sonra yazdır == 5
    printf("My nubmer3: %d\n", myNumber++); // önce numaramı yazdır sonra 1 ekle == 5(+1 eklendi ama önce yazdır dedik sonra eklendi)
    printf("My last number: %d\n",myNumber); // numaramı yazdır == 6
    printf("My multi number: %d\n", myNumber *4); //son numaramı 4 ile çarp yazdır == 24

    printf("--------------------\n--------------------\n");

    myNumber2= 12;

    printf("My number: %d\n",myNumber2); // numaramı yazdır
    printf("My number2: %d\n",--myNumber2); // numaramı önce 1 eksiltsonra yazdır == 11
    printf("My number3: %d\n", myNumber2--); // önce numaramı yazdır sonra eksilt == 11
    printf("My last number: %d\n", myNumber2); //son numaramı yazdır == 10
    printf("My multi number: %d\n", myNumber2 * 4); //son numaramla 4 ü çarp == 40
    return 0;
}



















