#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

template<typename T>
std::ostream& operator<<(std::ostream& stream, const std::vector<T>& vec) {
  for ( const T& item : vec ) { // vec内の各要素:itemに対し
    stream << item << ' '; // それをstreamに<<する。(ついでに' 'も)
  }
  return stream;
}

int main() {
	int N, M, K;
	cin >> N >> M >> K;

	int set = N / M;
	int mod = N % M;
	int n;
	cout << "set = "<< set << "mod = "<< mod << endl;
	if (mod != 0) {
		set++;
	}
	int num = 1;
	int card = M;
	vector< vector<int> > arry(set, vector<int>(M));
	for (int i=0; i < set; i++) {
		if (mod !=0 && i == set-1)
			card = mod;
		for (int j=0; j < card; j++) {
			arry.at(i).at(j) = num;
			cout << arry.at(i).at(j)<< endl;
			num++;
		}
	}
	
	for (int i=0; i<K; i++) {
		vector< int > tmp;
		vector< int > tmp2(N);
		for (int j=0; j < set/2; j++) {
			cout << "set = " << set << endl;
			cout << "arry.at(j) = " << arry.at(j) << "arry.at(set-1-j) = " << arry.at(set-1-j) << endl;
			tmp = arry.at(j);
			arry.at(j) = arry.at(set-1-j);
			arry.at(set-1-j) = tmp;
			cout << "arry.at(j) = " << arry.at(j) << "arry.at(set-1-j) = " << arry.at(set-1-j) << endl;
		}
		for (int i=0; i < set; i++) {
			for (int j=0; j < M; j++) {
				int num = arry.at(i).at(j);
				if (num != 0)
					tmp2.push_back(num);
			}
		}
		//std::vector<int>::iterator itr = begin(tmp2);
		//cout << "*itr = " << *itr << endl;
		for (int i=0; i < set; i++) {
			if (mod !=0 && i == set-1)
				card = mod;
			for (int j=0; j < card; j++) {
				if (tmp != 0)
					arry.at(i).at(j) = *itr;
				cout << arry.at(i).at(j)<< endl;
				itr++;
			}
		}
	}

	for (int i=0; i < set; i++) {
			int size = arry.at(i).size();
			cout << "size = "<< size << endl;
		for (int j=0; j < size; j++) {
			int num = arry.at(i).at(j);
			if (num != 0)
				cout << num << endl;
		}
	}
}