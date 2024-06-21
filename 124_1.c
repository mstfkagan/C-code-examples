#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

    FILE* fptr;

    fptr=fopen("C:\\Users\\musta\\Desktop\\data\\data4.txt","r");

    int numbers[7],i;

    if(fptr==NULL){
        printf("File open Unsuccessful!\n");
    }
    else{
        printf("Enter 7 numbers:");

        fread(numbers,sizeof(int),7,fptr);
        for(i=0;i<6;i++){
            printf("%d ",numbers[i]);
        }
        printf("\n");

        printf("Data was written to file successfully!\n");

    }
    fclose(fptr);

    return 0;
}