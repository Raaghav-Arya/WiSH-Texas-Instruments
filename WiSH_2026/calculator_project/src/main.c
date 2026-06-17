#include <stdio.h>
#include "../inc/calculator.h"

int main(void)
{
    /* TODO: Declare variables for operand1, operand2, choice, and result */
    float op1, op2;
    char choice = '+';
    float result;
    /* TODO: Add a loop that:
     *   1. Calls printCalculatorMenu()
     *   2. Reads two numbers and an operation choice from the user
     *   3. Calls the appropriate operation function
     *   4. Prints the result
     *   5. Exits when the user chooses 5
     */
    while(choice != '5') {
        printf("enter two numbers\n");
        scanf("%f", &op1);
        scanf("%f", &op2);

        printf("enter your choice of operation : '+', '-', '/', '*'\n enter 5 TO EXIT\n");
        scanf("%c" &choice);
        
        if(choice == '+') {
            res = add(op1, op2)
            printf("result : %f\n", res);
        }
        else if(choice == '-') {
            res = add(op1, op2)
            printf("result : %f\n", res);
        }
        else if(choice == '*') {
            res = add(op1, op2)
            printf("result : %f\n", res);
        }
        else if(choice == '/') {
            res = add(op1, op2)
            printf("result : %f\n", res);
        }
        else if(choice == '5') {
            break;
        }
    }

    return 0;
}
