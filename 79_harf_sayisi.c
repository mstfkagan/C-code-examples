#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void countCharactes(char x[],int y[]);

int main () {

    char x[100];

    int y[26],i=0;//İngiliz alfabesi 26 harf olduğu için
    //y[0]=a ve A--------y[1]= b ve B-----y[25]=z ve Z

    printf("Enter a sentence:");
    do
    {
        scanf("%c",&x[i]);
        i++;
    } while (x[i-1]!='.');
    
    countCharactes(x,y);

    for(i=0;i<26;i++){//i=1 olsaydı i<=26 derdik
        printf("%c/%c: %d\n",'A'+i,'a'+i,y[i]);
    }

    return 0;
}

void countCharactes(char x[],int y[]){
    int i,j;
    for(i=0;i<26;i++){
        y[i]=0;//KARIŞIKLIK OLMASIN DİYE TÜM DEĞERLERİ SIFIRA EŞİTLEDİK
    }
    for(i=0;x[i]!='.';i++){
        if(x[i]>='A' && x[i]<='Z'){
            y[(int)x[i]-(int)'A']++;
        }
        if(x[i]>='a' && x[i]<='z'){
            y[(int)x[i] - (int)'a']++;
        }
    }
}