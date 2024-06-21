#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    FILE* fptr;
    fptr=fopen("C:\\Users\\musta\\Desktop\\data\\data1.txt","w");

    char name;
    if(fptr == NULL){
        printf("File open UnSuccessful!");
    }
    else{
        for(name='a';name<='z';name++){
            putc(name,fptr);
            putc('\n',fptr);
        }
    }

    fclose(fptr);//KAPATMAYI UNUTMA

    return 0;
}