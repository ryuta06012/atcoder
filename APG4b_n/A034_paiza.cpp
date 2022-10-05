#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdlib> 
#include <queue>
#include <bitset>
using namespace std;

int main() {
	int N,X;
	cin >> N >> X;

	vector<int> money(N);
	vector<pair<int, int>> result;

	for (int i=0; i<N; i++) {
		cin >> money[i];
	}
	result.push_back({X,0});
	for (int tmp = 0; tmp < (1 << N); tmp++) {
		bitset<20> s(tmp);
		int change = X;
		for (int i=0; i<N; i++) {
			if (s.test(i)) {
				change -= money[i];
			}
		}
		if (change >= 0) result.push_back({change, s.count()});
	}
	sort(result.begin(), result.end());
	cout << result[0].first << endl;
	return 0;
}
