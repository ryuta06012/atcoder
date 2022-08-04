#include <bits/stdc++.h>
using namespace std;
#include <sstream>

int main()
{
    string s;
	ostringstream oss;

	cin >> s;

	size_t size = s.length();
	int cnt=0;
	for (size_t i=0; i<size; i++) {
		if (i == 0 || i == size - 1)
			continue;
		cnt++;
	}
	oss << cnt;
	s = s.erase(1,cnt);
	s = s.insert(1, oss.str().c_str());

	cout << s << endl;
	return 0;
}