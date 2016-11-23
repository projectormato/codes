#include <iostream>
using namespace std;
int main(){
	int a,b,n;
	cin >> a >> b >> n;
	int i = n;
	while(!(i%a == 0 && i%b == 0 && i >= n))i++;

	cout << i << "\n";
}