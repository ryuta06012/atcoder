#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define span_all(a) a.begin(),a.end()

using namespace std;
 
int main () {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
 
  bool ans = false;
 
  // すべての選び方を試して、総和がKになるものがあるかを調べる
  for (int tmp = 0; tmp < (1 << 3); tmp++) {
    bitset<20> s(tmp);  // 最大20個なので20ビットのビット列として扱う
 
    // ビット列の1のビットに対応する整数を選んだとみなして総和を求める
    int sum = 0;
	cout << "---------" << endl;
	cout << s << endl;
    for (int i = 0; i < N; i++) {
      if (s.test(i)) {
		cout << "sum = " << sum << endl;
		sum += A.at(i);
		cout << "sum = " << sum << endl;
      }
    }
    if (sum == K) {
		cout << "sum = " << sum << ": s = " << s << endl;
    	ans = true;
    }
  }
 
  if (ans) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}