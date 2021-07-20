#include <stdio.h>

int numbers[10]; // Initialise an array of 10 integers

/*
 Populate the Array
 */

int main() {
    
    int i;
    
    for (i = 0; i < 7; i++) {
        numbers[i] = 10 * i;
    }

    printf("The 7th number in the array is %d", numbers[6]);
    
    
    return 0;
}
