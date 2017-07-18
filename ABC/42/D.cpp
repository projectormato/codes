#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;


int main(){
	int h, w, a, b;
	long long M = pow(10,9)+7;
	long long arr[100000];
	arr[0] = 1;
	cin >> h >> w >> a >> b;
	for (int i = 1; i < 100000; ++i){
		arr[i] = arr[i-1] * i % M;
	}
	
}