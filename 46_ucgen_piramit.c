#include <stdio.h>
#include <stdlib.h>

int main () {
    int number,i,j;

    printf("Enter a number: ");
    scanf("%d",&number);

    for(i=1;i<=number;i++){

        for (j=1; j<=number-i ;j++){
            printf(" ");
        }

        for (j=1;j<=i;j++){
            printf("* ");
        }

        printf("\n");
    }



    


/*
        *  başında 3 boşluk var mesela 4 satır var ama başta 3 boşluk var 4-i boşluk
       * * başında 2 boşluk
      * * * başında 1 boşluk
     * * * * başında boşluk yok



*/


    printf("Enter a number: ");
    scanf("%d",&number);

    for(i=1;i<=number;i++){

        for (j=1; j<=number-i ;j++){
            printf("  ");//ekstra bir boşluk daha ekledim
        }

        for (j=1;j<=i*2-1;j++){
            printf("* ");
        }

        printf("\n");
    }
    return 0;

}