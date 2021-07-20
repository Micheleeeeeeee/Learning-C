#include <stdio.h>

int EXIT_SUCCESS = 0;

void emptyPrint();

/**
 While Loops have similarities compared to for loops, however they have less functionality. A while loop continues executing the code block as long as the condition (while (condition)) remains true.
 */

int main() {

    int n = 0; // Initialise n
    
    int TRUE = 1; // why this won't work right
    int FALSE = 0; // WHAT AM I DOING AAAAA
    
    while (n < 10) { // While n is less than 10
        printf("%d\n", n); // Print the current value of n
        
        n++; // Increment n by one
    }
    
    emptyPrint();
    
    /**
     Loop Directives
     
          break
          continue
     */
    
    n = 0; // Reset n
    
    while (TRUE) { // While TRUE (always true)
        
        printf("%d\n", n); // Print current val of n
        
        n++; // Increment n by one
        if (n == 10) { // If n is ten
            break; // Stop loop!
        }
    }
    
    emptyPrint();
    
    /**
     Odd Numbers!
     */
    
    n = 0; // Reset n
    
    while (n < 10) { // While n is less than 10
        
        n++; // Increment n by one
        
        if (n % 2 == 1) { // If n divided by two contains a remainder of one (number is odd)
            continue;
        }
        
        printf("The number (%d) is even.\n", n);
    }
    
    /**
     Exercise
     
     The array variable consists of a sequence of ten numbers. Inside a while loop, you must write two if conditions, which change the flow of the loop in the following manner (without changing the printf command):
     
     - If the current number which is about to be printed is less than 5, don't print it.
     - If the current number which is about to be printed is greater than 10, don't print it and stop the loop.
     
     Notice that if you do not advance the iterator variable i and use the continue derivative, you will get stuck in an infinite loop.
     */
    
    int array[10] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    n = 0;
    
    while (n < 10) {
        if (array[n] < 5) {
            n++;
            continue;
        }
        if (array[n] > 10) {
            break;
        }
        
        printf("%d\n", array[n]);
        
        n++;
    }
        

    return EXIT_SUCCESS; // Return 0
}

void emptyPrint() {
    int i;
    
    for (i = 0; i < 3; i++) {
        printf("\n");
    }
}
