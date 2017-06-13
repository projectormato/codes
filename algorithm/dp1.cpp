#include <iostream>
using namespace std;

int n, W;
int *w, *v;
int rec(int i, int j){
	int result;
	if (i == n){
		result = 0;
	}else if(j < w[i]){ //j(重さの上限)に達してしまうのでダメ
		result = rec(i + 1, j);
	}else{
		result = max( rec(i + 1 , j) , (rec(i + 1, j - w[i]) + v[i]) );
	}
	return result;
}
int main(){
	cin >> n >> W;
	w = new int[n];
	v = new int[n];
	for (int i = 0; i < n; ++i){
		cin >> w[i] >> v[i];
	}
	cout << rec(0, W) << endl;		
}