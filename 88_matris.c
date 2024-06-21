#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int i,j,k,sum=0,row,column,row2,column2;
int result[22][22];

int main () {

    printf("Enter number row and column= ");
    scanf("%d %d",&row,&column);
    int matrix[row][column];

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("matrix[%d][%d]= ",i,j);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }

    printf("Enter number row2 and column2= ");
    scanf("%d %d",&row2,&column2);

    int matrixA[row2][column2];
    if(column != row2){
        printf("Bu matrisler carpilamaz!");
    }

    else{
        for(i=0;i<row2;i++){
            for(j=0;j<column2;j++){
                printf("matrixA[%d][%d]= ",i,j);
                scanf("%d",&matrixA[i][j]);
            }
            printf("\n");
        }
    }
//----------------------------------------------------------
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            for(k=0;k<row2;k++){
                sum+=matrix[i][k] * matrixA[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    } 
//----------------------------------------------------------   

    if(column != row2){
    }
    else{
        printf("\n--------Carpim sonucu--------\n");
        for(i=0;i<row;i++){
            for(j=0;j<column2;j++){
                printf("%4d ",result[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
    
