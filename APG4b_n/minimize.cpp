#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	int N = s.length();
	int array[N];
	bool falg = true;

	/* for (int i=0; i< N; i++) {
		if (i > 0 && s.at(i - 1) != s.at(i)) {
			falg = false;
		}
	}
	if (falg)
		cout << s << endl; */
	sort(s.begin(), s.end());
	cout << s << endl;
}