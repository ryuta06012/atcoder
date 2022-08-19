#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

long long gcd_r(long long a, long long b) {
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }

    return gcd_r(b, a % b);
}

long long gcd(long long x, long long y) {
    long long big, small;

    if (x > y) {
        big = x;
        small = y;
    } else {
        big = y;
        small = x;
    }

    return gcd_r(big, small);
}

long long gcd_n(long long nums[], unsigned int n) {

    if (n == 0) {
        return 0;
    }

    long long ans = nums[0];
    for (int i = 1; i < n; i++) {
        ans = gcd(ans, nums[i]);
    }

    return ans;
}

int main(void) {
	long long nums[3];
	for (int i=0; i<3; i++)
		cin >> nums[i];
	long long ans;
	long long factor;
  	ans = gcd_n(nums, sizeof(nums) / sizeof(nums[0]));
	factor = 0;
	for (int i=0; i<3; i++) {
		factor += (nums[i] / ans) - 1;
	}
	cout << factor << endl;
    return 0;
}