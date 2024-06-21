#include <stdio.h>
#include <stdlib.h>

int main() {

    int myNumber, myNumber2;

    myNumber = 3;
    myNumber2 = 4;
    //myNumber2-=4; //Y'DEN 4 ÇIKART YENİ DEĞERİNİ 0 YAP
   // myNumber+=12; //X'E 12 EKLE YENİ DEĞERİNİ 15 YAP 
    
   // myNumber *=2;//X=32
    //myNumber /=4; //8
     
    //myNumber %=3; //8'i 3'e böldüğünde kalanı göstermek için PRİNTF İLE KALAN SAYIYISINI GÖSTERİR
    
    myNumber >>=2; //VE'YHE GÖRE CEVAP 3 OLACAK|VEYA YA GÖRE CEVAP 7 OLACAK|KAYDIRMAYA GÖRE 12 OLACAK
    //3=00000011 VE 2 SOLA KAYDIRIRSAK YENİ3=00001100 OLUR BUNUN DA DEĞERİ 12 OLUR
    //3=00000011 VE 2 SAĞA KAYDIRIRSAK YENİ3=00000000 OLUR DEĞERİ SIFIR OLUR
    
    printf("Number: %d\n",myNumber);
    printf("My sec number: %d",myNumber2);


    return 0;
}