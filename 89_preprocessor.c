#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//# işareti ön işlemci komutu
#define MYNUMBER 7//büyük harf zorunluluğu yok okuma kolaylığı
//program derlenmeden önce
//MYNUMBER gördüğü her yere 7 yazacak

#define ROW 100
#define COLUMN 100

//valueble 'lar hafızada yer AYIRIR, define almaz

#define PI 3.141592//virgül değil nokta !!!!!!!!!!!!!!!

#define yazdir printf
#define oku scanf

#define array 19

int main() {

    int matrix[ROW][COLUMN];
    int radius;
    float area;

    const float Pi=3.141592;
    printf("%f\n",Pi);

    Pi=33;//CONST KOMUTU DEĞİŞTİRMEYİ ENGELLER

    printf("%f\n",Pi);

    yazdir("%d\n",MYNUMBER);

    yazdir("Yaricap giriniz: ");
    oku("%d",&radius);

    area = PI * radius * radius;
    yazdir("Area of the circle: %f\n",area); 

    //EĞER DİZİ İÇİN KULLANILACAKSA CONST KULLANILMAZ DEFINE KULLANILIR

    const float num=19;

    int matrix[number]={1,2,3,4,5};

    int matrix[array]={1,2,3,4,5}; //bunun gibi




    return 0;
}