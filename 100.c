#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    char myLetter[5]={'x','y','z','a','f'};
    int myNumbers[5]={7,1,19,23,5};
    int i;

    printf("myLetter Array\n");
    printf("--------------\n");
    for(i=0;i<5;i++){
        printf("myLetter[%d]=%c\n",i,*(myLetter+i));//myLetter'i parantez içine almayı unutma

    }
    printf("\n");

    printf("myNumbers Array\n");
    printf("--------------\n");
    for(i=0;i<5;i++){
        printf("myNumbers[%d]=%d\n",i,*(myNumbers+i));//myLetter'i parantez içine almayı unutma
        
    }

    printf("myLetter Array Address\n");
    printf("--------------\n");
    for(i=0;i<5;i++){
        printf("myLetter[%d] address =%x\n",i,(myLetter+i));//myLetter'i parantez içine almayı unutma
        
    }

    printf("myNumbers Array Address\n");
    printf("--------------\n");
    for(i=0;i<5;i++){
        printf("myNumbers[%d] address =%x\n",i,(myNumbers+i));//myLetter'i parantez içine almayı unutma
        
    }


    return 0;
}