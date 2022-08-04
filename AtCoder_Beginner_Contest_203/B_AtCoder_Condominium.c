#include <stdio.h>

int main()
{
    int n,k,i,j,sum;

    scanf("%d%d",&n,&k);
    sum = 0;
    for(i=1; i <= n; i++)
    {
        for(j=1; j <= k; j++)
        {
            sum += (i*100 + j);
        }
    }
    printf("%d\n", sum);
    return(0);
}