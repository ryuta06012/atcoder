#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define span_all(a) a.begin(),a.end()

using namespace std;
 
int main () {
  	string A;
	cin >> A;
	
	int N = A.size();
	int sum = 0;
	for (int tmp = 0; tmp < (1 << N-1); tmp++) {
		bitset<10> s(tmp);
		for (int i = 0; i < N; i++) {
			if (s.test(i)) {
				cout << "------" << endl;
				cout << "A.at(i) = " << A.at(i) << endl;
				sum += A.at(i) - '0';
			}
		}
	}
	cout << sum << endl;
	return 0;
}