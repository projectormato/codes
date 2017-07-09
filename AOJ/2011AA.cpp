#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;


int main(){
	// int q[123456*2] = {};
	while(true){
		bool flag = true;
		int n;
		cin >> n;
		int result = n == 1 ? 1 : 0; //素数の数
		if (n == 0){
			break;
		}
		for (int i = n%2==0 ? n+1:n+2; i <= n*2; i+=2){
			flag = true;
			for (int j = 3; j <= pow(i, 0.5); j+=2){
				// if(q[i] == 2){
				// 	result++;
				// 	break;
				// }else if (q[i] == 3){
				// 	break;
				// }
				if (i % j == 0){
					// cout << i << j << result << endl;
					flag = false;
					// q[i] = 2;
					break;
				}
			}
			if (flag){
				// cout << "加算" << endl;
				result ++;
			}
			// if (q[i] == 0){
			// 	q[i] = 3;
			// }
		}
		cout << result << endl;

	}
}