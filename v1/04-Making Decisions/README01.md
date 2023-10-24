# Making Decisions
  

  if (expression){
    statement to be executed 
    if the expression is evaluated true 
  }
 

 allowed 
  if( expression){
     single-statement;
  }
allowed 
if (expression)
    single-statement;
second statement would not run 
if(expression)
    single-statement;
    statement_added_in_next_iteration;


## 01 The if-else Statement 
    if(expression){
        statement to be executed if 
        the expression is evaluated true 
    } else {
        the expression to be executed if 
        the expression is evaluated false
    }

Relation Operations 
- Equal to
- Not equal to
- Less than
- Greater than
- Less than or equal to
- Greater than or equal to

if( number == 64 ){
    /* code to be executed when the number is equal to 64 */
}

Logical Operators

if ((x > 10)&& (x<= 64)){
    /* x is in the range [10,64] */
}


## 02 The if-else-if Ladder 

if(expression #1){
    block of code 1
}else if{
    block of code 2
}else if{
    block of code 3
}else {
    default block of code 
}

# 03 Scope of a Variable 
 variable deacled inside main 

 int main(void){

    /* code before variable declaration... */

    int my_variable;

    /* Code after variable declaration.. */ 


 }

 # 03 a Scope of a variable Declared inside if statement 

    int main(void){
        if(condition){
            int my_variable;

            /* Code after variable delcaration inside if body.. */
        }
     /* Code after variable declaration inside main... */

    }  
# 04 Nested if statemts 

    if(condition1){
        /* code executed when condition1 is true */

        if(condition2){
            /* code exectuted when condition1 is true, and condition2 is true */
        } /* if (condition2) */

    } /* if (condition1) */
 
 # Testing for Equality against a List of values 
    
    switch (n){
        case value1:
            /* stateemts for case 1 */
            break;
        case value2:
            /* stateemts for case 2 */
            break;\
        default:
        /* statemts for all the other cases */
        break

    }

# Ternary conditional Operator 

maxNumber = (number1 > number2) ?
            number1 : number2;

# if-else 

    if(number1 > number2)
        maxNumber = number1;
    else 
        maxNumber = number2;

