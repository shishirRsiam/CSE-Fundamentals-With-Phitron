#include <stdio.h>
#include <string.h>

int main(){
    //write your code here
    char string[100001];
    fgets(string, 100001, stdin);

    int stringSize = strlen(string);
    for(int i = 0; i < stringSize; i++)
    {
        if(string[i] == ',') string[i] = ' ';
        if(string[i] >= 'A' && string[i] <= 'Z') string[i] += 32;
        else string[i] -= 32;
    }

    for(int i = 0; i < stringSize; i++)
    { 
        printf("%c", string[i]);
    }
}