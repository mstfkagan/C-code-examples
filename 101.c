#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//global değerler bellkete yer tutar
void myArray(int*,int);
int main() {

    int numbers[6]={1,7,19,23,5,11};
    int i,size;

    size=sizeof(numbers)/sizeof(numbers[0]);
    //tüm boyutu bir elemanın boyutuna bölerek eleman sayısı öğrenme


    printf("Previous state:\n");
    printf("---------------\n");

    for(i=0;i<size;i++){
        printf("numbers[%d]:%d\n",i,*(numbers+i));
    }
    myArray(numbers,size);

    printf("Next statatus:\n");
    printf("---------------\n");

    for(i=0;i<size;i++){
        printf("numbers[%d]:%d\n",i,*(numbers+i));
    }
    return 0;
}

void myArray(int* numbers,int size){
    int j=0;
    for(j=0;j<size;j++){
        *(numbers+j)*=3;
    }
}