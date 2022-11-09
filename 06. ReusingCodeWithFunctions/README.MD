## Reusing code functions

float CelsiusFromFahrenheit(float temperatureF){

    float temperatureC = (temperatureF - 32.0) * 5.0/ 9.0 ;

    return temperatureC

}

celcius = celciusFromFahrenheit(fahreheit);

# A Very Important Function

int main(void){

/\*

- your C code
  \*/
  ....

/_ return the exit code _/

return 0;

}

# pointers

a pointer is a variable that contains a memory address

pointer syntax:

int * p ;

initializing variable

int *p = &n;

null pointer

int *p = NULL ;

Dereferencing a Pointer 

*p = 500; 

# Some Applications of Pointers 

- modify arguments 

- Efficiently manage large data 

- Implement data structures 

