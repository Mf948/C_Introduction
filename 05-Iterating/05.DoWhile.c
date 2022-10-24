#include <stdio.h> /* console I/O */
#include <string.h>

int main(void){
    char answer[10];

    int i = 0;

    do {
        i++;
        printf("iteration #%d \n", i);
        
        printf("do you want to continue? [ Enter NO quitt] ");
        scanf("%9s", answer);
    } while (strcmp(answer, "NO") !=0);

    
    return 0;

}