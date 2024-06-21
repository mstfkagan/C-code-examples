#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    double myValue,myArray[10];
    int choice,index;

    do
    {
        printf("Make a choice (-1 to exit)\n");
        printf("\t1. Write to array\n");
        printf("\t2. Read from array\n");
        scanf("%d",&choice);

        if(choice == -1) break;
        if(choice !=1 && choice !=2){
            printf("Dalga gecme\n");
            continue;
        }

        printf("Enter array index: ");
        scanf("%d",&index);
    
        if(index<0 || index>9){
            printf("index should be in the range of 0-9\n");
            continue;
        }

        switch(choice){
            case 1:
            printf("\nEnter the value: ");
            scanf("%lf",&myValue);
            myArray[index] = myValue;
            printf("The write operation is successful\n\n");
            break;

            case 2:printf("----------------------\n");
            printf("\nmyArray[%d]:%.3f\n\n",index,myArray[index]);
            printf("\n----------------------\n");

        }
    
    } while (choice!=-1);//-1 girene kadar devam ettir
    return 0;
}