#include <stdio.h>
#include <stdlib.h>

/**
 
 Dynamic\ Allocation.c
 
 Dynamic Allocation of memory is a very important subject in C. It allows
 building complex data structures such as linked lists. Allocating memory dynamically helps
 us to store data without initially knowing the size of the data in the time we wrote the program.
 
 To allocate a chunk of memory dynamically, we have to have a pointer ready to store the location
 of the newly allocated memory. We can access memory that was allocated to us using that
 same pointer, and we can use thatp ointer to free them emory again, once we have finished
 using it.
 */

typedef struct {
    char* name;
    int age;
} person;

typedef struct {
    int x;
    int y;
} point;

void printEmpty();

int main() {
    
    person* p = (person*) malloc(sizeof(person));
    
    /**
     person* p = (person*) malloc(sizeof(person));
     
     sizeof(person) is not a function, it just interpretes it an translated it to the memory
     size of the person struct.
     
     Tells the compiler to dynamically allocate the size of person (the correct size to
     hold a person struct) (minimal size)
     
     (person *) is explicit typecasting (just like in Java!.. kind of-) malloc() also returns a void pointer
     (pointer with no type) which changed the return value of malloc() to a person struct.
     It is not required to do this as C will implicitly cast the type of the returned pointer for you.
     */
    
    p->name = "Test";
    
    // p.name = "Test" This would throw an error as you must use the
    // p->name syntax as it is a pointer.
    
    printf("%d \n", p->name);
    
    /**
     After you are finished with the struct, you can release it from memory with free();
     */
    
    free(p);
    
    point* po = (point*) malloc(sizeof(point)); // Create dynamically allocated struct
    
    po -> x = 1; // Set x to 1
    po -> y = 2; // Set y to 2
    
    printf("x + y = %d \n", po -> x + po -> y);
    
    /**
     Release from memory
     */
    
    free(po);

    return EXIT_SUCCESS;
}

void printEmpty() {

    int i;
    for (i = 0; i < 3; i++) {
        printf("\n");
    }
}
