#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int N;

int main() {
    int H, W;
    cin >> H >> W;
	vector< vector<char> > map(H, vector<char>(W));

    for (int i=0; i < H; i++) {
        for (int j = 0; j < W; j++)
            cin >> map.at(i).at(j);
    }

	for (int i=0; i < W + 2; i++)
		cout << '#';
	cout << endl;

    for (int i=0; i < H; i++) {
		cout << '#';
        for (int j = 0; j < W; j++)
            cout << map.at(i).at(j);
		cout << '#';
        cout << endl;
    }

	for (int i=0; i < W + 2; i++)
		cout << '#';
	cout << endl;
    return 0;
}