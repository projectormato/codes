#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
	int r, c, sy, sx, gy, gx;
	cin >> r >> c >> sy >> sx >> gy >> gx;
	cout << r << c << gy << sx << endl;
	char meiro[r][c];
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			cin >> meiro[i][j]; 
		}
	}
	cout << meiro[0][0] << endl;

}