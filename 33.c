#include <stdio.h>
#include <stdlib.h>

/*
int main () {
    int i;
    i=0;
    while(i<10){
        
        if(i==7){
            break;//i değeri 7 olduğunda bitir
        }
        printf("%d\n",i);
        i++;
    }


    return 0;
}
*/
/*
int main () {
    int i;

    for(i=0;i<10;i++){
        
        if(i==7){
            break;//i değeri 7 olduğunda bitir
        }
        printf("%d\n",i);

    }


    return 0;
}
*/

/*
int main () {

    int i;
    for(i=0;i<10;i++){
        if (i==5){continue;} // i değeri 5'e eşit olduğunda printf'i atla diyorum
        printf("%d\n",i);

        
    }
}

*/

int main () {
    int i=0;

    while(i<10){

        if(i==6){
            i++;//bunu eklemezsen donup kalacak değer sürekli 6 olacak çünkü
            continue;//i değeri 6 olduğunda alttaki kodları 1 seferlik atla
        }
        printf("%d\n",i);
        i++;
    }

    return 0;
}