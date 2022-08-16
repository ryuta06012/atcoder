#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	int N =3;
	int len = 10;
	int A[10];

	for (int i=0; i< 10; i++) {
		cin >> A[i];
	}
	int ans = 0;
	int index = 0;
	for (int i=0; i<3; i++) {
		index = A[index];
	}
	cout << index << endl;
}