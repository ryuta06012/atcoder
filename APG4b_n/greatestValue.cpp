#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define span_all(a) a.begin(),a.end()
using namespace std;

int main() {
	int N;

	int dp[10010];
	int A[10010];

	cin >> N;
	for(int i=0; i < N; i++)
		cin >> A[i];

	dp[0] =0;
	for (int i=0; i< N; i++) {
		dp[1+i] = max(dp[i], A[i]+dp[i]);
	}

	cout << dp[N] << endl;
}