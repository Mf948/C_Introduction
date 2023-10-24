
#include <stdio.h>

int main(void){

    float temperatureF;
    scanf("%f", &temperatureF);

    float temperatureC = (temperatureF - 32.0 * 5.0/9.0);

    printf("the corresponding temperature in Celsius is %f C.", temperatureC);

    return 0; 
}