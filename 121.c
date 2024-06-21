#include <stdio.h>
#include <stdlib.h>
#include <math.h>

union unionS{//EN BÜYÜK BELLEK KAPLAYANI AYIRIR 40 BYTE
    char name[40];
    int age;
    float weight;
}uStudent;

typedef struct{//40 + 4 + 4=48 BYTE
    char name[40];
    int age;
    float weight
}Student;


union unionSS{
    char myLetter;
    int x;
}USstudent;
int main() {    

    printf("Size of union:%d\n",sizeof(uStudent));
    printf("Size of structture:%d\n",sizeof(Student));
//UNİON, STRUCTURE A GÖRE BELLEKTE DAHA AZ YER KAPLAR    

//AYNI ANDA SADECE BİR UNİON ÜYESİNE ERİŞİLEBİLİR

    printf("ENTER NAME:");
    scanf("%s",&uStudent.name);

    printf("Enter Age:");
    scanf("%d",&uStudent.age);//en son age üyesini aldık gerisini çöp varsayar

    printf("Enter weight:");
    scanf("%f",&uStudent.weight);//en son alınan üye kilo o yüzden kiloyu alır gerisini siler

    printf("Your Name:%s\n",uStudent.name);
    printf("Your Age:%d\n",uStudent.age);
    printf("Your weight:%.2f\n",uStudent.weight);

    USstudent.x=98;//ASCII=b

    printf("%d\n",USstudent.x);
    printf("%c\n",USstudent.myLetter);

    return 0;
}