#include <stdio.h>
#include <stdlib.h>

#define MAX 100


float stack[MAX];
int top = -1;


int isEmpty() {
    return top == -1;
}

int hasTwoOperands() {
    return top >= 1;
}


void push(float value) {
    if (top == MAX - 1) {
        printf("Error: Stack Overflow\n");
        return;
    }
    stack[++top] = value;
}


float pop() {
    if (isEmpty()) {
        printf("Error: Stack Underflow\n");
        return 0;
    }
    return stack[top--];
}


int main() {

    char instruction;
    float value, op1, op2;

    printf("=== Reverse Polish Calculator ===\n");

    printf("\nInstructions:\n");
    printf("? : Push number\n");
    printf("+ : Addition\n");
    printf("- : Subtraction\n");
    printf("* : Multiplication\n");
    printf("/ : Division\n");
    printf("= : Display result\n");
    printf("q : Quit\n");

    while (1) {

        printf("\nEnter Instruction: ");
        scanf(" %c", &instruction);

        switch (instruction) {


            case '?':

                printf("Enter Number: ");
                scanf("%f", &value);
                push(value);
                break;


            case '+':

                if (!hasTwoOperands()) {
                    printf("Error: Not enough operands\n");
                    break;
                }

                op2 = pop();
                op1 = pop();
                push(op1 + op2);
                break;


            case '-':

                if (!hasTwoOperands()) {
                    printf("Error: Not enough operands\n");
                    break;
                }

                op2 = pop();
                op1 = pop();
                push(op1 - op2);
                break;


            case '*':

                if (!hasTwoOperands()) {
                    printf("Error: Not enough operands\n");
                    break;
                }

                op2 = pop();
                op1 = pop();
                push(op1 * op2);
                break;


            case '/':

                if (!hasTwoOperands()) {
                    printf("Error: Not enough operands\n");
                    break;
                }

                op2 = pop();

                if (op2 == 0) {
                    printf("Error: Division by zero\n");
                    push(op2);
                    break;
                }

                op1 = pop();
                push(op1 / op2);
                break;


            case '=':

                if (isEmpty()) {
                    printf("Stack is Empty\n");
                } else {
                    printf("Result = %.2f\n", stack[top]);
                }
                break;


            case 'q':
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid Instruction\n");
        }
    }

    return 0;
}
