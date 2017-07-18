#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;


int main(){
	int n, l;
	string x;
	cin >> n >> l;
	vector<string> s;
	for (int i = 0; i < n; ++i){
		cin >> x;
		s.push_back(x);
	}
	sort(s.begin(), s.end());

	for (int i = 0; i < s.size(); ++i){
		cout << s[i];
	}
	cout << endl;

}
