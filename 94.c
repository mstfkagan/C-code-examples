#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

   float x=7;

   float* ptrDeneme=&x;//BURADAKİ INT POINTER DEĞİL, ADRESİNİ ALDIĞIN X DEĞERİNİN TÜRÜ

   char name='f';

   char* ptrName=&name;

   printf("x variable: %f\n",x);//x değerim
   printf("X variable address: %x\n",&x);//x değerimin bellekteki yeri direkt
   printf("x variable address: %x\n",ptrDeneme);//x değerimin bellekteki yeri ptr sayesinde
   printf("ptr variable address: %x\n",&ptrDeneme);//ptr değerinin bellekteki yeri
   printf("x variable by ptr: %f\n\n",*ptrDeneme);//x değerini ptr değerinden çekme

   printf("char variable: %c\n",name);
   printf("char variable address: %x\n",&name);
   printf("char variable address: %x\n",ptrName);
   printf("ptrName variable address: %x\n",&ptrName);
   printf("char variable by ptrName: %c\n",*ptrName);


    return 0;
}