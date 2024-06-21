#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int i,j,sum=0,row,column;
    
    printf("Enter number of row and column=");
    scanf("%d %d",&row,&column);

    int matrix[row][column];

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("\nmatrix[%d][%d]= ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d   ",matrix[i][j]);
        }
        printf("\n\n");
    }

    for(i=0;i<row;i++){
        printf("%d. satir toplami = ",i+1);
        for(j=0;j<column;j++){
            sum+=matrix[i][j];
        }
        printf("%d\n",sum);//YUKARIDA SUM DEĞERİNİ SIFIRA EŞİTLE
        sum=0;
    }
    printf("\n");

    for(i=0;i<row;i++){
        printf("%d. sutun toplami = ",i+1);
        for(j=0;j<column;j++){
            sum+=matrix[j][i];
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}