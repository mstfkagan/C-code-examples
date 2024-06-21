#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {
    int row,column,i,j;

    printf("Enter number of rows: ");
    scanf("%d",&row);

    printf("Enter number of columns: ");
    scanf("%d",&column);

    int matrix[row][column]; //diziyi tanımlayacak isen,
    //başına türünü yazmak zorundasın üstte int matrix yazıp olmaz

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("\nmatrix[%d][%d]= ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("your array\n");

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}