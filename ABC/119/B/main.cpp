#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  string s;
  int n;
  double kane, res = 0;
  cin >> n;
  rep(i, n) {
    cin >> kane >> s;
    if (s == "JPY") {
      res += kane;
    }else {
      res += kane * 380000;
    }
  }
  cout << res << endl;
}
