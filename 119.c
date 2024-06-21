#include <stdio.h>
#include <stdlib.h>
#include <math.h>

enum Level{
    SMALL=23,//ilk baştakine değer vermezsen 0dan başlar
    MEDIUM,//BÜYÜK HARF ZORUNLULUĞU YOK  eğer small a 25 dersen sırasıyla 1 artarak gider
    LARGE,//KULLANIM RAHATLĞI
    XLARGE
};

enum Seviye{
    FALSE,
    TRUE
};

enum COLOR{
    WHITE=1,
    BLACK,
    RED,
    PURPLE,
    YELLOW,
    BLUE,
    PINK
};

enum Months{
    JANUARY=1,
    FENRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {

    enum Level myConstant;
    myConstant=XLARGE;

    printf("%d\n",myConstant);

    enum Seviye deger;
    deger=TRUE;

    if(deger){
        printf("Islem basarili: %d\n",deger);
    }
    else{
        printf("Islem basarisiz %d\n",deger);
    }

    enum Months ay;
    ay=SEPTEMBER;

    printf("Sectiginiz Ay %d.ay\n",ay);

    if(ay ==6 || ay==7 || ay==8){
        printf("Yaz mevsimi\n");
    }
    else if(ay==9 || ay==10 || ay==11){
        printf("Sonbahar mevsimi\n");
    }
    else if(ay==12 ||ay==1 || ay==2){
        printf("Kis mevismi\n");
    }
    else if(ay==3|| ay==4||ay==5){
        printf("Ilkbahar mevsimi\n");
    }

    enum COLOR renkler;
    renkler=BLUE;

    printf("Renk kodu=%d\n",renkler);




    

    return 0;
}