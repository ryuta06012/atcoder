#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include<map>
using namespace std;
int N;

int main() {
	string str;
	cin >> str;

	map<char, int> cnt;

	int N =str.size();
	for (int i=0;i<N; i++) {
		cnt[str.at(i)];
		cnt[str.at(i)]++;
	}

	for (int i=0;i<N; i++) {
		if (cnt[str.at(i)] == 1) {
			cout << str.at(i) << endl;
			return 0;
		}
	}
	cout << -1 << endl;
    return 0;
}