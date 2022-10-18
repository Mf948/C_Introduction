
#include <stdio.h>
#include <string.h>

int main(){
    printf("please enter a string:");

    char str[40];
    scanf("%39s",str);

    int len = strlen(str);
    int size = sizeof(str);

    printf("\nLenght = %d, size =%d \n", len, size);

    return 0;
}