How to Use Arguments Passed to Your Program
When working with programs, it's essential to understand how to handle command-line arguments. In your program, you can access these arguments through the main function. The main function in C can take two arguments: argc (argument count) and argv (argument vector).

Here's a brief explanation of each:

argc (int): It represents the number of command-line arguments passed to the program. It is always at least 1, as the first argument is the program's name.

argv (char[]):* It is an array of strings representing the individual command-line arguments. argv[0] is the program name, and the subsequent elements contain the actual arguments.

Here's a simple example:

c
Copy code
#include <stdio.h>

int main(int argc, char *argv[]) {
    // Your code here

    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
To compile this program, you can use a command like:

bash
Copy code
gcc your_program.c -o your_program
And then run it with arguments:

bash
Copy code
./your_program arg1 arg2 arg3
Prototypes of main Function
In C, there are two common prototypes for the main function:

Standard Prototype:

c
Copy code
int main(void);
This form is used when your program does not take any command-line arguments. It indicates that the program starts execution with no arguments passed.

Extended Prototype:

c
Copy code
int main(int argc, char *argv[]);
This form is used when your program requires command-line arguments. It allows you to access the arguments through the argc and argv parameters.

Choose the appropriate prototype based on whether your program needs to accept command-line arguments or not.

Using __attribute__((unused)) or (void) for Unused Variables
Sometimes, you may have variables or parameters in your functions that are not used within the function's body. This can result in compiler warnings. To suppress these warnings, you can use either of the following approaches:

Using __attribute__((unused)):

c
Copy code
void example_function(int x, __attribute__((unused)) int y) {
    // Use x, but y is intentionally left unused
}
This attribute informs the compiler that the variable is intentionally unused, suppressing any related warnings.

Using (void):

c
Copy code
void example_function(int x, int y) {
    (void)y; // Using (void) to indicate that y is intentionally left unused
    // Use x, but y is intentionally left unused
}
This approach casts the variable to (void), indicating to the compiler that the variable is intentionally unused.

Choose either of these methods based on your preference or coding standards to ensure clean and warning-free compilation.
