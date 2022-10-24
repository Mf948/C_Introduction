
#include <stdio.h>

int main(void){
 int number;

 printf( " please enter an integer number:");
 scanf("%d", number);

 switch(number){
    case 1 :
        printf(" you entered one. \n");
        break;
    
    case 10:
        printf(" you entered ten. \n");
        break;
    
    case 64:
        printf(" you entered sixty-four. \n");
        break;

    default:
    printf(" you entered a number different than 1, 10, 65. \n");
}
return 0;

}


