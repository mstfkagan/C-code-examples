#include <stdio.h>
#include <stdlib.h>

int main () {

    int number,i,j,control;

    printf("Enter a number:");
    scanf("%d",&number);

    for(i=2;i<=number;i++){
            control =1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){//if çalışmazsa bu for'da başa dön j'yi 1 arttır tekrar dene
            control= 0;//asal sayi degildir
            break;
            }
        }
        if(control !=0){
            printf("%d ",i);
        }
    }

/*numara 20 olsun i=2 küçük müdür 20'den evet controle 1 de i'yi 3 yap for'a gir
j=2 küçük müdür 1'den değildir for'dan çık i=2 değerini yaz
yeni i=3
3 küçük müdür 20'den evet control 1 yap for'a gir
j=2 küçük müdür 1.5'ten değil for'dan çık i=3'ü yazdır
yeni i=4
4 küçük müdür 20'den evet control 1 yap for'a gir
j=2 küçük eşit midir 2'den evet iç for'a gir
4ile 2 nin bölümünden kalan sıfır mı evet control = 0 yap break ile kodu kır
koşulda control sıfırsa yazdırma diyor o yüzden 4 yazılmaz*/
    return 0;
}