#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i){
		int y, m, d;
		int result = 0; 
		cin >> y >> m >> d;
		int MY, MM, MD;
		MY = 999;
		MM = 10;
		MD = 20;
		result += MD-d; //日の差
		int dmm = y % 3 == 0? (MM-m) * 20 + 1: ((MM-m)*20)-((MM-m)/2);
		result += dmm; //月の差
		for (int i = y; i < MY; ++i){
			if ((i+1) % 3 == 0){
				result += 200;
			}else{
				result += 195;
			}
		}
		cout << result << endl;
	}
}