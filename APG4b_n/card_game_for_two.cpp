#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int N;

int main() {
	int N;
	cin >> N;
	vector<int> A(N);
	int arice=0;
	int bob = 0;

	for (int i=0; i < N; i++) {
		cin >> A[i];
	}
	sort(A.begin(), A.end(), greater<int>());
	for (int i=0; i < N; i++) {
		if (i % 2 == 0)
			arice += A.at(i);
		else
			bob += A.at(i);
	}
	cout << arice - bob << endl;
    return 0;
}