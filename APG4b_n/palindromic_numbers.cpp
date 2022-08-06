#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int N;

int main() {
	int N, M;
	cin >> N >> M;
	int num;
	int remaind;
	int tmp;
	int cnt = 0;

	for (int i=N; i < M + 1; i++) {
		int reverce = 0;
		tmp = i;
		while (tmp != 0) {
			remaind = tmp % 10;
			reverce = reverce * 10 + remaind;
			tmp /= 10;
		}
		if (reverce == i)
			cnt++;
	}
	cout << cnt << endl;
    return 0;
}