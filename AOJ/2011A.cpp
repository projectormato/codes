#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;


int main(){
	int q[123456*2] = {};
	while(true){
		int n;
		int result = 0;
		cin >> n;
		if (n == 0){
			break;
		}
		for (int i = n+1; i <= n*2; ++i){
			for (int j = 2; j <= pow(i, 0.5); ++j){
				if(q[i] == 2){
					result++;
					break;
				}else if (q[i] == 3){
					break;
				}
				if (i % j == 0){
					result ++;
					q[i] = 2;
					break;
				}
			}
			if (q[i] == 0){
				q[i] = 3;
			}
		}
		cout << (n*2)- n - result << endl;

	}
}