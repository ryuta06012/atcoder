#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
#include <deque>
using namespace std;

long long base8_to_long (string N) {
	long long res;

	res = 0;
	for (int i=0; i<N.size(); i++) {
		res = (res * 8) + int(N[i] - '0');
	}
	return res;
}

string base10_to_base9 (long long N) {
	string ans;

	if (N == 0)
		return "0";

	while (N>0) {
		ans = char(N % 9 + '0') + ans;
		N /= 9;
	}
	return ans;
}

int main() {
	string N;
	int K;
	cin >> N >> K;
	for (int i=0; i<K; i++) {
		N = base10_to_base9(base8_to_long(N));
		for (int j=0; j< N.size(); j++) {
			if (N[j] == '8')
				N[j] = '5';
		}
	}
	cout << N << endl;
}