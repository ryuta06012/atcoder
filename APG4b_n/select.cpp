#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
#include <cstdlib>
using namespace std;

int A[1001];
int B[1001];

int main() {
	int N, K;
	int diff = 0;;

	cin >> N >> K;
	for (int i=0; i<N; i++)
		cin >> A[i];
	for (int i=0; i<N; i++) {
		cin >> B[i];
		diff += abs(A[i] - B[i]);
	}

	if (K < diff || K == diff+1)
		cout << "No" << endl;
	if (K > diff+1 || K == diff)
		cout << "Yes" << endl;
}