#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {

    double x=-20.49,y=6,z=0.00/0.00,result;//z=14.0
     

    printf("%.2f degeri sonsuz bir deger %s\n",x,isfinite(x)? "degildir":"dir");//if değildir -- else dir
    printf("%.2f degeri sonsuz bir deger %s\n",y,isfinite(y)? "degildir":"dir");
    printf("%.2f degeri sonsuz bir deger %s\n",z,isfinite(z)? "degildir":"dir");
    
    printf("%.2f degeri sonsuz bir deger %d\n",z,isfinite(z));//1 evet demek -- 0 hayır demek
    //z sıfır döner sonsuz değerdir


    printf("%.2f degeri %.2f degerinden buyuk bir deger %s\n",x,y,isgreater(x,y)? "dir":"degildir");

    // x büyük müdür y değerinden
    
    
    printf("%.2f degeri %.2f degerinden buyuk veya esit bir deger %s\n",x,y,isgreaterequal(x,y)? "dir":"degildir");
    //x değeri y değerinden büyük eşit midir

    

    printf("%.2f degeri %.2f degerinden kucuk bir deger %s\n",x,y,isless(x,y)? "dir":"degildir");
    //x değeri y değerinden küçük müdür
    
    printf("%.2f degeri %.2f degerinden kucuk veya esit bir deger %s\n",x,y,islessequal(x,y)? "dir":"degildir");
    //x değeri y değerinden küçük eşit midir

//-----------------------------------------------------------------------------------

    printf("%d\n",isnan(z)); //sayı değil midir sorusu
    //1 çıkarsa sayı değildir
    //0 çıkarsa sayıdır

//-----------------------------------------------------------------------------------

    result =remainder(x,y);// iki sayının bölümünden kalan sayıyı hesaplar
    
    printf("Result: %.2f\n",result);
//----------------------------------------------------------------------------------
    result=round(x);// bu fonksiyon yuvarlama yapar
    printf("Result: %.2f\n",result);

    //20.49 a kadar 20 ye yuvarlar 20.5 ve sonrasında 21 e yuvarlar

//----------------------------------------------------------------------------------

    printf("%.2f degeri negatif bir deger %s\n",x,signbit(x)? "dir":"degildir");
    printf("%.2f degeri negatif bir deger %s\n",y,signbit(y)? "dir":"degildir");
    //negatif bir değerse 1 çıkar yani if'alanındaki kod dir
    //pozitif bir değerse 0 çıkar yani else'alanındaki komut degildir

    printf("%d\n",signbit(x));//x değeri negatiftir o yüzden 1 çıktısı gelir
    printf("%d\n",signbit(y));//y değeri pozitiftir o yüzden 0 çıktısı gelir

    return 0;
}