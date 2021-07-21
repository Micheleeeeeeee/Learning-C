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
    
    struct point p; // Initialise point
    p.x = 10; // Set x to 10
    p.y = 20; // Set y to 20
    
    printf("x: %d \n", p.x); // 10
    printf("y: %d \n", p.y); // 20
    
    /**
     Typedefs
     
     Typedefs:
     - Allows you to define types with a different name
     - Allows you to remove the long definition of a point structure. Example below
     */
    
    typedef struct {
        int x; // Create integer x
        int y; // Create integer
    } pointTwo; // Set name of structure pointTwo
    
    pointTwo pTwo; // Create pointTwo instance
    
    /**
     Structures can also hold pointers, which means they can also hold strings,
     or even pointers to other structures too. Example below.
     */
    
    typedef struct {
        char* brand;
        int model;
    } vehicle;
    
    vehicle tesla; // Create instance of vehicle
    tesla.brand = "Tesla"; // Set brand to Tesla
    tesla.model = 5000; // Set model to 5000
    
    printf("The %s Model %d\n", tesla.brand, tesla.model);
    // Prints the Tesla Model 5000
    
    /**
     Exercise / Challenge
     
     Define a new data structure, named "person", which contains a string
     (pointer to char) called name, and an integer called age.
     */
    
    typedef struct {
        char* name;
        int age;
    } person;
    
    person sillysock;
    sillysock.name = "Silly Sock";
    sillysock.age = 15;
    
    printf("My name is %s and my age is %d \n", sillysock.name, sillysock.age);

    return EXIT_SUCCESS; // Return 0 because everything works owowowowowo

}

void printEmpty() {

    int i;

    for (i = 0; i < 3; i++ ) {
        printf("\n");
    }
}
