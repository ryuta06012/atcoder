#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int N;

int main() {
    int N;
    cin >> N;
	int array[N];

	for (int i=1; i<N+1; i++) {
		cin >> array[i];
	}

	int cnt = 1;
	for (int i=0; i < 100000; i++) {
		cnt = array[cnt];
		if (cnt == 2) {
			cout << i + 1 << endl;
			return 0;
		}
	}

	cout << -1 << endl;
    return 0;
}