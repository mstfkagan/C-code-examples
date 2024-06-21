#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    FILE* fptr;
    fptr=fopen("C:\\Users\\musta\\Desktop\\data\\data.txt","w");
//w silip yazar ----- a üstüne ekleyerek yazar silmeden

    char name='F';

    if(fptr == NULL){//pointer'ımın içeriği boşsa
        printf("File open Unsuccessful!\n");
    }
    else{
        putc('s',fptr);
        putc('g',fptr);
        putc('j',fptr);
        putc('\n',fptr);
        putc('I',fptr);
        fputc('d',fptr);//iki fonksiyon da yazdırmak için
        putc('\n',fptr);
        putc(name,fptr);//direkt değer ekler
        printf("Data is written to file\n");
    }

    fclose(fptr);

    return 0;
}