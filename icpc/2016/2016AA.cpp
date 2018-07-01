#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	while(true){
		int ans = 1000000;
		cin >> n;
		if (n == 0){
			break;
		}
		int a[n];
		for (int i = 0; i < n; ++i){
			cin >> a[i];
		}
		sort(a , a+n);
		for (int i = 0; i < n-1; ++i){
			if (ans > a[i+1] - a[i]){
				ans = a[i+1] - a[i];
			}
		}
		cout << ans << endl;
	}
 
}


