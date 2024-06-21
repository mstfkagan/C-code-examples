#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {
    char name[7];

    printf("Ilk elemanin adresi:%x\n",&name[0]);//ilk eleman ve
    printf("Arrayin adi:%x\n",name);//pointer aynı adrese sahiptir

    printf("4. arrayin adi:%x\n",name+3);//4. elemanın adresi

    return 0;
}