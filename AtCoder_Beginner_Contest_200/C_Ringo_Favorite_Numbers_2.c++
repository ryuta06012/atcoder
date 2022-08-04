#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int i,j,c;
    cin >> n;
    vector<int> vec(n);

    for (i=0; i < n; i++)
        cin >> vec.at(i);
    
    c=0;
    for(i=0; i < n; i++)
    {
        j=1;
        for(j=1; i+j < n; j++)
        {
            if(((vec.at(i)-vec.at(i+j)) % 200) == 0 || (vec.at(i)-vec.at(i+j)) == 0)
                c++;
        }
    }
    cout << c << endl;
    return(0);
}