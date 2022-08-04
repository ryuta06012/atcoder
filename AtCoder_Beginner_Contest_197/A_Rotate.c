#include <stdlib.h>
#include <stdio.h>

int main ()
{
    char str[3];
    char tmp;

    for (int i=0; i<3;i++)
        scanf("%c",&str[i]);
    printf("\n");

    for (int i=0; i<2; i++)
    {
        tmp = str[i];
        str[i] = str[i+1];
        str[i+1] = tmp;

    }
    
    for (int i=0; i < 3; i++)
        printf("%c", str[i]);
    printf("\n");

    return 0;
}