#include <stdio.h>
#include <cs50.h>

int main(void) {
    int n;
    
    
        n = get_int("Start Population: ");
    
      
      int ans = n + (n/3) - (n/4);
      
      printf("End population after one year: %i\n", ans);
}
