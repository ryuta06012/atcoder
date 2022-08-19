#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
#include <deque>
using namespace std;

bool check(string ans) {
	int dep = 0;

	for (int i=0; i<ans.size(); i++) {
		if (ans[i] == '(')	dep++;
		if (ans[i] == ')') dep--;
		if (dep < 0)
			return false;
	}
	if (dep == 0)
		return true;
	return false;
}

int main() {
	int N;
	cin >> N;

	for (int i=0; i< (1<<N); i++) {
		string ans = "";
		for (int j=N-1; j>=0; j--) {
			if ((i & (1 << j)) == 0)
				ans += "(";
			else
				ans += ")";
		}
		if (check(ans) == true)
			cout << ans << endl;
	}
}