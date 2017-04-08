#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	char input[n][n];
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
		cin >> input[i][j];	
		}
	}
	for (int i = n-1; i >= 0; --i){
		for (int j = 0; j < n; ++j){
		cout << input[j][i];
		}
		cout << endl;
	}
	
}

