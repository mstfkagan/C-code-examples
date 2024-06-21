#include <stdio.h>
#include <stdlib.h>


int main() {

    int number,first=1,second=1,third=1,i;

    printf("Please enter a number: ");
    scanf("%d",&number);
    printf("1 1 ");

    for (i=1; i <=number; i++){
        if(number==0) break;

        first=second;
        second=third;
        third = first + second;
        if(i<=number-2){
            printf("%d ",third);}
    }
    printf("\n%d. eleman: %d:\n",i-1,first);//i-1 olma nedeni döngü bitmeden önce i değeri yine artıyor
    
    


    return 0;
}