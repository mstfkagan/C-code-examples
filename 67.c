#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>//GETCH KOMUTU İÇİN EKLENDİ


int main () {
    char myButton;
    printf("Please enter a button: ");
    myButton=getchar();//getch yazarsan enter'a basmadan kodu çalıştırır
    printf("\n%c tusuna bastiniz.\n",myButton);
    printf("%c tusunun ASCII kodu %d\n",myButton,myButton);


    putchar(65);//62 A harfinin ASCII kodu direkt yazdırır
    putch(32);//32 boşluk tuşunun ASCII kodu direkt yazdırır
    printf("\n");

    for(int i=65;i<=90;i++){
        putchar(i);
        putchar(32);
    }



    return 0;
}