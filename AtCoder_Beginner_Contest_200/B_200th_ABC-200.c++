#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long n,k;
    int i;

    cin >> n >> k;
    for (i = 0; i < k; i++)
    {
        if((n % 200) == 0)
            n = n / 200;
        else
            n = (n * 1000) + 200;
    }

    cout << n << endl;
    return (0);
}