#include <stdlib.h>
#include <stdio.h>

/*
 Static.c
 
 static is a keyword in the C programming language. It can be used with not only variables but also functions.
 
 By default, variables are always local to the scope in which they are defined. Variables can, however, be declared as static to increase their scope up to the file containing them. As a result. these variables can be accessed anywhere inside a file.

 By default, functions are global in C. If we declare a function with static, the scope of that function is reduced ti the file containing it. See below.
 
 While static variables contain scope over the file containing them, making them accessible only inside a given file, global variables can be accessed outside the file too.
 */

static int sum(int num);
static void staticFunction(void);

void printEmpty();

int main() {

    staticFunction();
    
    printf("%d \n", sum(55));
    printf("%d \n", sum(45));
    printf("%d \n", sum(50));

    return EXIT_SUCCESS;
}

void printEmpty() {
    int i;

    for (i = 0; i < 3; i++) {
        printf("\n");
    }
}

static void staticFunction(void) {
    printf("This is an example of a static function. \n");
}

static int sum(int sum) {
    static int total = 0;
    total += sum;
    return total;
}
