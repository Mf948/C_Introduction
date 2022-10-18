int main( void){
    printf( "please eneter an integer number: ");
    int number1;
    scanf("%d", &number1);

    printf(" please enter another integer number: ");
    int number2;
      scanf("%d", &number2);

      if(number1 > number2){
        printf(" number1 > number2 \n");
      }else if (number1 <number2) {
        printf("number1 < number2 ");
      }else{
        printf(" number1 == number2");
      }
      
      return 0; 
      
}