#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdlib> 
using namespace std;

long long mod = 1000000007;
long long N, A[1009][8], Answer = 1;

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= 6; j++) cin >> A[i][j];
	}
	for (int i = 1; i <= N; i++) {
		Answer *= (A[i][1] + A[i][2] + A[i][3] + A[i][4] + A[i][5] + A[i][6]);
		Answer %= mod;
	}
	cout << Answer << endl;
	return 0;
}