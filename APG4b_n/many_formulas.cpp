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
    for (int bit = 0; bit < (1<<(N-1)); ++bit) {
        long long tmp = 0;
		bitset<3> s(bit);
		cout << "(1<<(N-1))" << (1<<(N-1)) << endl;
		cout << "-----------first--------" << endl;
		cout << "s = "<< s << endl;
        for (int i = 0; i < N-1; ++i) {
			bitset<3> t(i);
            tmp *= 10;
            tmp += S[i] - '0';
			cout << "--------" << endl;
			cout << "i = " << i << "bit = " << bit << endl;
			cout << "tmp = " << tmp << endl;
			cout << "(1<<i)"<< (1<<i) << endl;
			cout << "bit & (1<<i) = " << (bit & (1<<i)) << endl;
            if (bit & (1<<i)) {
				cout << "tmp = " << tmp << endl;
				res += tmp;
				cout << "res = " << res << endl;
				tmp = 0;
			}
        }
		cout << "-----------middle--------" << endl;
		cout << "tmp = " << tmp << endl; 
        tmp *= 10;
		cout << "tmp = " << tmp << endl; 
        tmp += S.back() - '0';
		cout << "tmp = " << tmp << endl; 
        res += tmp;
		cout << "res = " << res << endl;
		cout << "-----------end--------" << endl;
    }
    cout << res << endl;
}