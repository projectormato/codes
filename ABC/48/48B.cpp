#include <iostream>
using namespace std;

int main(){
	long long a, b, x;
	long long re1;
	cin >> a >> b >> x;
	if (a != 0){
		re1 = (a-1) / x;
	}else{
		re1 = a / x;
	}
	long long re2 = b / x;
	long long result = re2 - re1;
	cout << result << endl;
}