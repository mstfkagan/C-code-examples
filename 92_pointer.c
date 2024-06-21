#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main () {
    
//int 4 byte lık yer kaplar
//char 1 byte lık yer kaplar

    char name='F';
    int x=7;

    printf("%c",name);
//derleyici name variable'ın adresine gitti ve adresteki F değerini aldı, yazdırdı.
//bir varible bellekte 1byte dan fazla yer tutuyorsa 
//onun adresi başlangıç(en baştaki adres) adresidir(ilk kutucuk)

    printf("%x",&name);
    return 0;
}