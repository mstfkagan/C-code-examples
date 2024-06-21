#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>

int main () {
    int number;
    printf("Please enter a number (0-255): ");
    scanf("%d",&number);

    printf("\nThe character you entered : %c\n",number);
    
    if(isalnum(number)){//girilen ASCII değeri A-Z,,,a-z,,,0-9 arasında ise correct
        printf("isalnum correct\n");

    }
    else printf("isalnum Wrong\n");
    
    printf("-----------------------------\n");

    if(isalpha(number)){//girilen ASCII değeri A-Z,,,a-z aralığında ise correct çıktısı
        printf("isalpha correct\n");
    }
    else printf("isalpha wrong\n");

    printf("-----------------------------\n");

    if(isdigit(number)){//girilen ASCII değeri 0-9 aralığında ise correct
        printf("isdigit correct\n");
    }
    else printf("isdigit wrong\n");

    printf("-----------------------------\n");

    if(islower(number)){//SADECE KÜÇÜK HARF OLUP OLMAMAYA BAKAR
        printf("islower correct\n");
    }
    else printf("islower wrong\n");

    printf("-----------------------------\n");

    if(isupper(number)){//SADECE BÜYÜK HARF OLUP OLMAMAYA BAKAR
        printf("isupper correct\n");
    }
    else printf("isupper weong\n");

    printf("-----------------------------\n");

    if(isspace(number)){//sadece boşluk olursa doğru kabul eder 32
        printf("isspace correct\n");
    }
    else printf("isspace wrong\n");

    printf("-----------------------------\n");

    

    return 0;
}