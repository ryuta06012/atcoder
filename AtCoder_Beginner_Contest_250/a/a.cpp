/* #include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int h,w;
	int i,j;
	int num = 4;

	cin >> h >> w >> i >> j;

	int res = 0;

	if (i == 1 || i == h)
		res++;
	if (j == 1 || j == w)
		res++;

	res = num - res;
	cout << res << endl;

	return 0;
} */

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int main(){
  int h,w;
  int r,c;
  cin >> h >> w;
  cin >> r >> c;
  int res=0;
  if(c!=1){res++;}
  if(c!=w){res++;}
  if(r!=1){res++;}
  if(r!=h){res++;}
  cout << res << '\n';
  return 0;
}