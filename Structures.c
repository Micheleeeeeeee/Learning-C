#include <stdio.h>
#include <stdlib.h>

/**
 Structures are large variables which contain several named variables in side.
 (I like to think of them as cool arrays.. owo)
 
 Structure Usages:
 Serialization of data
 Passing multiple arguments in and out of functions through a single argument
 Data structures such as linked lists, binary trees, and more
 */

void printEmpty();

int main() {
    
    // Basic use of structure, points: (single entity which contains two variables)
    
    struct point {
        int x;
        int y;
    };
    

    return EXIT_SUCCESS;
}

void printEmpty() {

    int i;

    for (i = 0; i < 3; i++ ) {
        printf("\n");
    }
}
