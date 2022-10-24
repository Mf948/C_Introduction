#include <stdio.h>

int main(void){

    char str[] = "connie";

    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    printf(" string: \"%s\" \n", str);
    printf(" Lenght: %d chars \n", len);
}