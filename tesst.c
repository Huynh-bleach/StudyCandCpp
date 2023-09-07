#include <stdio.h>
#include <conio.h>

#define SIZE 4


void main(void){
    int iarray[] = {2,5,6,7,8};
    int i, ix = 10;
    for(i = 0; i< SIZE; i++){
        printf("%d",*(iarray + i));
    }

}

