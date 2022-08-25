#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	int N, Q;
	cin >> N >> Q;
	vector< int >arry(N);

	for (int i=0; i<N; i++)
		cin >> arry.at(i);

	vector<vector <int> > T(Q, vector<int>(3));
	for (int i=0; i<Q; i++) {
		for (int j=0; j<3; j++)
			cin >> T.at(i).at(j);
	}
	int shift = 0;
	for (int i=0; i<Q; i++) {
		if (T.at(i).at(0) == 1) {
			swap(arry.at(((T.at(i).at(1) - 1) + shift) % N), arry.at(((T.at(i).at(2) - 1) + shift) % N));
			for (int x=0; x<N; x++)
				cout << arry.at(x) << " ";
			cout << endl;
		}
		else if (T.at(i).at(0) == 2) {
			shift = (shift + N - 1) % N;
			cout << "shift = " << shift << endl;
		}
		else
			cout << arry.at(((T.at(i).at(1) - 1) + shift) % N) << endl;
	}
	return 0;
}