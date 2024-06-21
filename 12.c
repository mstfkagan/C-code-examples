#include <stdio.h>
#include <stdlib.h>

//ELEKTRİK FATURASI

int main() {

    float odenecekFatura, eskiBirimFiyat, yeniBirimFiyat, enflasyon;
    float eskiAboneUcreti, yeniAboneUcreti;
    int yeniOkuma,eskiOkuma,toplamHarcananElektrik;

    printf("Enflasyon oranini giriniz: ");
    scanf("%f",&enflasyon);

    printf("Onceki aya ait birim fiyat miktari: ");
    scanf("%f",&eskiBirimFiyat);

    printf("Onceki aya ait abonelik ucreti: ");
    scanf("%f",&eskiAboneUcreti);

    printf("Bir onceki aya ait okuma degeri:");
    scanf("%d",&eskiOkuma);

    printf("Bu aya ait okuma degerini giriniz: ");
    scanf("%d", &yeniOkuma);

    toplamHarcananElektrik = yeniOkuma - eskiOkuma;

    yeniBirimFiyat = eskiBirimFiyat*(1 + enflasyon/100);

    yeniAboneUcreti = eskiAboneUcreti * (1 + enflasyon/100);

    odenecekFatura = toplamHarcananElektrik*yeniBirimFiyat+yeniAboneUcreti;

    printf("\nOdeyeceginiz fatura tutari: %f\n",odenecekFatura);

    return 0;
}