#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;


int main(){
	string s, result;
	cin >> s;
	for (int i = 0; i < s.size(); ++i){
		if (s[i] == 'B'){
			if (!result.empty()){
				result.erase(result.size()-1);
			}
		}else{
			result += s[i];
		}
	}
	cout << result << endl;
}