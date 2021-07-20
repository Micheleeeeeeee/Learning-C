#include <stdio.h> // idfk C needs this lol
#include <string.h> // String methods

/**
 Strings
 
 
 This .c file is used for the learning of Strings and their usages in the C
 programming language. Strings are not named String, as they are in other languages (Java), as they are char arrays which are defined with pointers or [] array blocks.
 */

int main() { // Below code runs on execution

    char* name = "Silly Sock"; // Initialise character array with a pointer (*) which is allocated to unnallocated memory in the heap. (NOT STACK owo)
    
    char anotherName[] = "Silly Sock"; // Initialise character array which is allocated to the stack.
    
    int age = 4000;
    
    printf("%s is %d years old. \n", name, age); // Print: "Silly Sock is 4000 years old."
    
    /*
     Getting String lengths
     */
    
    char* stringLengthExample = "Silly Sock";
    
    /**
     Print String length with strlen() method
     */
    
    int stringLength = strlen(stringLengthExample);
    
    printf("The string length of %s is: %d \n", stringLengthExample, stringLength);
    
    /**
     String comparison
     */
    
    char* stringComparisonExample = "Silly Sock";
    
    int same = strncmp(stringComparisonExample, "Silly Sock", 10); // 0 as they are the same string. 1 otherwise.
    
    if (same == 0) {
        printf("You are silly sock! \n");
    } else {
        printf("You are not silly sock. \n");
    }
    
    /*
     String Concatenation
     */
    
    // The function 'strncat' appends the first n characters of src string to the destination string where n is min(n, length(src));
    
    char destination[20] = "Silly";
    char src[20] = "Sock";
    
    strncat(destination, src, 3);
    printf("%s\n", destination);
    strncat(destination, src, 20);
    printf("%s\n", destination);
    
    

    return 0;
}
