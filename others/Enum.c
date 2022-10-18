#include<stdio.h>

enum weekDays { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

int main(){

    enum week today;
    today = Wednesday;
    printf("Day %d", today+1);
    return 0;
}