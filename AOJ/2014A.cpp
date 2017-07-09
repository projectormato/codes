#include <iostream>
using namespace std;

int main(){
	while(true){
		int x, y, s;
		int result = 0;
		cin >> x >> y >> s;

		if (x == 0){
			break;
		}
		for (int i = 1; i <= s/2; ++i){
			for (int j = 1; j < s; ++j){
				int pricex = (i*(100+x)/100) + (j*(100+x)/100);
				if (pricex == s){
					int pricey = (i*(100+y)/100) + (j*(100+y)/100);
					result = pricey > result ? pricey : result;
				}
			}
		}
		cout << result << endl;
	}
}