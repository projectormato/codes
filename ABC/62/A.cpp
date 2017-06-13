#include <iostream>
using namespace std;
int main(){
	int g1[] = {1, 3, 5, 7, 8, 10, 12};
	int g2[] = {4, 6, 9, 11};
	int g3[] = {2};
	int x, y;
	cin >> x >> y;
	for (int i = 0; i < 7; ++i){
		if (g1[i] == x){
			x = 1;
		}else if(g2[i] == x){
			x = 2;
		}else{
			x = 3;
		}
		if (g1[i] == y){
			y = 1;
		}else if(g2[i] == y){
			y = 2;
		}else if(g3[i] == y){
			y = 3;
		}
	}

	if (x == y){
		cout << x << y << endl;
		cout << "Yes" << endl;
	}else{
		cout << x << y << endl;
		cout << "No" << endl;
	}
}