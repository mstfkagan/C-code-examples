#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

    x.myLetter;
    x.name;
    x.lastname;
    x.no;
    x.score;
    //strcpy(x.parentName,"Ahmet");///////////////////////////////////////////////////

    x2.myLetter='B';
    x2.name="Turan";
    x2.lastname="Mustafa";
    x2.no=1881;
    x2.score=92.6;

    printf("Letter:%c\n",x.myLetter);
    printf("Name:%s\n",x.name);
    printf("Last Name:%s\n",x.lastname);
    printf("No:%d\n",x.no);
    printf("Parent Name:%s\n",x.parentName);
    printf("Score:%.2f\n\n\n",x.score);

    printf("Letter:%c\n",x2.myLetter);
    printf("Name:%s\n",x2.name);
    printf("Last Name:%s\n",x2.lastname);
    printf("No:%d\n",x2.no);
    printf("Score:%.2f\n",x2.score);


    return 0;
}