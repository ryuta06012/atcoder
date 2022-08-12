#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define span_all(a) a.begin(),a.end()

using namespace std;
 
int main() {
    string S;
    cin >> S;
    int N = S.size();
    long long res = 0;
	int tmp;
	int ans = 0;
    for (int bit = 0; bit < (1<<(N-1)); ++bit) {
       bitset<10> s(bit);
	   tmp = 0;
	   for (int i=0; i< N - 1; i++) {
			tmp *= 10;
			tmp += S[i] - '0';
			if (s.test(i)) {
				res += tmp;
				tmp = 0;
			}
	   }
	   tmp *= 10;
	   tmp += S.back() - '0';
	   res = res + tmp;
	}
	cout << "res = " << res << endl;
	return 0;
}