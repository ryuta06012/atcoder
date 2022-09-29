#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdlib> 
#include <queue>
using namespace std;

const int INF = -1;

int main() {
	int G;
	cin >> G;
	int u, k;

	vector<vector<int>> t(G);

	for (int i=0; i<G; i++) {
		cin >> u >> k;
		for (int j=0; j<k; j++) {
			int v;
			cin >> v;
			t[u-1].push_back(v);
		}
	}
	for (int i=0; i<G; i++) {
		vector<int> seen(G, INF);
		queue<int> que;
		que.emplace(0);
		seen[0] = 0;
		while (que.size() != 0)
		{
			int state = que.front();
			que.pop();
			if (state == i)
				break;
			for (auto next : t[state]) {
				if (seen[next-1] != INF) continue;
				seen[next-1] = seen[state] + 1;
				que.emplace(next-1);
			}
		}
		cout << i+1 << " " << seen[i] << endl;
	}
	return 0;
}