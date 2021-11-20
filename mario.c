int main(void) {
    // getting a number from the user
     int height = get_int("Enter a number between 1 and 8: ");
     // if the number provided by the user is between 1 and 8 then code must proceed
    while (height < 1 || height > 8);
    
    // this is for the height of the pyramid
    for (int i = 0; i < height; i++) {
        
     // this code is so we could subtract the user number by one to create the spaces for the pyramid
        for (int m = height - 1; m > i; m--) {
            printf(" ");
        }
        
        // this for loop is so we can print out the amount of hashtags there'll be
        for (int m = 0; m <= i; m++) {
                 printf("#");
             }  
        //to print on to a new line
        printf("\n");
    }    
    
}
