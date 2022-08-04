#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int N;

int main() {
    int N,M;
    cin >> N;
	string blue[101];
	string red[101];

	for (int i=0; i<N; i++) {
		cin >> blue[i];
	}
	cin >> M;

	for (int i=0; i<M; i++) {
		cin >> red[i];
	}
	int ans = 0;	
	for (int si=0; si < N; si++) {
		int point = 0;
		for (int i=0; i < N; i++) {
			if (blue[i] == blue[si])
				point++;
		}
		for (int i=0; i<M; i++) {
			if (red[i] == blue[si])
				point--;
		}
		ans = max(ans, point);
	}
	cout << ans << endl;
    return 0;
}