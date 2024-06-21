#include <stdio.h>
#include <stdlib.h>

int main() {

    float number1, number2;
    char myOperator;

    printf("Choose an operator(+,-,*,/): ");
    scanf("%c",&myOperator);

    if(myOperator=='+' || myOperator=='-' || myOperator=='*' || myOperator=='/'){}
    else{
        printf("Yanlis operator");
        return 0;
    }

    printf("Enter two numbers:");
    scanf("%f%f",&number1,&number2);

    printf("\noperator:%c\nnumber1:%f\nnumber2:%f\n",myOperator,number1,number2);

    switch(myOperator){
        case '/':printf("%.2f",number1/number2); break;
        case '*':printf("%.2f",number1*number2); break;
        case '+':printf("%.2f",number1 + number2); break;
        case '-':printf("%.2f",number1-number2); break;
        default:printf("You entered wrong operator\n\n");//yukarıda if else koydum o yüzden çalışmaz

    }

    return 0;
}
