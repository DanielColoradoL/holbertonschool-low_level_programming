Introduction
This README provides a brief guide on how to manipulate bits and utilize bitwise operators in the C programming language. Bit manipulation is a powerful technique that involves manipulating individual bits within a binary representation of data. This can be particularly useful for tasks such as setting or clearing specific bits, checking bit values, and optimizing certain algorithms.

Bitwise Operators
C provides several bitwise operators that allow you to perform operations at the bit level. The main bitwise operators are:

AND (&): Bitwise AND operator.
OR (|): Bitwise OR operator.
XOR (^): Bitwise XOR (exclusive OR) operator.
NOT (~): Bitwise NOT (complement) operator.
Left Shift (<<): Shifts the bits to the left.
Right Shift (>>): Shifts the bits to the right.
Example Usage
1. Setting a Bit
To set a specific bit in a variable, you can use the OR operator.

c
Copy code
#include <stdio.h>

int main() {
    unsigned int num = 5;  // Binary: 0000 0101
    int bitPosition = 2;

    num = num | (1 << bitPosition);  // Set the bit at bitPosition to 1

    printf("Result: %u\n", num);  // Output: 0000 1101 (13 in decimal)
    return 0;
}
2. Clearing a Bit
To clear a specific bit, you can use the AND operator with the complement of the desired bit.

c
Copy code
#include <stdio.h>

int main() {
    unsigned int num = 13;  // Binary: 0000 1101
    int bitPosition = 2;

    num = num & ~(1 << bitPosition);  // Clear the bit at bitPosition

    printf("Result: %u\n", num);  // Output: 0000 0101 (5 in decimal)
    return 0;
}
3. Toggling a Bit
To toggle a specific bit, you can use the XOR operator.

c
Copy code
#include <stdio.h>

int main() {
    unsigned int num = 5;  // Binary: 0000 0101
    int bitPosition = 2;

    num = num ^ (1 << bitPosition);  // Toggle the bit at bitPosition

    printf("Result: %u\n", num);  // Output: 0000 1101 (13 in decimal)
    return 0;
}
Conclusion
Understanding how to manipulate bits using bitwise operators can be a valuable skill in C programming. It allows for efficient and concise solutions to various problems. Experimenting with these operators in different scenarios will deepen your understanding and proficiency in bit manipulation.
