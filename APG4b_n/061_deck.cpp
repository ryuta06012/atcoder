#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>
#include <deque>
using namespace std;

int main () {
	int Q, T[100001], X[100001];

	cin >> Q;
	for (int i=0; i< Q; i++)
		cin >> T[i] >> X[i];
	deque<int> v;
	for (int i=0; i<Q; i++) {
		if (T[i] == 1) v.push_front(X[i]);
		if (T[i] == 2) v.push_back(X[i]);
		if (T[i] == 3) cout << v.at(X[i]-1) << endl;
	}
}