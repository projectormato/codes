#include <iostream>
#include <vector>
using namespace std;
int main(){
	int m, min, max;
	vector<int> point;
	while(true){
		cin >> m >> min >> max;
		// if (m == min == max == 0){
		// 	break;
		// }
		for (int i = 0; i < m; ++i){
			cin >> point[i];
		}
	}
	
	cout << m << min << max << point[2] << endl;

}