#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main () {

    // int x=7,y=19,z=24,a=3,b=37;

    //int notes[3]= {7,19,24,3,37};//köşeli parantez içine kaç tane veri varsa biliyosan yaz bilmiyosan boş bırak

/*    printf("%d\n",notes[4]);// 37
    printf("%d\n",notes[0]);// 7

    notes[0]= 23;

    printf("%d\n",notes[0]);// 23 olacak

    printf("------------------------------------\n");
*/


    int notes[3];//parantez içine eleman sayısından fazla girebilirsin ama az giremezsin
    notes[0]=7;
    notes[1]=19;
    notes[2]=24;

    int sum;

    sum = notes[0] + notes[2];
    printf("%d\n",sum);

    for(int i=0;i<3;i++){
        printf("%d\n",notes[i]);
    }

    return 0;
}