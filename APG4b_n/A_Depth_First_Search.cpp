#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdlib> 
#include <queue>
using namespace std;

const int INF = 2100100100;

vector<vector<char> > map;
vector<vector<int> > seets;

int main() {
	int H, W;
	cin >> H >> W;
	int sx, sy, gx, gy;

	map.assign(H, vector<char>(W, '.'));
	seets.assign(H, vector<int>(W, INF));

	for (int i=0; i<H; i++) {
		for (int j=0; j<W; j++) {
			cin >> map[i][j];
			if (map[i][j] == 's') {
				sx = j;
				sy = i;
			}
			if (map[i][j] == 'g') {
				gx = j;
				gy = i; 
			}
		}
	}

	queue<pair<int, int>> que;
	que.emplace(make_pair(sy, sx));
	seets[sy][sx] = 0;
	while (que.size() != 0)
	{
		pair<int, int> now = que.front();
		cout << now.first << " , " << now.second << endl;
		que.pop();
		if (now.first == gy && now.second == gx)
			break;
		int sy[4] = {0, 0, -1, 1};
		int sx[4] = {-1, 1, 0, 0};
		for (int i=0; i<4; i++) {
			int ny = now.first + sy[i];
			int nx = now.second + sx[i];

			if (ny < 0 || H <= ny || nx < 0 || W <= nx)
				continue;
			if (map[ny][nx] == '#') continue;
			if (seets[ny][nx] != INF) continue;
			que.emplace(make_pair(ny, nx));
			seets[ny][nx] = seets[now.first][now.second] + 1;
		}
	}
    if (seets[gy][gx] == INF)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	cout << seets[gy][gx] << endl;
	return 0;
}