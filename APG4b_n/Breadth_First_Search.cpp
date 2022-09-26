#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdlib> 
#include <queue>
using namespace std;

/* int main() {
    int V, E;
    cin >> V >> E;
    int s, t;
    cin >> s >> t;

    vector<vector<int> > G(V);
    for (int i = 0; i < E; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        // G[b].push_back({a});
    }
    vector<bool> seen(V, false);  // 既に見たことがある頂点か記録する

    queue<int> que;
    que.emplace(s);  // sから探索する
    seen[s] = true;
    while (que.size() != 0) {     // 幅優先探索
        int state = que.front();  // 現在の状態
		cout << "state = " << state << endl;
        que.pop();
        for (auto next : G[state]) {
			cout << "next = " << next << endl;
            if (!seen[next]) {  // 未探索の時のみ行う
                seen[next] = true;
                que.emplace(next);  //次の状態をqueueへ格納
            }
        }
		cout << "------------" << endl;
    }

    if (seen[t]) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
} */

int main() {
	int V, E;
	cin >> V >> E;
	int s,t;
	cin >> s >> t;

	vector<vector<int> > G(V);
	for (int i=0; i<E; i++) {
		int a,b;
		cin >> a >> b;
		G[a].push_back(b);
	}
	vector<bool> seet(V, false);
	queue<int> que;
	que.emplace(s);
	seet[s] = true;

	while (que.size() != 0)
	{
		int state = que.front();
		que.pop();
		for (int i=0; i< G[state].size(); i++) {
			if (!seet[G[state][i]]) {
				seet[G[state][i]] = true;
				que.emplace(G[state][i]);
			}
		}
	}
	if (seet[t])
		cout << "yes" << endl;
	else
		cout << "false" << endl;
}