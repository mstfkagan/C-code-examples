#include<stdio.h>
#include<stdlib.h>

/*int main(){
    int myNumber, myNumber2;

    myNumber=8;
    myNumber2=18;

    printf("My number:%d\n",myNumber);
    printf("My sec number: %d\n",++myNumber);
    printf("My third number: %d\n",myNumber++);
    printf("My last number: %d\n", myNumber);

    printf("------------------\n");
    printf("------------------\n");

    printf("My number2: %d\n", myNumber2);
    printf("My sec number2: %d\n", --myNumber2);
    printf("My third number2: %d\n",myNumber2--);
    printf("My last number2:%d\n", myNumber2);

    return 0;

}
*/

int main(){
    int x,y,z;

    x=4;
    y=9;
    z=13;
    x++; 
    ++y; 
    z--; 
    x=y++; 
    x=++y; 
    z=++x; 
    z=y--; 
    z=--y;

    printf("X: %d\n",++x);
    printf("y:%d\n",--y);
    printf("z: %d",z);

    return 0;
}    // x=13 y=10 z=10(normalde)          x=14 y=9 z=10 (çıkacak sonuçlar)