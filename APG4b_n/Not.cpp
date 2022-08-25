#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	int N, M;
	int A[12][12];
	bool kenaku[12][12];
	int X[47];
	int Y[47];
	int Ans = INT_MAX;

	cin >> N;
	for (int i=1; i <= N; i++)
		for (int j=1; j<= N; j++)
			cin >> A[i][j];

	cin >> M;
	for (int i=0; i<M; i++)
		cin >> X[i] >> Y[i];

	vector< int > v;
	for ( int i=1; i <= N; i++)
		v.push_back(i);
	
	for (int i=0; i<M; i++) {
		kenaku[X[i]][Y[i]] = true;
		kenaku[Y[i]][X[i]] = true;
	}

	do {
		bool flag = true;
		int sum = 0;
		for (int i=0; i<N-1; i++) {
			if (kenaku[v[i]][v[i+1]] == true)
				flag = false;
		}
		for (int i=0; i<N; i++)
			sum += A[v[i]][i+1];
		if (flag == true)
			Ans = min(Ans, sum);

	}
	while(next_permutation(v.begin() ,v.end()));
	
	if (Ans == INT_MAX)
		Ans = -1;
	cout << Ans << endl;
}