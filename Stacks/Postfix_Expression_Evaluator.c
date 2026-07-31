#include <stdio.h>
#include <ctype.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow!\n");
        return;
    }
    stack[++top] = value;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!\n");
        return -1;
    }
    return stack[top--];
}

int main()
{
    char postfix[MAX];
    int i, operand1, operand2, result;

    printf("Enter postfix expression : ");
    scanf("%s", postfix);

    for (i = 0; postfix[i] != '\0'; i++)
    {
        if (isdigit(postfix[i]))
        {
            push(postfix[i] - '0');   
        }
        else
        {
            operand2 = pop();
            operand1 = pop();

            switch (postfix[i])
            {
                case '+':
                    push(operand1 + operand2);
                    break;

                case '-':
                    push(operand1 - operand2);
                    break;

                case '*':
                    push(operand1 * operand2);
                    break;

                case '/':
                    if (operand2 == 0)
                    {
                        printf("Division by zero is not allowed!\n");
                        return 1;
                    }
                    push(operand1 / operand2);
                    break;

                case '%':
                    push(operand1 % operand2);
                    break;

                default:
                    printf("Invalid operator!\n");
                    return 1;
            }
        }
    }

    result = pop();

    if (top == -1)
        printf("Result = %d\n", result);
    else
        printf("Invalid Postfix Expression!\n");

    return 0;
}
