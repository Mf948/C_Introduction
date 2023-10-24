#include <stdio.h>

int main(void){

    for(int i = 1; i <= 10; i++){
        for( int j = 1; j <=10; i++){
            printf("%3d ",(i*j));
        }
        putchar('\n');
    }
    return 0;
}