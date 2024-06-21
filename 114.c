#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct students{
    char myLetter;
    char* name;
    char* lastname;
    int no;
    float score;
    char parentName[40];
};


int main() {
    struct students x={'A',"Kagan","Turan",1923,95.6,"Ahmet"};//üstteki sıralamaya dikkat
    struct students x2;

    x.lastname="Mahmudiye";

    x2=x;

    x2.name="Degisti";

    strcpy(x.parentName,"Saziye");


    printf("Letter:%c\n",x.myLetter);
    printf("Name:%s\n",x.name);
    printf("Last Name:%s\n",x.lastname);
    printf("No:%d\n",x.no);
    printf("Parent Name:%s\n",x.parentName);
    printf("Score:%.2f\n",x.score);
    printf("---------------\n");

    printf("Letter:%c\n",x2.myLetter);
    printf("Name:%s\n",x2.name);
    printf("Last Name:%s\n",x2.lastname);
    printf("No:%d\n",x2.no);
    printf("Parent Name:%s\n",x2.parentName);
    printf("Score:%.2f\n\n\n",x2.score);

    return 0;
}