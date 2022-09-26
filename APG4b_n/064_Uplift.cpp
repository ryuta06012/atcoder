#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdlib> 
using namespace std;

int main() {

	int N;
	cin >> N;
	int jobmax = -1;

	vector<vector<int> > job(N, vector<int>(2));

	for (int i=0; i<N; i++) {
		for (int j=0; j<2; j++) {
			cin >> job[i][j];
		}
		jobmax = max(jobmax, job[i][1]);
	}
	set<int> date;
	int count = 0;
	for (int i=0; i<N; i++) {
		count = job[i][0];
		for (int j=job[i][0]; j<job[i][1]+1; j++) {
			date.insert(count);
			count++;
		}
	}
	int jobm = 0;
	int result = -1;
	for (int i=1; i<jobmax+2; i++) {
		if (date.count(i) == 1)
			jobm++;
		else {
			result = max(result, jobm);
			jobm = 0;
		}
	}
	result = max(result, jobm);
	cout << result << endl;
}