#include <stdio.h>
#include <stdlib.h>

// x==7 ? printf("19"):printf("-20"); x değerim 7'ye eşitse 19 yaz değisle -20 yaz if else kısa
int main () {
    int x,y,z;

    x=7;
    y=7;

    switch(x){
        case 7: z=19;
            break;
        default:switch (y)
        {
        case 12: z=10;// eğer y değerim 12 ise z'ye 10 değerini ver
            break;
        default: z=-90;//üstteki çalışmazsa bunu çalıştır
            break;
        }
    }
    printf("%d\n",z);

    return 0;
}