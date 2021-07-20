#include <stdio.h>


int main() {

    
    int fizz = 1;
    int buzz = 2;
    
    int conditional = fizz * 3;
    int otherConditional = fizz * 2;
    
    if (fizz < buzz) { // If fizz is less than (NOT OR EQUAL) to buzz
        printf("Fizz is smaller than buzz. \n"); // Print
    } else { // If the above condition is not met.
        printf("Fizz is larget than buzz. \n"); // Print
    }
    
    // Another conditional
    
    if (conditional > 1) {
        if (conditional > 2) {
            printf("conditional is higher than one and two. \n");
        } else {
            printf("Conditional is higher than one. \n");
        }
    } else {
        printf("conditional is not greater than one. \n");
    }
    
    /*
     More conditionals! && and || (AND/OR)
     */
    
    int yetAnotherConditional = 7;
    
    if (conditional > 5 || conditional == 3) {
        printf("conditional is either greater than five or equal to 3. \n");
    } else {
        printf("conditional is neither equal to three or greater than 5. \n");
    }
    
    if (yetAnotherConditional > 5 && yetAnotherConditional == 7) {
        printf("conditional is both greater than five and equal to seven \n ");
    }
    
    /**
     "Challenge"
     */
    
    int secretNumber = 555;
    int guess = 555;
    
    if (guess == secretNumber) {
        printf("You guessed correctly! \n");
    } else {
        if (guess > secretNumber) {
            printf("Your guess is too high. \n");
        } else {
            printf("Your guess is too low. \n");
        }
    }
        

    return 0;

//    return EXIT_SUCCESS;
}
