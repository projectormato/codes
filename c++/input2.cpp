#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    int n[x];
    for (int i = 0; i < x; i++){
    	cin >> n[i];
    }
    cout << x + n[0] << endl;
}