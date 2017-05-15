#include <iostream>
#include <map>
using namespace std;

int main(){
	map <int, int> mp;
	//mp[10] = 100;
	mp[10] += 20;
	mp[15] = 100;
	mp[2] = 10000;
 	// cout << mp[10] << endl;
	for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
		cout << "key = " << itr->first << ", val = " << itr->second << "\n";    // 値を表示
	}
}