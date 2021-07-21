#include <stdio.h>
#include <stdlib.h>

/**
 Recursion.c
 
 Recursion is occurred when a function calls itself. Recursion can result in
 a very large amount of memory used if the function does not have a cancel,
 or the recursion gets too deep.
 
 Examples of Recursion Use:
 
 Walking recursive data structures (linked lists, binary trees etc)
 Exploring possible scenarios in games such as chess
 
 Recursion contains two parts. A terminating case that indicates when the recursion
 will finish and a call to itself that must make progress towards the terminating case.
 
 Examples: multiply() method
 */

/**
 
 The 'unsigned' keyword

 When declaring an unsigned int, this allows the integer to hold both positive and 
 negative numbers. Example below.

*/

unsigned int unsignedInteger = -1;
// int integer = -1; This will error.

unsigned int multiply(unsigned int x, unsigned int y);
unsigned int factorial(unsigned int num);

int main() {
    
    printf("5 * 100: %d\n", multiply(5, 100));
    
    printf("0! = %d\n", factorial(0)); // 1
    printf("1! = %d\n", factorial(1)); // 1
    printf("3! = %d\n", factorial(3)); // 6
    printf("5! = %d\n", factorial(5)); // 120

    return EXIT_SUCCESS; // 0
}

unsigned int multiply(unsigned int x, unsigned int y) {
    
    if (x == 1) { // If x is 1
        return y; // Return y
    } else if (x > 1) { // If x is higher than one
        return y + multiply(x - 1, y);
    }
    
    return 0; // Return 0 if none of above conditions are satisfied
}

unsigned int factorial(unsigned int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }

    return 0;
}
