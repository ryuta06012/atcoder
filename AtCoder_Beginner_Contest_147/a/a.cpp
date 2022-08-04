#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a1, a2, a3;

	cin >> a1 >> a2 >> a3;

	int ans = a1 + a2 + a3;

	if (ans >= 22)
		cout << "bust" << endl;
	else
		cout << "win" << endl;

	return 0;
}