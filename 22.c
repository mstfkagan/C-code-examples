#include <stdio.h>
#include <stdlib.h>


int main () {
    float talkTime, fee;

    printf("Phone talk time: ");
    scanf("%f",&talkTime);

    if(talkTime<= 4.0) {
        fee = 1;
        printf("Faturaniz: %2.f TL",fee);
    }
    else{
        fee = 1 + (talkTime - 4) * 0.07;
        printf("Faturaniz: %.2f TL",fee);
    }   
    return 0;
}