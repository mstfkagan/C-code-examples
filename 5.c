#include <stdio.h>
#include <stdlib.h>

int main() {

    int x,y,z;
    
    x=2;
    y=4;
    z=7;
    x++; //x in yeni değeri 3
    ++y; //y nin yeni değeri 5
    z--; // z nin yeni değeri 6
    x=y++; // önce x=5 olur sonra y artar yeni y değeri=6
    x=++y; //önce y değerini arttır y= 7, sonra x=7
    z=++x; //önce x'i arttır x= 8 sonra z=8
    z=y--; //önce z yi y' ye eşitle z=7 sonra y'yi azalt y=6
    z=--y; //önce y'yi azalt y=5 sonra z'ye eşitle z=5

    printf("x: %d\n",x);
    printf("y: %d\n",y);
    printf("z: %d\n",z);

    return 0;
}