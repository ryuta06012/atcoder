#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> a(3);

    cin >> a[0] >> a[1] >> a[2];
    string ans = "No";

    if ((a[0] + a[1]) == (a[2] * 2))
        ans = "yes";
    else if ((a[1] + a[2]) == (a[0] * 2))
        ans = "yes";
    else if ((a[2] + a[0]) == (a[1] * 2))
        ans = "yes";

    cout << ans << endl;
}