#include <stdio.h>
#include <stdlib.h>


int main () {

    int number,smallestNumber=0,i=1,largestNumber=0;
    

    do//Çıkmak için 0 yazıyoruz en küçük sayı sıfırsa sıfırı yazdırır
    {
        printf("%dth number: ",i);
        scanf("%d",&number);

        if(number == 0) break;
        if(number<smallestNumber) smallestNumber=number;
        if(number>largestNumber)  largestNumber=number;
        i++;
    } while (number !=0);

    printf("\nSmallest number: %d\nLargest number: %d",smallestNumber,largestNumber);


    return 0;
}