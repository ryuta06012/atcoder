#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define span_all(a) a.begin(),a.end()

using namespace std;

int L[100001];
int R[100001];
int C[100001];
int P[100001];
int sum1[100001] = {};
int sum2[100001] = {};

int main() {
	int N,Q;

	cin >> N;
	for (int i=0; i< N; i++)
		cin >> C[i] >> P[i];
	cin >> Q;
	for (int i=0; i< Q; i++)
		cin >> L[i] >> R[i];

	sum1[0] = 0;
	sum2[0] = 0;

	for (int i=1; i<N+1; i++) {
		sum1[i] += sum1[i-1];
		sum2[i] += sum2[i-1];
		if (C[i-1] == 1) {
			sum1[i] += P[i-1];
		}
		if (C[i-1] == 2) {
			sum2[i] += P[i-1];
		}
	}
	
	for (int i=0; i<Q; i++) {
		cout << sum1[R[i]] - sum1[L[i]-1];
		cout << " ";
		cout << sum2[R[i]] - sum2[L[i]-1] << endl;
	}
}