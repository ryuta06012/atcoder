#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int THRESHOLD = 1000000000000000000LL;

long long gcd(long long X, long long Y) {
	if (Y == 0)
		return X;
	return gcd(Y, X% Y);
}

int main() {
	long long X,Y;

	cin >> X >> Y;
	long long C = X / gcd(X, Y);
	if (Y <= THRESHOLD / C) cout << C * Y << endl;
	else cout << "Large" << endl;
	return 0;

}