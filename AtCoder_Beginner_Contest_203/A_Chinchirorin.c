#include<stdio.h>

int main()
{
    int a,b,c;
    int i = 0;
    scanf("%d%d%d", &a, &b ,&c);
    if (a == b) printf("%d\n", c);
    else if (b == c) printf("%d\n", a);
    else if (c == a) printf("%d\n", b);
    else printf("%d\n", 0);
    return (0);
}