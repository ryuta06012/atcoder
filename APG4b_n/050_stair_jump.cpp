#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdlib> 
using namespace std;

int N, L, dp[100009];
int mod = 1000000007;
int main() {

	cin >> N >> L;

	dp[0] = 1;
	for (int i=1; i<=N; i++) {
		if (i<L) dp[i] = dp[i - 1];
		else dp[i] = (dp[i - 1]+ dp[i - L]) % mod;
	}
	cout << dp[N] << endl;
}