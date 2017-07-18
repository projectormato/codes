#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	while(true){
		int n,m;
		cin >> n >> m;
		if (n == 0){
			break;
		}
		int d[n][2];
		int max = 0, result = 0;
		for (int i = 0; i < n; ++i){
			cin >> d[i][0] >> d[i][1];
		}
		for (int i = 1; i <= m; ++i){
			for (int j = 0; j < n; ++j){
				if (d[j][0] == i){
					// cout << d[j][0] << m << max << endl;
					max = d[j][1] > max ? d[j][1] : max;
				}
			}
			// cout << max << endl;
			result += max;
			max = 0;
		}
		cout << result << endl;
	}
}