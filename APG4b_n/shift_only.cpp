#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int N;

int main() {
	int N;
	int A[201];
	int cnt = 0;
	int count;
	cin >> N;
	
	for (int i=0; i<N; i++)
		cin >> A[i];
	
	count = 0;
	bool flag = true;
	while (flag) {
		cnt =0;
		for (int i=0; i<N; i++) {
			if (A[i] % 2 == 0) {
				A[i] /= 2;
				cnt++;
			}
		}
		if (cnt == N)
			count++;
		else
			flag = false;
	}
	cout << count << endl;
    return 0;
}