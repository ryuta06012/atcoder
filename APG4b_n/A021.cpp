#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdlib> 
#include <queue>
using namespace std;

const int INF = 2100100100;

int main() {
	int H,W;
	cin >> H >> W;
	vector<vector<char>> map(H, vector<char>(W, '.'));
	vector<vector<bool>> dist(H, vector<bool>(W, false));

	for (int i=0; i<H; i++) {
		for (int j=0; j<W; j++) {
			cin >> map[i][j];
			if (map[i][j] == '#')
				dist[i][j] = true;
		}
	}
	vector <pair<int,int>> result;
	for (int i=0; i<H; i++) {
		for (int j=0; j<W; j++) {
			if (map[i][j] == '#' && dist[i][j] == true) {
				queue<pair<int, int>> que;
				int lcount = 0;
				int scount = 0;
				que.emplace(make_pair(i, j));
				dist[i][j] = false;
				lcount = 1;
				while (que.size() != 0) {
					pair<int, int> now = que.front();
					que.pop();
					int dy[4] = {0, 0, 1, -1};  // dx,dy は次の探索場所への距離を表す（４方向分）
        			int dx[4] = {1, -1, 0, 0};
					for (int i=0; i< 4; i++) {
						int ny = now.first + dy[i];
						int nx = now.second + dx[i];
						if (ny < 0 || ny >= H || nx < 0 || nx >= W) {
							scount += 1;
							continue;
						}
						if (map[ny][nx] == '.') {
							scount += 1;
							continue;
						}
						if (dist[ny][nx] == false) continue;
						que.push(make_pair(ny, nx));
						dist[ny][nx] = false;
						lcount += 1;
					}
				}
				result.push_back({lcount, scount});
				//cout << lcount << " " << scount << endl;
			}
		}
	}
	sort(result.rbegin(), result.rend());
	for (auto res : result) {
		cout << res.first << " " << res.second << endl;
	}
}

