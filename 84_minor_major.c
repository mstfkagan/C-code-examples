#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {
    int i,j,size;

    printf("Enter the size of the square matrix(x<10): ");
    scanf("%d",&size);

    int matrix[size][size];//TÜM DEĞERLER SIFIRA EŞİTLENDİ
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            matrix[i][j]=0;
        }
    }

    for(i=0;i<size;i++){//1 OLACAK DEĞERLERİN YERİ BELİRLENDİ
        matrix[i][i]=1;
        matrix[i][size-1-i]=1;
    }

    for(i=0;i<size;i++){//MATRİSİN ÇIKTISI
        for(j=0;j<size;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n\n");
    }


    return 0;
}