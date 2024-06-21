#include <stdio.h>
#include <stdlib.h>

void increase();
void decrease();
int x = 7;

int main () {

    printf("x:%d\n",x);
    increase();
    printf("x:%d\n",x);
    decrease();
    increase();
    increase();
    increase();
    printf("x:%d",x);

    return 0;
}

void increase(){//void fonksiyonunda return kullanılmaz
    x++;
}

void decrease(){
    x--;
}
