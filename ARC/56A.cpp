#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	long long a, b, k, l;
	cin >> a >> b >> k >> l;
	long long ans1 = (k / l) * b;
	int ans2 = min( ((k % l) * a), b );
	long long result = ans1 + ans2;
	cout << result << endl;
}