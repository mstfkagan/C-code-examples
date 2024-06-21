#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct books{
    char* bookname;//POİNTER DİKKAT ET
    char* writer;//POİNTER DİKKAT ET
    int page;
    int year;
};

int main() {

    int i;
    struct books x[3];

    x[0].bookname="Harry Potter";
    x[0].writer="J.K Rowling";
    x[0].page=238;
    x[0].year=1999;

    x[1].bookname="Bu Ulke";
    x[1].writer="Cemil Meric";
    x[1].page=245;
    x[1].year= 1960;

    x[2].bookname="Deli Kurt";
    x[2].writer="Nihal Atsiz";
    x[2].page=246;
    x[2].year=1958;

    for(i=0;i<3;i++){
        printf("%d. Kitap\n",i+1);
        printf("Book Name:%s\n",x[i].bookname);
        printf("Writer:%s\n",x[i].writer);
        printf("Page:%d\n",x[i].page);
        printf("Year:%d\n\n",x[i].year);
    }

    return 0;
} 