#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {

    double x=216,result;

    result=cbrt(x);//KÜP KÖKÜNÜ HESAPLAR

    printf("Result: %.2f\n",result);//%f float olarak yazdırmak zorundasın


    double x2=6.01,result2;
    result2=ceil(x2);//CEİL FONK DEĞERİ ÜST TARAFININ TAM SAYISINA YUVARLAR

    printf("Result: %.2f\n",result2);


    double x3=-7.19, result3;

    result3 = fabs(x3);

    printf("Result: %.2f\n",result3);//floor FONK BİR ALT TAM SAYI DEĞERİNE YUVARLAR
    
    
    double x4=7.19, result4;

    result4 = floor(x4);//ONDALIK SAYININ MUTLAK DEĞERİ

    printf("Result: %.2f\n",result4);


    double x5=-9, result5;

    result5 = abs(x5);  //TAM SAYININ MUTLAK DEĞERİ

    printf("Result: %d\n",result5);//BU ŞEKİLDE KULLANILMAZ f OLMALI
    printf("Result: %d\n",abs(x5));//BURADA ÇIKTIDA f YERİNE d KOYABİLDİK
    
    
    double a=7,b=3,c=19;
    printf("%.2f ve %.2f sayilarinin farki: %.2f\n",a,b,fdim(a,b));

    printf("%.2f ve %.2f sayilarinin farki: %.2f\n",a,c,fdim(a,c));//fdim ARADAKİ FARKI HESAPLAR AMA FARK EKSİ İSE 0 YAZDIRIR


    double a1=7.12,b1=13.65,c1=5.85,result6;
    result6 = fma(a1,b1,c1);//(a1*b1) + c1 HESAPLAR
    printf("Result: %.3f\n",result6);


    double a2=78.12,b2=13.65,result7;
    result7= fmax(a2,b2);//İKİ SAYIDAN BÜYÜK OLANI YAZDIRIR

    printf("Result: %.2f\n",result7);


    double a3=74.10,b3=5,result8;
    result8= fmod(a3,b3);//KALANI VERİR
    printf("Result: %.2f\n",result8);


    double a4=7,b4=24,result9;
    result9 = hypot(a4,b4);//HİPOTENÜSÜ HESAPLAR
    printf("Result: %.2f\n",result9);


    return 0;
}
