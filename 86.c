#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void readSales();
void writeSales();
void temsilciSales();
int sales[3][2][2];
int i,j,k,l;

int main() {


    readSales();
    writeSales();


    return 0;
}

void readSales(){

    for(i=0;i<3;i++){
        printf("%d. satis temsilcisi:\n",i+1);//i=0 olduğu için i+1 dedik
        for(j=0;j<2;j++){
            if(j==0) printf("\tMatematik kitabi:\n");
            else if (j==1) printf("\tYazilim kitabi:\n");
            for(k=0;k<2;k++){
                if(k==0) printf("\t\tOkula ");
                else if(k==1) printf("\t\tKirtasiyeye ");
                printf("kac adet satti:");
                scanf("%d",&sales[i][j][k]);
            }
        }
        
    }
    


}
void writeSales(){
    i=0,j=0,k=0;
    int toplamOkul=0,toplamKirtasiye=0,toplamMatematik=0,toplamYazilim=0;
    int firstToplam=0,secondToplam=0,thirdToplam=0,toplamSatis=0;

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            toplamOkul+=sales[i][j][0];
            toplamKirtasiye+=sales[i][j][1];

        }
        for(k=0;k<2;k++){
            toplamMatematik+=sales[i][0][k];
            toplamYazilim+=sales[i][1][k];
            
        }
        

    }
    firstToplam=sales[0][0][0] + sales[0][0][1] + sales[0][1][0] + sales[0][1][1];
    secondToplam=sales[1][0][0] + sales[1][0][1] + sales[1][1][0] + sales[1][1][1];
    thirdToplam=sales[2][0][0] + sales[2][0][1] + sales[2][1][0] + sales[2][1][1];
    

    printf("\n1. satici toplam %d kitap satti.\n",firstToplam);
    printf("\n2. satici toplam %d kitap satti.\n",secondToplam);
    printf("\n3. satici toplam %d kitap satti.\n",thirdToplam);
    printf("\nOkula toplam %d kitap satildi.\n",toplamOkul);
    printf("\nKirtasiyeye toplam %d kitap satildi.\n",toplamKirtasiye);
    printf("\nToplam %d adet yazilim kitabi satildi.\n",toplamYazilim);
    printf("\nToplam %d adet matematik kitabi satildi.\n",toplamMatematik);
}

void temsilciSales() {
    int i=0,j=0,k=0;




}