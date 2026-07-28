#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push function
void push(char ch)
{
    stack[++top] = ch;
}

// Pop function
char pop()
{
    if (top == -1)
        return '\0';
    return stack[top--];
}

// Peek function
char peek()
{
    if (top == -1)
        return '\0';
    return stack[top];
}

// Function to check precedence
int precedence(char ch)
{
    switch (ch)
    {
        case '^':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
}

int main()
{
    char infix[MAX], postfix[MAX];
    int i = 0, j = 0;
    char ch;

    printf("Enter Infix Expression: ");
    scanf("%s", infix);

    while (infix[i] != '\0')
    {
        ch = infix[i];

        // If operand
        if (isalnum(ch))
        {
            postfix[j++] = ch;
        }

        // If left parenthesis
        else if (ch == '(')
        {
            push(ch);
        }

        // If right parenthesis
        else if (ch == ')')
        {
            while (peek() != '(')
            {
                postfix[j++] = pop();
            }
            pop(); // Remove '('
        }

        // Operator
        else
        {
            while (top != -1 && precedence(peek()) >= precedence(ch))
            {
                postfix[j++] = pop();
            }
            push(ch);
        }

        i++;
    }

    // Pop remaining operators
    while (top != -1)
    {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    printf("Postfix Expression: %s\n", postfix);

    return 0;
}
