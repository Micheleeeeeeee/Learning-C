#include <stdio.h>
#include <stdlib.h>

int TRUE = 1;
int FALSE = 0;

void printEmpty();
int foo(int bar);
void moo();
void printBig(int n);

/**
 C functions are simple, but because of how C works, the power of functions is a bit limited.
 
 - Functions receive either a fixed variable or variable amount of arguments.
 
 - Functiuons can only return one value, or no value.
 
 In C, arguments are copied by value to functions, which means that we cannot change the arguments to affect their value outside of the function. To do that, we must use pointers, which are taught later on.
 */

int main() {

    int out = foo(2); // 4
    
    printf("%d\n", out);
    
    moo();
    
    printBig(11);
    printBig(9);

    return EXIT_SUCCESS;
}

void printEmpty() {
    int i;
    for (i = 0; i < 3; i++) {
        printf("\n");
    }
}

int foo(int bar) { // Initialise function foo with the argument bar
    return bar * 2; // Return the value of bar doubled
}

void moo() {
    printf("Moo! \n");
}

void printBig(int n) {
    if (n > 10) {
        printf("%d is big! \n", n);
    } else {
        printf("%d is not big. \n", n);
    }
}
