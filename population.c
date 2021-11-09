#include <stdio.h>
#include <cs50.h>
/*
    This code compiles and returns the correct output.
    This code has style issues, mainly around indentation
    Content inside of curly braces should be indented once,
    and should remain at that level of indentation unless a new
    set of braces appear. You code has several levels of indentation
    for no reason. 
*/
int main(void) {
    int n; //corecct indentation
    
    
        n = get_int("Start Population: "); //incorecct indentation
    
      
      int ans = n + (n/3) - (n/4); //incorecct indentation
      
      printf("End population after one year: %i\n", ans); //incorecct indentation
}
