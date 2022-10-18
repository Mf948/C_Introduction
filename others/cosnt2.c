#include <stdio.h>

#define PIZAACOST 1.5;
const char NEWLINE = '\n';


int main(){
    float costosPizza;
    float numberOfSlices = 3;
    costosPizza = PIZAACOST * numberOfSlices; 

    printf("value total bill: %f",costosPizza);
    printf("%c",NEWLINE);
}

