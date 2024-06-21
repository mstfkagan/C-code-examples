#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main () {

    int randomNumber,guessNumber,score=100,guessCount=0;//tahmin adedi
    srand(time(NULL));
    randomNumber=(rand()%100)+1;//1 ile 100 arasında

    printf("I catched a number between 1 - 100\n");
    printf("Guess it!\n");

    while(guessNumber!=-1){
        printf("Enter a number: ");
        scanf("%d",&guessNumber);

        if(guessCount==-1) break;
        
        if(guessNumber<1 || guessNumber>100){
            printf("Please enter a number between 1 -100!!\n");
            continue;//döngüyü tekrar başlat(while'dan başlar)
        }
        guessCount++;

        if(guessNumber == randomNumber){
            printf("Congratulations! You knew on the %dth guess",guessCount);
            break;
        }
        else{
            if(guessNumber > randomNumber){
                printf("You should enter a smaller number!\n");
                score-=10;
            }
            if(guessNumber< randomNumber){
                printf("You should enter a bigger number!\n");
                score-=10;
            }
        }
    }
    printf("\nYour score is %d\n",score <0 ? 0:score);//kısa if else eğer skor negatifse skoru yazdırma




    return 0;
}