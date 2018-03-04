#include <iostream>
using namespace std;

int main(){
	int n, m;
	int ai, bi;
	cin >> n >> m;
	int result[n] = {0};
	for (int i = 0; i < m; ++i){
		cin >> ai >> bi;
		result[ai -1] += 1;
		result[bi -1] += 1;
	}
	for (int i = 0; i <  n; ++i){
		cout << result[i] << endl;
	}
}