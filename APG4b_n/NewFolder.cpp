#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include<map>
using namespace std;
int N;

int main() {
	int N;
	cin >> N;
	map<string,int> cnt;
	string s;

	for (int i=0; i<N; i++) {
		cin >> s;
		if (cnt[s] == 0)
			cout << s << endl;
		else
			cout << s << "(" << cnt[s] << ")" << endl;
		cnt[s]++;
	}
    return 0;
}