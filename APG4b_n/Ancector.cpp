#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define span_all(a) a.begin(),a.end()

using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n - 1;i++){
		cin>>a[i];
		cout << "before = "<< a[i] << endl;
	}
	vector<int> dp(n);
	for(int i=1;i<n;i++){
		dp[i]=dp[a[i]]+1;
	}
	cout<<dp[n-1]<<endl;
}