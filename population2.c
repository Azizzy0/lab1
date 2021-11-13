#include <cs50.h>
#include <stdio.h> 

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
