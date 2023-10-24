
#include <stdio.h>  /* for printf, putchar*/
#include <string.h> /*  for strlen */

int main(void){

    /*string to underline */
    char str[] = "connie is learning c.";
    
    /* print the string*/
    printf("%s \n",str);

    int len = strlen(str);
    for (int i = 0; i < len; i++){
        putchar('-');
    }
    putchar('\n');
return 0;
}