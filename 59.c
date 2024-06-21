#include <stdio.h>
#include <stdlib.h>

void Print();

int superVariable =3;

/*
int main () {
    int superVariable=7;
    Print();
    



    return 0;
}

void Print(){
    printf("%d\n",superVariable);//ana fonkisyonda tanımladığın değer local(yerel değer olur) bu fonksiyon erişemez
}
*/

int main() {

    superVariable = 7;
    Print();
    
    return 0;
}

void Print(){
    printf("%d\n",superVariable);//yukarıda global değer atadığın için burada kullanabilirsin
}