#include <iostream>
#include <cmath>
using namespace std;

int main(){
	long long a;
	int k;
	long long ans = 0;
	long long nityou = pow(10, 12.0) * 2;
	cin >> a >> k;
	while(true){
		if (k == 0){
			ans = nityou - a;
			break;
		}
		a += (k * a) +1;
		ans++;
		if (a >= nityou){
			break;
		}
	}
	cout << ans << endl;
}