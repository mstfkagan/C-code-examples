#include <stdio.h>
#include <stdlib.h>


int main () {
    int i;
    float examGrade, sumGrade,average;
    i=1;
    examGrade = 0.0;
    sumGrade = 0.0;
    average = 0.0;

    do{// aşağıdaki while koşuluna bakmadan önce bir kere çalıştır
        printf("%dth exam grade:",i);
        scanf("%f",&examGrade);
        if(examGrade == 0){
            break;//eğer sıfıra eşitse döngüden çık
        }
        if(examGrade < 0){
            printf("Please enter positive number!\n");
            continue;//o döngüdeki işlemleri yok say ve başa dön anlamı
        }else{
            sumGrade += examGrade;
        }
        i++;
    }while(examGrade !=0);//sıfıra eşit olmadığı sürece döngüyü çalıştır
    
    average = sumGrade/(i-1);
    
    if((i-1)==0){
        average =0.0;
    }

    printf("\nyou entered %d exam grades\n",(i-1));//i-1 olma sebebi -i çıkarken 0(herhangi bir sayı olabilirdi) notu giriyor onu elemek için
    printf("average:%.2f\n",average);

}