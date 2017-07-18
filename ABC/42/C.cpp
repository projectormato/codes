#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;


int main(){
	bool flag = true;
	int n, k;
	cin >> n >> k;
	char hate[k];
	for (int i = 0; i < k; ++i){
		cin >> hate[i];
	}

	for (int i = n; i <= n*10; ++i){
		flag = true;
		string target = to_string(i);
		for (int j = 0; j < k; ++j){
			if (target.find(hate[j]) != string::npos){
				flag = false;
			}
		}
		if (flag){
			cout << i << endl;
			break;
		}
	}

}