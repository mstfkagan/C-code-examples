#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {
    char name='f';
    char* ptr=&name;

    double y=3.1415;
    double* yptr=&y;

    int x=7;
    int* xptr=&x;

    printf("Pointer: %x\n",ptr);

    //ptr++; ADRESİ DEĞİŞTİRİR

    printf("Pointer: %x\n",ptr);

    //ptr+=3; ADRESİ DEĞİŞTİRİR AMA DEĞİŞEN ADRES DOLUYSA SIKINTI OLABİLİR

    printf("Pointer: %x\n",ptr);

    printf("First Adressess:\n");

    printf("name's first adress:%x\tvalue:%c\n\n",ptr,*ptr);
    printf("y's first adress: %x\tvalue:%lf\n\n",yptr,*yptr);
    printf("X's first adress: %x\tvalue:%d\n\n",xptr,*xptr);

    printf("Pointer address:%x\n",&ptr);
    printf("X Pointer address:%x\n",&xptr);
    printf("Y Pointer address:%x\n",&yptr);
    //POİNTER ADRESİ DEĞİŞMEZ
    
    ptr++;
    xptr+=3;
    yptr-=4;

    printf("Next Adresses:\n");
    printf("name's next adress:%x\tvalue:%c\n\n",ptr,*ptr);//value değeri boş kalacak 
    //çünkü adresi değiştirdin ve o adres boş

    printf("y's next adress: %x\tvalue:%lf\n\n",yptr,*yptr);//adres değişti ve o adres boş

    printf("X's next adress: %x\tvalue:%d\n\n",xptr,*xptr);//bu adres doluymuş 
    //ne varsa onu gösterir

    printf("Pointer address:%x\n",&ptr);
    printf("X Pointer address:%x\n",&xptr);
    printf("Y Pointer address:%x\n",&yptr);
    //POİNTER ADRESİ DEĞİŞMEZ

    return 0;
}