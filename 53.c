#include <stdio.h>
#include <stdlib.h>


void myMessage() { //return ile bişey geri döndürülmeyecekse int kullanılmaz
    printf("SA AS\n");//fonksiyonu çağırmadığın sürece çalışmaz

}
void nameList(char name[], int age){
    printf("%s. Sen %d yasindasin\n",name,age);
    
}
int main() {
    myMessage();
    nameList("Mustafa",12);//veriyi fonksiyonun içine atma
    nameList("Kagan",14);
    nameList("Turan",44);//burada değerleri girerken sıraya dikkat et yukarıda önce char sonra int var burda da dikkat et


    return 0;
}