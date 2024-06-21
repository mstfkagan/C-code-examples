#include <stdio.h>
#include <stdlib.h>

int main(){

    int partyA, partyB,partyC,currentCouncilor;
    const int sumCouncilor = 600;

    printf("Meclisteki partilerin milletvekili sayilarini girin:");
    scanf("%d%d%d",&partyA,&partyB,&partyC);


    currentCouncilor = partyA + partyB + partyC;

    if(currentCouncilor<sumCouncilor/2){
        printf("Gerekli cogunluk saglanamadi, sayi yetersiz.\n");
        printf("Toplanti yeter sayisi 300");
    }
    else{
        printf("Meclis toplantiya hazir ");
    }

    return 0;
}