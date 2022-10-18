#include <stdio.h>   /* for console I/O */
#include <string.h>  /* For strcmp */

int main(void){

    char password[20];
    printf(" please enter the password: ");
    scanf("%19s", password);

if(strcmp(password, "pluralsight") == 0){
    printf(" correct password! \n");
} else {
    printf( "wrong password : -( \n");
}

return 0 ; 

}