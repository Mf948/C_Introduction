# Iterating 

- for loop 
- while loop
- do-while loop
- control statements: break, continue,goto 

# The for Loop 

    starting with a comcrete example 

for(int i=0; i< N; i++){
    /* Statements to be executed multiple times */
    printf("%d \n",i);
}


# The While Loop 

do {
    statement to be executed multiple times,
    while the condition is true 
} while (condition); 


# Changing the Normal Execution Flow of a Loop 

while(loop_condition){
    /* some statemnets */


}if (exit_condition){
    break  /* Imediately terminate the loop */

    goto Cleanup; /* Imediatly terminate the loop and jump to cleanup */
}

/* Other statements */