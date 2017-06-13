#include <iostream>
#include <algorithm>
#include <string>
#include <regex>
using namespace std;

int main(){
	regex re( R"(\d+)" );
	smatch m;
	string s;
	cin >> s;
	regex_search(s, m, re) ;
	cout << m.str() << endl;

}