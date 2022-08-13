#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// DPテーブル
int dp[110][10010];
int N;
int A[10010];

int rec(int i) {
	int result;
	cout << "i = "<< i << endl;
	if (i >= N) {
		return 0;
	} else {
		cout << "----------start= "<<i <<"---------"<<endl;
		cout << "result = " << result << " A[" << i << "] = " << A[i] << endl;
		int ans1 = rec(i+1);
		int ans2= rec(i+1)+A[i];
		cout << "ans1 = " << ans1 << " ans2 = " << ans2 << endl;
		result = max(ans1, ans2);
		cout << "result = " << result << " A[" << i << "] = " << A[i] << endl;
		cout << "----------end= "<<i <<"---------"<<endl;
	}
	return result;
}

int main() {
	cin >> N;
	for (int i=0; i< N; i++)
		cin >> A[i];
	cout << rec(0) << endl;
}