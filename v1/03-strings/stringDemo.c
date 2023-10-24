
#include <stdio.h>
#include<string.h>

int main(void){

// read a name from the user
printf("what's your name ?");

char name[40];
scanf("%39s",name);

printf("\n");
printf("nice to meet you, %s!\n", name);


char message[100];// destination string

strcpy_s(message, sizeof(message),name);
strcat_s(message, sizeof(message),"is");
strcat_s(message, sizeof(message),"learning C.");

//print out complete message
puts(message);

return 0; 

}


