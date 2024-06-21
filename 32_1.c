#include <stdio.h>
#include <stdlib.h>


int main () {
    int i;
/*
    for(i=0;i<7;i++){// önce kontrol eder sonra arttırır çünkü ++ işareti sağ tarafta
        printf("%d\n",i);//önce ilk değeri kontrol eder uyuyorsa 1 arttırır ama arttırmadan önce yazdırır
    }//1.koşul--2.koşul--yazdır--3.koşul
*/
    for(i=30;i>5;i-=5){
        printf("%d\n",i);
    }
    return 0;
}