#include <stdio.h>
#include <stdlib.h>

/**
 Function Arguments By Referense
 
 Function Arguments are passed by value, which means they are copied in
 and out of functions. What if you pass pointers to values instead of the values themselves? This will allow us to give functions control over those variables
 and structures of the parent functions, and not just a copy of them, thus directly
 reading and writing the original object.
 */

typedef struct {
    int x;
    int y;
} point;

typedef struct {
    int age;
    char* name;
} person;

void printEmpty();
void addOne(int n);
void addOneWithPointer(int *n);
void move(point* p); // Pointer to structure
void moveDereferencing(point* p);
void birthday(person* p);

int main() {
    
    point p;
    p.x = 1;
    p.y = 1;
    
    person me;
    me.name = "Silly Sock";
    me.age = 0;
    
    int n = 1;
    addOne(n);
    printf("Added one to 1: %d \n", n);
    addOneWithPointer(&n);
    printf("Added one to 1 with pointer: %d \n", n);
    
    printf("x: %d \n", p.x);
    move(&p);
    printf("Attempted to increment x by one with pointers. \n");
    printf("x: %d \n", p.x);
    
    printEmpty();
    
    printf("Incrementing age by one. \n");
    printf("Age is currently: %d \n", me.age);
    
    birthday(&me);
    
    printf("Age: %d\n", me.age);
    
    
    return EXIT_SUCCESS;
}

void printEmpty() {

    int i;

    for (i = 0; i < 3; i++) {
        printf("\n");
    }

}

void addOne(int n) {
    n++; // This will not do anything.
}

void addOneWithPointer(int *n) {
    (*n)++; // This WILL work.
}

void move(point* p) { // Pointer to structure
    (*p).x++; // Add to x
    (*p).y++; // Add to y
}

void moveDereferencing(point* p) {
    p->x++;
    p->y++;
}

void birthday(person* p) {
    (*p).age++;
}
