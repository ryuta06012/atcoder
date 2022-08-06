#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int N;

void fill_island(vector<vector <char> > &map, vector< vector<bool> > &check, int x, int y) {
	if (x < 0 || y < 0 || x >= 10 || y >= 10)
		return ;
	if (map.at(y).at(x) == 'x')
		return ;
	if (check.at(y).at(x))
		return ;
	check.at(y).at(x) = true;
	fill_island(map, check, x, y-1);
	fill_island(map, check, x, y+1);
	fill_island(map, check, x-1, y);
	fill_island(map, check, x+1, y);
}

bool check_connect(vector<vector <char> > &map) {
	vector< vector<bool> > check(10, vector<bool>(10, false));

	int x, y;

	for (int i=0; i < 10; i++) {
		for (int j=0; j<10; j++) {
			if (map.at(i).at(j) == 'o') {
				y = i;
				x = j;
				break;
			}
		}
	}
	fill_island(map, check, x, y);

	bool ok = true;
	for (int i=0; i<10; i++)
		for (int j=0; j<10; j++) {
			if (map.at(i).at(j) == 'o') {
				if (!check.at(i).at(j))
					ok = false;
			}
		}
	return ok;
}

int main() {
	vector<vector<char> > map(10, vector<char>(10));

	for (int i=0; i< 10; i++) {
		for (int j=0; j<10; j++)
			cin >> map.at(i).at(j);
	}
		

	for (int i=0; i<10; i++) {
		for (int j= 0; j<10; j++) {
			if (map.at(i).at(j) == 'o')
				continue;
			map.at(i).at(j) = 'o';
			if (check_connect(map)) {
				cout << "YES" << endl;
				return 0;
			}
			map.at(i).at(j) = 'x';
		}
	}
	cout << "NO" << endl;
    return 0;
}