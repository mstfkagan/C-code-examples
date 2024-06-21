#include <stdio.h>
#include <stdlib.h>

int main() {

    int bookPrice, orderQuantitiy;
    float discountRate, noDiscountPrice, discountPrice, sum;

    bookPrice = 20;
    orderQuantitiy = 0;

    printf("Kac adet kitap alacaksiniz: ");
    scanf("%d",&orderQuantitiy);

    if(orderQuantitiy>=60){
        discountRate = 0.30;
    }
    else{
        if(orderQuantitiy>=30 && orderQuantitiy<60){
            discountRate = 0.20;
        }
        else if(orderQuantitiy >=10 && orderQuantitiy<30){
            discountRate = 0.12;

        }
        else{
            discountRate = 0.01;
        }
    }

    noDiscountPrice = orderQuantitiy * bookPrice;

    printf("Kitabin indirimsiz fiyati: %f\n",noDiscountPrice);

    discountPrice = orderQuantitiy * bookPrice * discountRate;
    printf("Indirim tutariniz: %f\n",discountPrice);

    sum = noDiscountPrice - discountPrice;
    printf("Tutar: %.2f",sum);  // .2f VİRGÜLDEN SONRA 2 BASAMAK YAZDIR


    
    return 0;
}