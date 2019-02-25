#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  string s;
  cin >> s;
  int y = stoi(s.substr(0, 4));
  if (y > 2019) {
    cout << "TBD" << endl;
  }else if (y == 2019) {
    int m = stoi(s.substr(5, 7));
    if (m > 4) {
      cout << "TBD" << endl;
    }else {
      cout << "Heisei" << endl;
    }
  }else {
    cout << "Heisei" << endl;
  }
}
