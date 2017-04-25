#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
	stringstream ss;
	string s;
	string result[3];
	int i = 0;
	cin >> ss;
	while (getline(ss, s, ' ')) {
		result[i] = s;
		i += 1;
	}
}