#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdlib> 
#include <queue>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> house(n);
	vector<pair<int, int>> blueness;

	for (int i=0; i<n; i++) {
		cin >> house[i];
		blueness.push_back(make_pair(house[i], i));
	}
	sort(blueness.rbegin(), blueness.rend());
	for (int i=0; i<n; i++) {
		pair<int, int> x;
		x.first = house[i];
		x.second = i;
		for (int j=0; j<n; j++) {
			if (x.first == blueness[j].first && x.second == blueness[j].second)
				continue;
			else {
				cout << blueness[j].first << endl;
				break;
			}
		} 
	}
	return 0;
}