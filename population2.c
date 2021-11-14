#include <cs50.h>
#include <stdio.h> 

/*

    Mr. Ramirez's Notes
    
    Nice effort! This code compiles and usually returns the correct output. There are cases where this code can be broken.
    
    Issues:
    1. The first while loop will run forever if s is less than 9. You never reprompt the user to enter a new value
    2. Your variable names are not descriptive. Someone looking at your code would not know what s, e, and y stand for. 
       Names such as start, end, and years are better.
    3. Your style is inconsistent. Remember to indent code within loops, you have not done that here. This makes the code harder to read.

*/

int main(void) { 
    //declared a variable that asks the person for a start population
    int s = get_int("Start Population: "); 
    // the while loop is saying that if the variable is greater than 9 then the code should continue
    while (s < 9);
    // here i am declaring another variable to get the end population so I could start my calculations for the code
    int e = get_int("End Population: ");
    // if the start population is greater than the end population then the code should ask him for the end population again until the start is less than end
    while (s > e) {
    e = get_int("End Population: ");
    }
    int y = 0;
    //The same calculation from the previous code is implemented on this code but adding 1 to every time it does the calculation. 
    //It stops when the end value reaches the start value and prints out the number of times it did it, which is the number of years. 
    do {
        s += (s / 3) - (s / 4); 
        y++; 
    }
    while (s < e );
    printf("Years %i\n", y);
    }
