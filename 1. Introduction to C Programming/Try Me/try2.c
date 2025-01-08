#include <stdio.h>

int main() 
{
    char a[] = "C";
    for (int c = 0; a[c] != 0; c++) 
    {
        printf("%c", a[c]);
    }
    printf("\n");
    char b[] = "Language";
    for (int c = 0; b[c] != 0; c++) 
    {
        printf("%c", b[c]);
    }
    printf("\n");
    char d[] = "Welcome To C!!";
    for (int c = 0; d[c] != 0; c++) 
    {
        printf("%c", d[c]);
    }

    return 0;
}
