#include <stdio.h>
#include <stdlib.h>

int main () {

    int number,i,j,control;

    printf("Enter a number:");
    scanf("%d",&number);

    for(i=2;i<=number;i++){
        control = 1;
        for(j=2;j<=i/2;j++){//eğer buradaki for döngüsü çalışmazsa durur ve aşağıdaki if'e geçer
            if(i%j==0){//if çalışmazsa bu for'un içine geri döner j'yi 1 arttırır
                control = 0;
                break;
            }

        }
        if(control!=0){
            printf("%d ",i);
        }
    }


    return 0;
}