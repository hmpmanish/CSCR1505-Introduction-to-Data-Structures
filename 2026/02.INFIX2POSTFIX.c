#include <stdio.h>
#include <string.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char x) {
    top = top + 1;
    stack[top] = x;
}

char pop() {
    char item;
    if (top == -1)
    {
        printf("Stack is already empty");
    }
    else{
    item = stack[top];
    top = top - 1;
    }
    return item;
}

int precedence(char ch) {
    switch (ch) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
        case '%':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

int main() {
    char INFIX[100];
    char POSTFIX[100];
    int i = 0, j = 0;
    char ch;

    printf("ENTER INFIX EXPRESSION: ");
    scanf("%s", INFIX); 

    while (INFIX[i] != '\0') {
        ch = INFIX[i];

        if (isalnum(ch)) {
            POSTFIX[j++] = ch;
        }
 
        else if (ch == '(') {
            push(ch);
        }
        
        else if (ch == ')') {
            while (stack[top] != '(') {
                POSTFIX[j++] = pop();
            }
            pop(); 
        }
        else {
            while (precedence(stack[top]) >= precedence(ch)) {
                POSTFIX[j++] = pop();
            }
            push(ch);
        }
        i++;
    }

    while (top != -1) {
        POSTFIX[j++] = pop();
    }

    POSTFIX[j] = '\0';

    printf("POSTFIX EXPRESSION: %s\n", POSTFIX);

    return 0;
}
