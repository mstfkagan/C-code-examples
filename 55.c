#include <stdio.h>
#include <stdlib.h>

void theMessage();
int sumNumber(int,int);

int main () {

    int toplam=sumNumber(2,10);

    theMessage();

    printf("Result is: %d\n\n",sumNumber(2,10));

    printf("Result is: %d\n",toplam);

    return 0;
}

void theMessage(){
    printf("Seni seviyorum\n");
}

int sumNumber(int x, int y){
    return x+y;
}

//FONKSİYONLARIN TANIMI ANA FONKSİYONUN ALT TARAFINDA NASIL KULLANILIR 