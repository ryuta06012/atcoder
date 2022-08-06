#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int N;

bool is_vaild_move(vector<string> &bord, vector<vector<bool> > &check, int x, int y) {
	int N = bord.size();
	if (x <= -1 || y <= -1 || x >= N)
		return false;
	if (bord.at(y).at(x) == '#')
		return false;

	if (check.at(y).at(x))
		return false;
	
	return true;
}

bool reachble(vector<string> &bord, vector<vector<bool> > &check, int x, int y) {
	
	int N = bord.size();

	if (x == N - 1 && y == N - 1)
		return true;
	
	check.at(y).at(x) = true;

	bool result = false;
	// up
	if (is_vaild_move(bord, check, x, y-1) && reachble(bord, check, x, y - 1))
		return true;
	// down
	if (is_vaild_move(bord, check, x, y+1) && reachble(bord, check, x, y+1))
		return true;
	// right
	if (is_vaild_move(bord, check, x+1, y) && reachble(bord, check, x+1, y))
		return true;
	// left
	if (is_vaild_move(bord, check, x-1, y) && reachble(bord, check, x-1, y))
		return true;

	return true;
}


int main() {
	int N;

	cin >> N;
	vector<string> bord(N);

	for (int i=0; i < N; i++)
		cin >> bord.at(i);

	vector< vector<bool> > check(N, vector<bool>(N, false));

	if (reachble(bord, check, 0, 0))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
    return 0;
}