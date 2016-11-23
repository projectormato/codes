#include <iostream>
using namespace std;
int main(){
	int max,min,day;
    cin >> min >> max >> day;
    int n[day];
    for (int i = 0; i < day; i++){
    	cin >> n[i];
    }
    for (int i = 0; i < day; i++){
    	if (n[i] <= min){
    		cout << min - n[i] << "\n";
    	}else if (n[i] <= max){
    		cout << 0 << "\n";
    	}else{
    		cout << -1 << "\n";
    	}
    }
    
}