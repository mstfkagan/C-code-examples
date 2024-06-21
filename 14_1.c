#include <stdio.h>
#include <stdlib.h>

int main() {
    int score;
    printf("Skorunuz:");
    scanf("%d",&score);

    (score>=60)? printf("you passed the exam\n") : printf("You failed the exam\n");
    //IF GÖREVİNİ "?" ------ ELSE GÖREVİNİ ":" ALIYOR TEK SATIR İÇİN GEÇERLİ


    return 0;
}