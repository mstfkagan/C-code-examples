#include <stdio.h>
#include <stdlib.h>



int main() {
    int i,j,k,number;

    printf("Enter a number: ");
    scanf("%d",&number);



    for (i = 1; i<=number ; i++)
    {
        for (j=1;j<=number ;j++)
        {
            if(i==1 || i==number || j==1 || j==number){//number kadar diyez koyma sebebi i'değerinini hala 1 olması
                printf("# ");
                }
            else{
                printf("  ");//üstte diyezden sonra boşluk oldığundan aralarda boşşuk var burada 2 boşluk koydum
            }
            
            
        }
        printf("\n");
    }
    


    return 0;
}