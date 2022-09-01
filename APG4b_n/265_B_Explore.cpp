#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdlib> 
using namespace std;

int main() {
	int N, M, T;
	int ans=0;
	int index, t;

	cin >> N >> M >> T;
	vector<int> arry(N-1);

	for (int i=0; i< N-1; i++)
		cin >> arry[i];
	for (int i=0; i<N-1; i++)
		ans += arry[i];
	for (int i=0; i<M; i++) {
		cin >> index >> t;
		arry[index-1] -= t;
	}
	for (int i=0; i<N-1; i++) {
		T -= arry[i];
		if (T <= 0) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}