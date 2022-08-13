#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define span_all(a) a.begin(),a.end()

using namespace std;

int main() {
	int N;
	int M;
	int X;
	int T;
	int D;
	int start =0;
	int ans = 0;

	cin >> N >> M >> X >> T >> D;

	if (M >= X && M < N) {
		cout << T << endl;
		return 0;
	}
	start = T - (X * D);
	if (start == 0)
		start = 1;
	ans = start + (M * D);
	cout << ans << endl;
	return 0;
}