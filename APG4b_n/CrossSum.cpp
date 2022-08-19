#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define span_all(a) a.begin(),a.end()

using namespace std;

int main() {
	int H, W;
	cin >> H >> W;

	vector< vector<int> > map(H, vector<int>(W));
	vector< vector<int> > ans(H, vector<int>(W));
	vector< int> wide(H);
	vector< int > hight(W);

	for (int i=0; i<H; i++) {
		for (int j=0; j<W; j++) {
			cin >> map.at(i).at(j);
			wide.at(i) += map.at(i).at(j);
		}
	}

	for (int i=0; i<H; i++) {
		for (int j=0; j<W; j++) {
			if (i == 0)
				for (int x=i; x<H; x++)
					hight.at(j) += map.at(x).at(j);
			ans.at(i).at(j) = wide.at(i) + hight.at(j) - map.at(i).at(j);
			cout << ans.at(i).at(j);
			cout << " ";
		}
		cout << endl;
	}
}