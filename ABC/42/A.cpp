#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;


int main(){
	vector<int> a;
	int x;
	for (int i = 0; i < 3; ++i){
		cin >> x;
		a.push_back(x);
	}
	if (count(a.begin(), a.end(), 5) == 2 && count(a.begin(), a.end(), 7) == 1){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

}