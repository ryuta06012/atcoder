#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdlib> 
using namespace std;

int main() {
	int X, Y, N;

	if (X*3 > Y)
		cout << Y * (N / 3) + X * (N % 3) << endl;
	else
		cout << X * N << endl;
	return 0;
}