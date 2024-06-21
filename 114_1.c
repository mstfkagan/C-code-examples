#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct car{
    char brand[60];
    char model[60];
    int year;
};

int main() {

    struct car C1={"Mercedes","CLS",2012};
    struct car C2={"Volvo","XC90",2013};
    struct car C3={"BmW","530i",2014};
    struct car C4={"Audi","RS6",2015};

    printf("%s %s %d\n",C1.brand,C1.model,C1.year);
    printf("%s %s %d\n",C2.brand,C2.model,C2.year);
    printf("%s %s %d\n",C3.brand,C3.model,C3.year);
    printf("%s %s %d\n",C4.brand,C4.model,C4.year);

    

    return 0;
}