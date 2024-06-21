#include <stdio.h>
#include <stdlib.h>

int main () {//döngü satır sayım kadar devam edecek
    int i,j,number;

    printf("Enter a number: ");
    scanf("%d",&number);
    
    for(i=1;i<=number;i++){

        for (j=number; j>=i; j--){
            printf("%d ",i);
        }
    printf("\n");
        
    }
    
    



    return 0;
}