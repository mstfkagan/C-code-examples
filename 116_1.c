#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct info{
    char* name;
    int age;
    int year;
};

void showMe(struct info);

int main() {
    struct info x;

    x.name="Fadime";
    x.age=24;
    x.year=2004;

    showMe(x);

    return 0 ;
}
void showMe(struct info ptr){
    printf("Name:%s\n",ptr.name);
    printf("Age:%d\n",ptr.age);
    printf("Year:%d\n",ptr.year);
}