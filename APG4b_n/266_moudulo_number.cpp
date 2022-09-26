#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdlib> 
#include <queue>
using namespace std;

int main() {
	long long N;
	cin >> N;
	long long m = 998244353;
	if (N >= 0)
		cout << N % m << endl;
	else
		cout << m + (N % m) << endl;
}