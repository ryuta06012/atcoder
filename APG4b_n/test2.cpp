#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdlib> 
#include <queue>
using namespace std;

int sizemin = INT_MAX;

bool check(const string &S) {
	int typecount=0;
	int charcount=0;
	int symbolcount=0;
	int count[26];

	for (int i=0; i< 26; i++) count[i] = 0;
	int n = (int)S.size();
	for (int i=0; i<n; i++) {
		char c = S.at(i);
		if (islower(c))
			count[c - 'a']++;
		if (c == '@' || c == '$' || c == '%')
			symbolcount++;
	}
	for (int i=0; i<26; i++) {
		if (count[i] != 0) {
			charcount += count[i];
			typecount++;
		}
	}
	if (charcount >= 5 && typecount >= 5 && symbolcount >= 1)
		return true;
	return false;
}

int main() {
	string S;
	cin >> S;

	vector<int> subsize;
	int n = (int)S.size();
	for (int i=0; i<n; i++) {
		int start=5;
		string substr;
		if (i+start <=n)
			substr = S.substr(i, start);
		else
			break;
		for (int j=5; j+i< n; j++) {
				substr += S[i+j];
				if (check(substr)) {
					int size = (int)substr.size();
					if (size < sizemin)
						sizemin = size;
					else
						break;
				}
		}
		if (sizemin == 6)
			break;
	}
	cout << sizemin << endl;
}