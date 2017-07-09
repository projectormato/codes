#include <iostream>
using namespace std;

int main(){
	bool lflag = false;
	int h, flag, now, point;
	int result = 0;
 	cin >> h;
	int stones[h][5];
	for (int i = 0; i < h; ++i){
		for (int j = 0; j < 5; ++j){
			cin >> stones[i][j];
		}
	}


	for (int i = 0; i < h; ++i){
		flag = 1;
		for (int j = 0; j < 4; ++j){
			now = stones[i][j];
			if (now == stones[i][j+1]){
				flag += 1;
			}else{
				flag = 1;
			}
			if (flag >= 3){
				lflag = true;
				point = now * flag;
			}
		}
		if (lflag){
			result += point;
		}
	}
	cout << result << endl;
}


