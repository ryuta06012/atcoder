#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define span_all(a) a.begin(),a.end()

using namespace std;

int main() {
	int N;
	bool flag = true;
	cin >> N;

	vector< vector<char> > map(N+1, vector<char>(N+1));

	for (int i=1; i < N+1; i++) {
		for (int j=1; j<N+1; j++){
			cin >> map.at(i).at(j);
		}
	}

	for (int i=1; i < N+1; i++) {
		for (int j=1; j<N+1; j++){
			if (i==j)
				continue;
			if (map.at(i).at(j) == 'W' && map.at(j).at(i) == 'L') {
				continue;
			} else if (map.at(i).at(j) == 'L' && map.at(j).at(i) == 'W') {
				continue;
			} else if (map.at(i).at(j) == 'D' && map.at(j).at(i) == 'D') {
				continue;
			} else {
				flag = false;
				cout << "incorrect" << endl;
				return 0;
			}
		}
	}
	cout << "correct" << endl;
	return 0;
}