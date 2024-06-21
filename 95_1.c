#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {
    double x=7;
    int* ptr=&x;
// önce double sonra int giremezsin hata alırsın izin vermez
    printf("%d\n",*ptr);


    return 0;
}