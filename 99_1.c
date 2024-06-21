#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    char myLetters[7]={'a','b','c','d','e','f','x'};

    printf("Ilk elemanin adresi:%x\n",myLetters);
    printf("Ilk elemanin adresi:%x\n",&myLetters[0]);

    printf("Ikinci elemanin adresi:%x\n",myLetters+1);
    printf("Ikinci elemanin adresi:%x\n",&myLetters[1]);

    printf("Ucuncu elemanin adresi:%x\n",myLetters+2);
    printf("Ucuncu elemanin adresi:%x\n",&myLetters[2]);

    printf("Ilk elemanin degeri:%c\n",*myLetters);
    printf("Ilk elemanin degeri:%c\n",myLetters[0]);

    printf("Ikinci elemanin degeri:%c\n",*myLetters+1);
    printf("Ikinci elemanin degeri:%c\n",myLetters[1]);

     printf("Ucuncu elemanin degeri:%c\n",*myLetters+2);
    printf("Ucuncu elemanin degeri:%c\n",myLetters[2]);






    return 0;
}