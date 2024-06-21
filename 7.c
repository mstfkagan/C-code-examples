#include <stdio.h>
#include <stdlib.h>


int main(){

    int x,y;

    x=6;
    y=5;

    printf("result x==y:%d \n", x==y); //X EŞİT MİDİR Y'YE DOĞRUYSA 1 DEĞİLSE 0

    printf("result !x=y %d\n", x!=y); // x eşit değil midir y'ye (eşitse 0 değilse 1 cevabı)

    printf("result x<y %d\n", x<y); // x y'den küçük müdür sorusu

    printf("result x>y %d \n", x>y); //x y'den büyük müdür sorusu

    printf("result x<=y %d \n", x<=y); //x küçük eşit y midir

    printf("result x>=y %d \n", x>=y); // x büyük eşit y midir

    printf("result = %d\n", x>2 && x<10); // verdiğim her iki koşul da doğru o yüzden cvp 1

    printf("result2 = %d\n", x<2 && x<10); //koşullardan biri doğru değil o yüzden cvp 0

    printf("result3 = %d\n", x>2 && x<y); // cevap 0 y x'ten büyük değildir

    printf("result4 = %d\n",x>2 || y>9 ); //cvp 1 çünkü veya kapısında biri doğru olsa yeterli

    printf("result5 = %d\n",x<2 || y<2 ); //cvp 0 çünkü ikisi de yanlış

    printf("result6 = %d\n",x>2 ^ y>9 ); //CVP 1 ÇÜNKÜ BİRİ DOĞRU BİRİ YANLIŞ

    printf("result7 = %d\n",!(x>2 && y>9) ); //CVP 1 (ASLINDA SIFIR FAKAT BAŞTA ÜNLEM CEVABI TERSİNE ÇEVİRİR)

    printf("result8 = %d\n",!x<2 && y<9 ); //X<2 İFADESİ YANLIŞ FAKAT BAŞINDA ÜNLEM VAR DOĞRUYA DÖNDÜ

    printf("x=%d,y=%d\n",x,y);


    return 0;
}