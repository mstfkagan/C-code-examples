#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int i=7;
    FILE* fptr;
    char data[60];

    int numbers[7];

    fptr=fopen("C:\\Users\\musta\\Desktop\\data\\data2.txt","r");

    if(fptr ==NULL){
        printf("File open Unsuccessful!\n");
    }
    else{
        fputs("I do love C Programming\n",fptr);
        fputs("C is an interesting language\n",fptr);
        fprintf(fptr,"selamlar %d\n",i);//variableleri de içeriye yazabilirsin daha kullanışlı
        printf("Enter a sentence: ");
        gets(data);

        fprintf(fptr,"%s %d\n",data,i); 

        printf("Enter 10 numbers:");
   
        fread(numbers,sizeof(int),7,fptr);//fwrite ile yazılan okunamaz
    //array,boyutu(türü),kaç adet gireceksin,ve ptr'n
        for(i=0;i<7;i++){
            printf("%d ",numbers[i]);
        }
        printf("\n");

        printf("Data was written to File successfully!\n");
    }



    fclose(fptr);


    return 0;
}