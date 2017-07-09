#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n;
	string target[n];
	map<string, int> mp;
	for (int i = 0; i < n; ++i){
		cin >> target[i];
		mp[target[i]] += 1;
	}

	for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << "key = " << itr->first << ", val = " << itr->second << endl;    // 値を表示
    }
}