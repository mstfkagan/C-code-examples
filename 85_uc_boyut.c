#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {

    int matrix[4][2][5]={
                        {{9,2},{7,5,6,}},
                        {{7,8,19},{10,12,15,11,14}},
                        {{15,16,17,18,5},{20,25,7}},
                        {{1,8,9},{21,13,17,33,54}}
    };

    int i,j,k;
    
    for(i=0;i<4;i++){
        for(j=0;j<2;j++){
            for(k=0;k<5;k++){
                printf("%4d",matrix[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }


    return 0;
}