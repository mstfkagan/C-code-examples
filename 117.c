#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct books{
    char* bookname;
    char* writer;
    int page;
    int year;
};

void printMe(struct books*);//POİNTER

int main() {

    struct books x;
    struct books* y;//pointer variable

    y=&x;//x'in adresini gönderdim

    (*y).bookname="Bu Ulke";
    (*y).writer="Cemil Meric";
    (*y).page=256;
    x.year=1960;//sadece denedim

    
    printMe(y);


    return 0;
}

void printMe(struct books* ptr){
    
    printf("Book Name:%s\n",(*ptr).bookname);
    printf("Writer:%s\n",(*ptr).writer);
    printf("Page:%d\n",(*ptr).page);
    printf("Year:%d\n",(*ptr).year);
}