#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int N;

int main() {
    int H, W;
    cin >> H >> W;
	vector< vector<char> > map(H, vector<char>(W));

    for (int i=0; i < H; i++) {
        for (int j = 0; j < W; j++)
            cin >> map.at(i).at(j);
    }
    for (int i=0; i < H; i++) {
        int c = 0;
        for (int j = 0; j < W; j++) {
            if (map.at(i).at(j) == '.') {
                for (int x=-1; x < 2; x++)
                    for (int y=-1; y<2; y++) {
                        int xx = i + x;
                        int yy = j + y;
                        if (xx == 0 && yy == 0)
                            continue;
                        if (xx >= H && yy <= W && yy >= 0 && xx >= 0)
                            if (map.at(xx).at(yy) == '#')
                                c++;
                    }
                map.at(i).at(j) = char('0' + c);
            }
        }
    }
    for (int i=0; i < H; i++) {
        for (int j = 0; j < W; j++)
            cout << map.at(i).at(j);
        cout << endl;
    }
    return 0;
}