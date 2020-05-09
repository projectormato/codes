#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  ll one, zero = 0;
  string s;
  cin >> s;
  rep(i, s.size()) {
    if (s[i] == '0') {
      zero++;
    } else {
      one++;
    }
  }
  cout << min(one, zero) * 2<< endl;
}
