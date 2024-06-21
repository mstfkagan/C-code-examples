#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {

    double average = 0, numbers[3];//bir dizi oluşturdum(numbers)

    printf("Enter three numbers: ");
    scanf("%lf%lf%lf",&numbers[0],&numbers[1],&numbers[2]);

    average = (numbers[0]+numbers[1]+numbers[2])/3;

    printf("\nAverage: %.2lf\n",average);



    return 0;
}