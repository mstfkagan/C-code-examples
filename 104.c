#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    char  message[]="String\'s \\ is \"very\" important";


    printf("%s\n",message);


    char* messagePtr="how are you today\n";
    int i=0;
    while(*(messagePtr+i) !='\0'){
        printf("%c",*(messagePtr + i));
        i++;
    }
    return 0;
}