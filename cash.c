#include<cs50.h>
#include<stdio.h> 


int main(void) {
 
  float usd = get_float("Amount of dollars: "); 
   while (0 > usd);
   // here i convert the user's amount from dollars to cents
   int cents = usd * 100;
   // here i declared a variable equal to 0 so i can add on to it
   int p = 0 ;
// checks if there is a 25 in the value then subtracts it from the total and adds one to variable p
    while (cents >= 25 ) {
     cents -= 25;
     p++;
    }
    // checks if there is a 10 in the value then subtracts it from the total and adds one to variable p
    while (cents >= 10)
    {
     cents -= 10; 
     p++;
    }
 // checks if there is a 5 in the value then subtracts it from the total and adds one to variable p   
    while (cents >= 5)
    {
     cents-= 5;
     p++;
    }
  // checks if there is a 1 in the value then subtracts it from the total and adds one to variable p  
    while ( cents >= 1)
    {
     cents -= 1;
     p++;
    }
  //prints final number as a whole number
     printf("%i\n", p);
}
