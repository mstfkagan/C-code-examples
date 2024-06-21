#include <stdio.h>
#include <stdlib.h>

float exponentiation(float x, int y);

int main () {

    float base = 0, result =0;//taban
    int exponent;//üs

    printf("Enter base and exponent values:");
    scanf("%f%d",&base,&exponent);

    result=exponentiation(base,exponent);
    printf("Result is: %.3f\n",result);

    printf("Result: %f",exponentiation(2,7));

    return 0;
}


float exponentiation(float x, int y){
    float result =1;
    int i;
    if(y<0){ //üs negatif ise
        for(i=0;i<-y;i++){// -y olma sebebi 2 üzeri -2 olduğunda (1/2) üzeri 2 olarak düzeliyor ondan dolayı
            result*=1/x;
        }
    }
    else{
        for(i=0;i<y;i++){
            result*=x;
        }
    }
    return result;


}