#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int i,number=0;



    for(i=0;i<=10;i++){
        number=rand()%10;//%10 anlamı 0 ile 9arasında rastgele sayılar üret demektir
        printf("%d. rastgele sayi:%d\n",i,number);
    }

    printf("-------------------------------------\n");

    for(i=0;i<=10;i++){
        number=rand()%6+1;//0 ile 5 arasında değerler ama +1 dediği için 1 ile 6 arasında
        printf("%d. rastgele sayi:%d\n",i,number);
    }

    printf("-------------------------------------\n");

    srand(time(NULL));//her çalıştırmada yeni rastgele sayılar üretir(zamana bağlı olarak)
    
    for(i=0;i<=10;i++){
        number=rand()%100;//%10 anlamı 0 ile 9arasında rastgele sayılar üret demektir
        printf("%d. rastgele sayi:%d\n",i,number);
    }

    printf("-------------------------------------\n");

    return 0;
}