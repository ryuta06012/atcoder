#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	int H, W;
	int row, clm;
	row = 0;
	clm = 0;

	cin >> H >> W;
	if (H == 1 || W == 1)
		cout << H * W << endl;
	else {
		clm = W / 2 + W % 2;
		row = H /2 + H % 2;
		cout << clm * row << endl;
	}
}