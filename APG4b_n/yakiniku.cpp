#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define span_all(a) a.begin(),a.end()
using namespace std;
int N;
int t[5]

int greety(int &t) {
	int a=0;
	int b=0;
	int t=0;
	
	for (int i=0; i<N; i++) {
		if (a<b)
			a += t[i];
		else
			b += t[i];
	}
	return max(a, b);
}

void main() {
	cin >> N;
	for (int i=0; i<N; i++)
		cin >> t[i];
	sort(span_all(t));
	reverse(span_all(t));
	cout << greety << endl;
}