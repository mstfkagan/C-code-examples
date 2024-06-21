#include <stdio.h>
#include <stdlib.h>

// KAPALI KAPTAKİ GAZIN BASINCI

int main() {
    const float R=0.82;
    int temperature, volume;
    float pressure, mol;
    
    printf("Mol sayisi: ");
    scanf("%f", &mol);

    printf("Sicaklik: ");
    scanf("%d",&temperature);

    printf("Hacim(L): ");
    scanf("%d",&volume);
    pressure = (mol * R * temperature) / volume;

    printf("%dL Hacimli kaptaki gazin basinci = %f atm",volume, pressure);
    
    return 0;

    

}