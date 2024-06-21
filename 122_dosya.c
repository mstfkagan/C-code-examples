#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    FILE *fptr;

    fptr=fopen("C:\\Users\\musta\\Desktop\\data\\data.txt","w");//file open
    //eğik çizgileri çift tırnak içinde kullanmak için iki defa koy yoksa escape olarak anlar

//ilk kısım neyi açacaksın eğer aynı isimli dsoya varsa siler yeni oluşturur
//eğer yol belirtmezsen olduğun yere oluşturur
//ikinci kısım ne amaçla açtığını belirtme
    fclose(fptr);//dosyayı kapatma
    //başarılı olursa 0 döndürür

    //w olarak açarsan dosyada ne varsa siler temizler öyle açar
    
    return 0;
}