#include<bits/stdc++.h>
using namespace std;
#define step(i, s, n, d) for(int i=s; i<n; i+=d)
#define FOR(i,s,n) step(i,s,n,1)
#define rep(i,n) FOR(i,0,n)
#define ll long long
typedef pair<int, int> P;

int main(){
  ll A, B, C;
  cin >> A >> B >> C;
  rep(i, C){
    if (i % 2 == 0) {
      if (A%2 == 1) {
        A -= 1;
      }
      B += A/2;
      A /= 2;
    }else{
      if (B%2 == 1) {
        B -= 1;
      }
      A += B/2;
      B /= 2;
    }
  }
  cout << A << " " << B << endl;
}