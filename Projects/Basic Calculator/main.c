#include <stdio.h>
#include <stdlib.h>

void printEmpty();
void parse(char c);

int main(int argc, char *argv[]) {
    
    if (!argv[1] == NULL || !argv[2] == NULL) {
        
    } else {
        printf("Please enter arguments.");
    }

    return EXIT_SUCCESS;
}

void printEmpty() {

    int i;

    for (i = 0; i < 3; i++) {
        printf("\n");
    }
}

int parse(char c) {
    switch (c) {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '0':
    }
    
    return -1; // Operation failed
}
