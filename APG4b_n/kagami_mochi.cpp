#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int N;

int main() {
	int N;
	cin >> N;
	set<int> mochi;
	int num;

	for (int i=0; i < N; i++) {
		cin >> num;
		mochi.insert(num);
	}
	cout << mochi.size() << endl;
    return 0;
}