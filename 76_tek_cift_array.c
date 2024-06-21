#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



int main () {
    int i,unit,j;

    int numbers[100];
    srand(time(NULL));

    printf("Enter a positive number: ");
    scanf("%d",&unit);

    /*printf("\nEnter array numbers:");
    for(i=0;i<unit;i++){
        scanf("%d",&numbers[i]);
    }*/

    //unit=rand()%100+1;
    //numbers[unit];

    printf("\nEnter array numbers:\n");
    for(i=0;i<unit;i++){
        j=rand()%100+1;
        numbers[i]=j;
    }

    printf("Odd numbers: ");
    for(i=0;i<unit;i++){
        if(numbers[i]%2==1){
            printf("%d ",numbers[i]);
        }
    }

    printf("\nEven numbers: \n");
    for(i=0;i<unit;i++){
        if(numbers[i]%2 == 0) printf("%d ",numbers[i]);
        
    }
    printf("\nnumbers: ");
    for(i=0;i<unit;i++){
        printf(" %d ",numbers[i]);;

    }
    

    return 0;   
}
