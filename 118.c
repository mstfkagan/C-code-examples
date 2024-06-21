#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct candidateInfo{
    char* name;
    char* lastname;
    int age;
    int note;
    float average;
};
struct interview{
    char* interviewer;
    char* interviewDate;
    struct candidateInfo candidate;/////////////////////////////
    int interviewNote;
};
int main() {
    struct interview y;

    y.interviewer="Mahmudiye Gurses";
    y.interviewDate="14.11.2004";
    y.interviewNote=89;
    y.candidate.name="Mustafa";
    y.candidate.lastname="Turan";
    y.candidate.age=19;
    y.candidate.note=45;
    y.candidate.average=2.69;

    printf("Mulakati Yapan:%s\n",y.interviewer);
    printf("Mulakat Tarihi:%s\n",y.interviewDate);
    printf("Mulakat Notu:%d\n\n",y.interviewNote);

    printf("Adayin Adi:%s\n",y.candidate.name);
    printf("Adayin Soyadi:%s\n",y.candidate.lastname);
    printf("Adayin Yasi:%d\n",y.candidate.age);
    printf("Adayin Sinav Notu:%d\n",y.candidate.note);
    printf("Adayin Lisans Ortalamasi:%.2f\n\n",y.candidate.average);

    return 0;
}