#include <cstdlib>
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main(){
	string a,b;
	cin >> a >> b;
	string aandb = a+b;
	int result = stoi(aandb) * 2;
	cout << result <<endl;
}