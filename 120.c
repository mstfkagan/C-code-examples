#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef int lli;//tür belirleme
typedef unsigned long long ull;
typedef char name[30];

typedef struct {
    char* name;
    int age;
    float weight
}Student;

int main () {

    name n1="Mahmudiye";

    lli x;
    lli y;
    x=7;
    y=19;

    printf("%d %d\n",x,y);

     Student s1={//yukarıdaki typedef ile struct yazmana gerek kalmıyor
        "Mahmudiye",
        24,
        67
    };
    printf("Isim:%s\n",s1.name);
    printf("Yas:%d\n",s1.age);
    printf("Kilo:%.2f\n",s1.weight);



    return 0;
}