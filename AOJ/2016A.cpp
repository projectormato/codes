#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	int n, now;
	string result;
	while(true){
		cin >> n;
		if (n == 0){
			break;
		}		
		int a[n];
		for (int i = 0; i < n; ++i){
			cin >> a[i];
		}
		sort(a, a + n, greater<int>());
		for (int i = 1; i < n; ++i){
			a[i - 1] = a[i - 1] - a[i];
		}
		a[n] = 1000000;
		sort(a, a + n);
		result += a[0] + "\n";
	}

	cout << result << endl;

}