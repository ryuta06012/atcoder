#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include<map>

using namespace std;
int N;

int main() {
	int N,X,Y,Z;

	cin >> N >> X >> Y >> Z;

	map<int,int> math;
	map<int,int> english;
	map<int,int> sum;
	vector<int > ans(N);
	int maxvalue = -1;
	int maxkey = 0;

	for (int i=0; i<N; i++)
		cin >> math[i+1]; 
	for (int i=0; i<N; i++) {
		cin >> english[i+1];
		sum[i+1] = math[i+1] + english[i+1];
	}
	int n = N;
	for (int i=0; i < X; i++) {
		for (int i=0; i <N; i++) {
			if (math[i+1] > maxvalue) {
				maxvalue = math[i+1];
				maxkey = i+1;
			}
		}
		ans.push_back(maxkey);
		math[maxkey] = -1;
		english[maxkey] = -1;
		sum[maxkey] = -1;
		maxvalue = -1;
	}
	maxvalue = -1;
	for (int i=0; i < Y; i++) {
		for (int j=0; j <N; j++) {
			if (english[i+1] > maxvalue) {
				maxvalue = english[j+1];
				maxkey = j+1;
			}
		}
		ans.push_back(maxkey);
		english[maxkey] = -1;
		sum[maxkey] = -1;
		maxvalue = -1;
	}
	maxvalue = -1;
	for (int i=0; i < Z; i++) {
		for (int j=0; j < N; j++) {
			if (sum[j+1] > maxvalue) {
				maxvalue = sum[j+1];
				maxkey = j+1;
			}
		}
		ans.push_back(maxkey);
		sum[maxkey] = -1;
		maxvalue = -1;
	}

	sort(ans.begin(), ans.end());
	for (int i=0; i<ans.size(); i++) {
		cout << ans.at(i) << endl;
	}

	/* for (int i=0; i <Y; i++) {
		int key = english.begin()->first;
		cout << key << endl;
		english.erase(key);
		sum.erase(key);
	}
	for (int i=0; i < Z; i++) {
		int key = sum.begin()->first;
		cout << key << endl;
	} */

	

}