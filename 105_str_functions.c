#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() {    

    char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("Length is %d\n",strlen(alphabet));

    printf("Size of array %d\n",sizeof(alphabet));//bellek boyutunu byte cinsinden dönüştürür
    //sondaki \0 ı da alır o yüzden 1 fazla

    char str1[50]={"Hello "};
    char str2[]={"C Language"};

    strcat(str1,str2);//str2 ' yi str1'e ekledi

    printf("%s\n",str1);

    char str3[30]="Hello C Language";
    char str4[30];

    strcpy(str4,str3);//önce kopyalanacak olan(boş olanı) yazıyoruz
    printf("%s\n",str4);

    //strcmp(str1,str2);//string compare

    if(strcmp(str3,str4)==0){
        printf("Bu stringler esit.");
    }
    else{
        printf("Bu stringler esit degil.");
    }

    return 0;
}