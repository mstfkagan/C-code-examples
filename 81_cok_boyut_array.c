#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int matrix[2][3]={
                    {2,7,19},
                    {3,8,12}
                    };

    printf("%d\n",matrix[1][2]);//cebir dersi ile aynı mantık fakat 0'dan başlar dikkat et

    int i,j;

    for(i=0;i<2;i++){//  i satırı    j sütunu temsil eder
        for(j=0;j<3;j++){
            printf("%5d",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}