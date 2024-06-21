#include <stdio.h>
#include <stdlib.h>


int main() {
    int i;
    double wheat=1;//wheat = buğday
    double sumWheat =0;

    for(i=1;i<=64;i++){
        
        printf("------- %d. kare icin verilecek bugday sayisi:%20.0f\n",i,wheat);
        sumWheat += wheat;
        wheat *=2;
        printf("toplam:%20.0f",sumWheat);
    }
    printf("\n Bilgine verilecek bugday sayisi:%20.0f",sumWheat);




    return 0;
}