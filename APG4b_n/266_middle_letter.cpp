#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstdlib> 
#include <queue>
using namespace std;

int main() {
	string S;
	cin >> S;

	int size = S.size();
	int middle = (size / 2) + 1;
	cout << S[middle-1] << endl;
}