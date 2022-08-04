#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int h,w,x,y;
    char str[100][100];
    int i,j,count;

    scanf("%d %d %d %d\n",&h,&w,&x,&y);

    for (i=0; i < h; i++)
    {
            scanf("%s", str[i]);
    }
    count = -3;
    for (i= x - 1; i < h && (str[i][y-1] != '#'); i++) count++;
    for (i = x - 1; i >= 0 && (str[i][y-1] != '#'); i--) count++;
    for (j= y-1; j < w && (str[x-1][j] != '#'); j++) count++;
    for (j= y - 1; j >= 0 && (str[x-1][j] != '#'); j--) count++;

    printf("%d\n", count);

    return 0;
}