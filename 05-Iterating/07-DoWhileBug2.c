#include <stdio.h>

int main(void ){
    int i = 64;

    while( i == 64){
        printf("please enter a number ( enter a value different than 64 to quit):");
        scanf("%d",&i);

        printf("you entered: %d \n\n", i); 
    }
    printf("** Loop terminated **");

    return 0;
}