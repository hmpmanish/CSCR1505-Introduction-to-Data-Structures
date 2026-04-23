#include <stdio.h>
#include <conio.h>

void main()
{
    FILE *fp;
    char ch;
    
    // clrscr(); // Removed for standard compiler compatibility
    
    fp = fopen("demo.txt", "r");
    
    if(fp == NULL)
    {
        printf("File not found!");
        getch();
        return;
    }
    
    printf("--- File Contents ---\n");
    
    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    
    fclose(fp);
    getch();
}
