#include <iostream>
#include <utility>
using namespace std;

int main(){
	int n;
	cin >> n;
	pair<int, int> f[n] = {};
	for (int i = 0; i < n; ++i){
		cin >> f[i];
	}
	cout << f[1];
}