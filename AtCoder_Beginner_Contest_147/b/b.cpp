#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str;

	cin >> str;
	int len = str.length();
	int num = len / 2;
	int count = 0;
	if (len % 2 == 0)
	{
		string str1 = str.substr(0, num);
		string str2 = str.substr(num);
		cout << str1 << " : " << str2 << endl;
		for (int i=0; i<num; i++) {
			if (str1[i] == str2[i])
				i++;
			else
			{
				str2[i] == str1[i];
				count++;
			}
		}
		cout << count << endl;
	}
	/* else
	{

	} */

	return 0;
}