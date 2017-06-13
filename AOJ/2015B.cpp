#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int n;
int target[] = {5, 7, 5, 7, 7};

bool Tanka(){
	cin >> n;
	if (n == 0){
		return false;
	}
	string words[n];
	string now;
	for (int i = 0; i < n; ++i){
		cin >> words[i];
	}
	for (int start = 0; start < n; ++start){
		now = "";
		int ti = 0;
		for (int i = start; i < n; ++i){
			now += words[i];
			if (now.size() == target[ti]){
				if (ti == 4){
					cout << start + 1 << endl;
					return true;
				}
				ti ++;
				now = "";
			}else if (now.size() > target[ti]){
				break;
			}
		}
	}
	return true;
}


int main(){
	while(Tanka());
}

