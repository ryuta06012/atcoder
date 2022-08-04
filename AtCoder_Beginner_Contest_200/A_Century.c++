#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int t;

    cin >> n;
    t = 0;
    if ((n % 100) == 0 )
        t += n / 100;
    else
        t += (n / 100) + 1;
    
    cout << t << endl;
    return (0);
}