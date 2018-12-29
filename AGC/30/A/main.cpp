#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  ll A, B, C, res = 0;
  cin >> A >> B >> C;
  if (A + B >= C) {
    res = B + C; //全部食べられる
  }else {
    res = B + (A+B+1);
  }
  cout << res << endl;
}
