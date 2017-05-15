#include <iostream>
#include <map>
using namespace std;

int main(){
	long n, k, a, b;
	map <long, long> input;
	cin >> n >> k;
	for (long i = 0; i < n; ++i){
		cin >> a >> b;
		input[a] += b;
	}
	for(auto itr = input.begin(); itr != input.end(); ++itr) {
		if (0 >= (k -= itr->second)){
			cout << itr->first << endl;
			break;
		}
    }
}