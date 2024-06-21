#include <stdio.h>
#include <stdlib.h>


void allNumbers(int myNumbers[6]){
    for(int i=0;i<6;i++){
        printf("%d\n",myNumbers[i]);
    }
}
/*
int showMe(int x){
    return x+5;
}

int main () {

    printf("Result is %d\n",showMe(2));

    return 0;
}
*/

int showMe(int x, int y){
    return x+y;
}

void numbers(int x, int y){
    printf("Result is %d\n",x + y);
}
int cikarma(int x, int y){
    return x-y;
}

int main () {

    int myNumber=showMe(2,10)*10;

    int number=cikarma(showMe(10,20), 5);//cikarma fonksiyonunun içinde iki sayı var dikkatli bak virgül ile ayrıldı

    printf("Result is %d\n",myNumber);

    numbers(2,20);

    //printf("Result is %d\n",numbers(2,22)); //fonksiyon void olduğu için yapamadım

    printf("Karma fonksiyon: %d",number);

    return 0;
}