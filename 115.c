#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct myDate{
    int day;
    int month;
    int year;
};

int main(){

    struct myDate first;
    struct myDate second;

    printf("Enter your date of birth: ");
    scanf("%d%d%d",&first.day,&first.month,&first.year);

    printf("Enter today's date: ");
    scanf("%d%d%d",&second.day,&second.month,&second.year);

    if(first.day>second.day){//doğum tarihimdeki gün bugünden büyükse
        second.day+=30;
        second.month-=1;
    }
    if(first.month>second.month){//doğum tarihimdeki ay bu aydan büyükse
        second.month+=12;
        second.year-=1;
    }

    printf("%d %d %d\n",first.day,first.month,first.year);
    printf("\nYou have lived ");
    printf("%d day, %d month, %d year",second.day-first.day,second.month-first.month,second.year-first.year);



    return 0;
}