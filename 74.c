#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {
    int numbers[7],i;

    printf("Enter array numbers:");
    for(i=0;i<7;i++){//         <9 a dikkat et
        scanf("%d",&numbers[i]);
    }
    
    printf("\n Original Order:");
    for(i=0;i<7;i++){
        printf("%d ",numbers[i]);// & İŞARETİ KOYMA DİKKAT ET
    }
    
    printf("\n Reverse Order:");
    for(i=6;i>=0;i--){
        printf("%d ",numbers[i]);
    }


    return 0;
}