










void swap (int a, int b){
    int temp = a;
    a = b ;
    b = temp ; 
}

int main(void){

int x = 10;
int y = 20;


printf(" initial values: \n x = %d; y = %d \n\n",x,y);

swap(x,y);

return 0; 


}