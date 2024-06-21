#include <stdlib.h>
#include <stdio.h>

int main () {
    int satir,i,j;

    printf("Enter a number:");
    scanf("%d",&satir);

    for(i=1; i<=satir;i++){
        
        for(j=1; j<=i; j++){//j<=i ÖNEMLİ
            printf("%d",j);

        }
        printf("\n");
    }
    

    
    
    
    for(i=1; i<=satir;i++){
        
        for(j=i; j<=satir; j++){//j>=i ÖNEMLİ
            printf("%d",j);

        }
        printf("\n");
    }



    return 0;
}