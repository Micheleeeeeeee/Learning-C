#include <stdio.h>
#include <stdlib.h>

/*
 Pointers.c
 
 Pointers are also variables and play a very important role in the C programming lanuguage. They are used for several reasons, such as:
 
 - Strings
 - Dynamic Memory Allocation
 - Sending function arguments by reference
 - Building complicated data structures
 - Pointing to functions
 - Building special data structures (i.e Tree, Tries)
 
 A pointer is an integer variable which holds a memory address that points to a value, instead of holding the actual value itself.
 
 The computer's memory is a sequential
 store of data, and a pointer points to a specific part of the memory. Our program can
 use pointers in such a way that
 the pointers point to a large
 amount of memory - depending on how much we deide to read from that point on.
 

 */

void printEmpty();

int main() {
    
    char* name = "Silly Sock"; // This allocates name to the stack, which is a pointer to a single character.
    // It also causes the string "Silly Sock" to appear somewhere in the programs memory (after compilation and execution)
    // It initialises the name argument to point to where the S character is.
    
    /**
     Dereferencing
     
     Dereferencing is when you refer to where the pointer points, instead of the memory address. Arrays already use dereferencing. The brackets operator [0] for example, accesses the first item of the array. Since arrays are just pointers, accessing the first item in the array is the same as dereferencing a pointer.
     
     Dereferencing a pointer is done using the asterisk operator *.
     */
    
    int a = 1; // Initialise integer a with value 1
    
    int* pointerToA = &a; // Dereference
    
    printf("Value of A: %d \n", a); // 1
    printf("Pointer to A: %d \n", *pointerToA); // 1
    
    int n = 0; // n = 1
    int* pointerToN = &n; // Dereferences n
    *pointerToN += 1; // This increases n by one!
    
    printf("n is currently: %d \n", n);

    return EXIT_SUCCESS; // Return 0
}

void printEmpty() {
    int i;
    for (i = 0; i < 3; i++) {
        printf("\n");
    }
}
