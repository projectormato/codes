#include <iostream>
#include <cmath>
using namespace std;

int main(){
	while(true){
		int h, w, rh, rw;
		int result = 100000;
		cin >> h >> w;
		if (h == 0){
			break;
		}
		int target = pow(h,2) + pow(w,2);
		for (int i = 1; i < min(h + 50, 155); ++i){
			for (int j = 1; j < min(w + 50, 155); ++j){
				int gun = pow(i,2) + pow(j,2);
				if (i != j && i < j){
					if (gun > target || (gun == target && i > h)){
						if (result > gun){
							result = gun;
							rh = i;
							rw = j;
						}
					}
				}
			}
		}
		cout << rh << " " << rw << endl;
		result = 100000;
	}
}