/******************
Name: Davidi Bellaire
ID: 214165417
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{
    // Ascii
    printf("Ascii:\n");
    char c;
    printf("Please enter a character\n");
    c = getchar();
    printf("Its numerical value is: %d\n", c);
    printf("0 for even, 1 for odd: %d\n", c & 1);
    //doing and with 1 will "turn off" all the bits but the last one (if it's 1)


    // 2's complement and other representations
    printf("\n2's complement to other representations:\n");
    int neg = 0;
    printf("Please enter a negative integer\n");
    scanf("%d", &neg);
    printf("1's complement: -%d\n", ~neg); // just flipping the bits
    printf("unsigned: %u\n", (unsigned int)neg); // use %u to print the unsigned value


    // Shifting right and left
    printf("\nShifting right and left:\n");
    int first, second, third;
    printf("Please enter 3 integers\n");
    scanf("%d %d %d", &first, &second, &third);
    printf("After shifting right and left: %d\n", (first >> second) << third);
    // shifting according to the instructions


    // Even - Odd
    printf("\nEven - Odd:\n");
    int num1, num2, num3;
    printf("Please enter 3 integers\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("0 - most of them are even, 1 - most of them are odd: %d\n", ((num1 & 1) & (num2 & 1)) | ((num1 & 1) & (num3 & 1)) | ((num2 & 1) & (num3 & 1)));
//checking all the possibilities of odd number and if it's not so it's even

    // Different Bases
    printf("\nDifferent Bases:\n");
    unsigned int oct, hex;
    printf("Please enter two numbers in octal and hexadecimal bases\n");
    scanf("%o%x", &oct, &hex);
    printf("LSBs: %d %d\n", oct & 1, hex & 1);
    printf("MSBs: %d %d\n", (oct >> 31) & 1, (hex >> 31) & 1);
    /* i used the number 31 cause we work with 32 bits so in order to get to the first bit we need to
      move 31 bits and then check if it is 1 or 0 */

    printf("Bye!\n");

    return 0;
}
