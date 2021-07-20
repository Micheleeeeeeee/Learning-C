#include <stdio.h>
#include <string.h>

int SUCCEEDED_RUN = 0;

/**
 For Loops.c
 
 For Loops are loops which are basically a code block which runs multiple times.
 They require an iterator, which is usually defined by 'i'.
 
 They contain three statements,
 
 The initialisation of the iterator, which is ran once,
 The conditional, which is run before the code block is run,
 The final statement, which is run after the code block has run.
 */

int main() {
    
    /**
     Print numbers from 0 - 10 (10 not inclusive)
     */
    
    int i; // Initialise iterator
    
    for (i = 0; i < 10; i++) { // Start for loop
        printf("%d\n", i); // Code block
    }
    
    printf("For loop finished! \n"); // Print
    
    int sum; // Initialise empty variable sum
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Initialise array with length 10, containing the numbers from 1 to 10 inclusive.
    
    for (i = 0; i < 10; i++) {
        sum += array[i]; // Add value of array[i] to sum.
    }
    
    printf("The sum of the array is: %d\n", sum);
    
    /**
     "Challenge"
     
     Calculate the factorial of the variable arr.
     */
    
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int factorialSum = 1;
    
    for (i = 0; i != 10; i++) {
        factorialSum *= arr[i];
    }
    
    printf("Sum of the factorial from arr: %d\n", factorialSum);
    
    return SUCCEEDED_RUN;
}
