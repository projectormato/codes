#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	while(true){
		int m, min, max;
		int result = 0;
		int ans = 100;
		cin >> m >> min >> max;
		if (m ==0 && min == 0 && max == 0){
			break;
		}
		int p[m];
		for (int i = 0; i < m; ++i){
			cin >> p[i];
		}
		// sort(p, p + m, greater<int>());
		for (int i = min; i <= max; ++i){
			if (result <= p[i-1] - p[i]){
				result = p[i-1] - p[i];
				ans = i;
			}
		}
		cout << ans << endl;
	}
}