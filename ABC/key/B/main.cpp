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
  rep(i, s.length()){
    rep(j, s.length()-i) {
      string target = s.substr(0, i) + s.substr(i+j, s.length()-1);
      if (target == "keyence") {
        cout << "YES" << endl;
        exit(0);
      }
    }
  }
  cout << "NO" <<endl;
}
