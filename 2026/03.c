#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<math.h>

float valStack[100];
int valTop = -1;

float precedence(char ch) {
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

void pushInt(float x) {
    valTop = valTop + 1;
    valStack[valTop] = x;
}

float popInt() {
    float item;
        if (valTop == -1)
        {
            printf("no element to evaluate");
        }
        else{
        item = valStack[valTop];
        valTop = valTop - 1;
        }
        return item;
}


float evaluatePostfix(char postfix[]) {
    int i = 0;
    char ch;

    while (postfix[i] != '\0') {
        ch = postfix[i];

        if (isdigit(ch)) {
            pushInt(ch - '0');   
        }
        else {
            float b = popInt();
            float a = popInt();

            switch (ch) {
                case '+':
                    pushInt(a + b);
                    break;
                case '-':
                    pushInt(a - b);
                    break;
                case '*':
                    pushInt(a * b);
                    break;
                case '/':
                    pushInt(a / b);
                    break;
                case '%':
                    pushInt((int)a % (int) b);
                    break;
                case '^':
                    pushInt(pow(a, b));
                    break;
            }
        }
        i++;
    }

    return popInt();
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
            pushInt(ch);
        }
        
        else if (ch == ')') {
            while (valStack[valTop] != '(') {
                POSTFIX[j++] = popInt();
            }
            popInt(); 
        }
        else {
            while (valTop!=-1 && precedence(valStack[valTop]) >= precedence(ch)) {
                POSTFIX[j++] = popInt();
            }
            pushInt(ch);
        }
        i++;
    }

    while (valTop != -1) {
        POSTFIX[j++] = popInt();
    }

    POSTFIX[j] = '\0';

    printf("POSTFIX EXPRESSION: %s\n", POSTFIX);
    
    float result = evaluatePostfix(POSTFIX);

    printf("RESULT = %f\n", result);

    return 0;
}
