#include <stdio.h>
#include <stdlib.h>

int main () {   

    int i,j,number;
    printf("Enter a number:");
    scanf("%d",&number);

    for(i=1; i<=number; i++){

        for(j=1; j<=3; j++){
            printf("Hello C");
            if(j != 3){
                printf(" - " );
            }
        }
        printf("\n-------------------------------\n");
    }

    return 0;
}