#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>//TİME KOMUTU İÇİN ZOURNLU


int main () {

    int i,dice,howMany[7]={0,0,0,0,0,0};//dice==zar

    srand(time(NULL));

    for(i=1;i<=100;i++){//100 kere zar attım
        dice=rand()%6+1;//+1 eklemezsen sıfırdan başlar 1 ile 6 arasında rastgele sayi
        howMany[dice]++;//örneğin dice=2 2. kısımdaki sayıyı 1 arttırır
    }
    printf("Zar numarasi\t Kac Defa geldi\n");
    for(i=1;i<7;i++){
        printf("%d\t\t%d\n",i,howMany[i]);
    }

    return 0;
}