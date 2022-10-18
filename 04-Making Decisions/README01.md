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

