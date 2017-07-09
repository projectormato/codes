#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;


int main(){
	string s;
	cin >> s;
	char keys[] = {'(', ')', '[', ']'};
	for (int i = 0; i < s.size(); ++i){
		if (Array.IndexOf(keys, s[i]) >= 0){
			cout << i << endl;
		}
	}

}