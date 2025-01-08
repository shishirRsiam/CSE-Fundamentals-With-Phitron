#include <stdio.h>

void function(char *a[])
{
    printf("%s", a[0]);
}

int main()
{
    char c[100];
    // char *c_ptr[1];  // Create an array of pointers to char

    scanf("%s", c);
    // c_ptr[0] = c;   // Assign the address of the c array to the first element of c_ptr

    function(&c);

    return 0;
}
