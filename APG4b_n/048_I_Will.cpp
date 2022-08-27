#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdlib> 
using namespace std;

int main() {
	int N,K;
	long long A, B;
	cin >> N >> K;

	vector<long long> v(N * 2);
	for (int i=0; i<N; i++) {
		cin >> A >> B;
		v.push_back(B);
		v.push_back(A - B);
	}
	long long ans = 0;
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	for (int i=0; i<K; i++) {
		ans += v[i];
	}
	cout << ans << endl;
}