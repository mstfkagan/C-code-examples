#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main () {
    int i,size,big=0,small=100,bigIndex,smallIndex;//small değerini 100e eşitledik
    int notes[100],studentNo[100];

    printf("Enter class size: ");
    scanf("%d",&size);
    
    for(i=0;i<size;i++){
        printf("Student No and Notes:");
        scanf("%d%d",&studentNo[i],&notes[i]);
    }

    for(i=0;i<size;i++) {
        if(notes[i]>big){
            big = notes[i];
            bigIndex= studentNo[i];
        }
    }   
    for(i=0;i<size;i++){
        if(notes[i]<small){
            small = notes[i]; 
            smallIndex=studentNo[i];
        } 
    }
    //printf("Big note: %d - Student no: %d\n",big,studentNo[bigNo]);
    //printf("Small note: %d - Student no: %d\n",small,studentNo[smallNo]);

    printf("Big note: %d - Student no: %d\n",big,bigIndex); //EĞER BÖYLE İSTİYORSAN bigNo=studentNo[i]yap
    printf("Small note: %d - Student no: %d\n",small,smallIndex);
    return 0;
}

