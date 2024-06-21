#include <stdio.h>
#include <stdlib.h>

int main () {//döngü satır sayım kadar devam edecek
    int i,j,number;

    printf("Enter a number: ");
    scanf("%d",&number);

    for (i = 1; i<=number; i++)//satır
    {

        for (j = 1; j<=i; j++)//sütun j<=i      !!!!!!!!
        {
            printf("%d ",i);//i yazıyor
        }
        printf("\n");
        
    }
    



    return 0;
}