#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len, i;
    char temp;

    printf("Enter a string:-");
    scanf("%s", str);

    len = strlen(str);
    printf("The length of the string is %d", len);

    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("\nThe reversed string is %s", str);
}
